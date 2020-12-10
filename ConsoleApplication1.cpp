#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <iostream>

bool palindrome(char* str);
int main()
{
    char input[100],input1[100];
    int c = 0, d = 0;
    scanf_s("%[^\n]", input,100);
   // cin >> input;

    while (input[c] != '\0')
    {
        if (input[c] != ' ') {
            input1[d] = input[c];
            d++;
        }
        c++;
    }

    input1[d] = '\0';
    if (palindrome(input1))
        printf("palindrome");

    return 0;
}

bool palindrome(char* str)
{
    int l = strlen(str);
    int i;

    for (i = 0; i < l / 2+1; i++)
    {
        if (toupper(str[i]) != toupper(str[l - i - 1]))
            break;
    }

    if (i == l / 2+1)
        return true;
    else
        return false;
}
