#include <stdio.h>
#include <string.h>

int value(char c)
{
    switch(c)
    {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int main()
{
    char roman[20];
    int i, result = 0;

    printf("Enter Roman number: ");
    scanf("%s", roman);

    for(i = 0; i < strlen(roman); i++)
    {
        if(value(roman[i]) < value(roman[i + 1]))
            result -= value(roman[i]);
        else
            result += value(roman[i]);
    }

    printf("Normal number = %d", result);

    return 0;
}