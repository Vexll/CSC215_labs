#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countCharacterInString(char *, char);
int countCharacterInString2(char *, char);
int countStringInString(char *, char *);

int main()
{
    char *s1 = malloc(100 * sizeof(char));
    char *p;

    strcpy(s1, "Salam Ahmed, How are you alal");
    printf("S1 = %s\n", s1);

    // p = strrchr(s1, '4');
    // printf("P = %s\n", p); // P = alam Ahmed, How are you

    // p = strchr(s1, 'w');
    // // P = w are you
    // if (p == NULL)
    //     printf("Did not find the character");
    // else
    //     printf("P = %s\n", p);

    // p = strchr(s1, 'z');
    // printf("P = %s\n", p);

    // // P = (null)
    // if (p == NULL)
    //     printf("Did not find the character");
    // else
    //     printf("P = %s\n", p);

    /*
    char ch = 'K';

    int count = countCharacterInString2(s1,ch);
    printf("I found \'%c\' %d time(s)",ch,count);
    */

    /*
    p = strrchr(s1,'a');
    printf("P = %s\n" , p);
    */

    p = strstr(s1, "Ahmed");
    printf("P = %s\n", p);

    // char *s2 = "al";
    // int count = countStringInString(s1,s2);
    // printf("I found \'%s\' %d time(s)",s2,count);

    return 0;
}

int countCharacterInString(char *s, char ch)
{
    int count = 0;

    while (*s != '\0')
    {
        if (*s == ch)
            count++;

        s++;
    }

    return count;
}

int countCharacterInString2(char *s, char ch)
{
    int count = 0;

    while (s != NULL)
    {
        s = strchr(s, ch);

        if (s)
        {
            s++;
            count++;
        }
    }

    return count;
}

int countStringInString(char *s1, char *s2)
{
    int count = 0;

    while (s1 != NULL)
    {
        s1 = strstr(s1, s2);

        if (s1)
        {
            s1 += strlen(s2);
            count++;
        }
    }

    return count;
}
