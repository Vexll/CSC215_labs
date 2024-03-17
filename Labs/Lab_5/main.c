#include <stdio.h>
#include <string.h>

void uppercase(char[]);

int main()
{
    char test[] = "hello there_";
    printf("the word before converting: %c\n", test[0]);
    uppercase(test);
    printf("the word after converting: %s\n", test);
}

void uppercase(char str[])
{
    int length = strlen(str);
    int i;
    for (i = 0; i < length; i++)
    {
        if ('a' <= str[i] && str[i] <= 'z')
        {
            char new_letter = str[i] - 32;
            str[i] = new_letter;
        }
    }
}