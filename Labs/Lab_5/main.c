#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 200

void uppercase(char[]);

int main()
{
    char user_statement[MAX_LENGTH];

    printf("Enter your text: ");
    fgets(user_statement, sizeof(user_statement), stdin);
    uppercase(user_statement);
    printf("Uppercase string: %s\n", user_statement);
}

void uppercase(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;
    }
}