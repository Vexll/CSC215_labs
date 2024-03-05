#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *s1 = malloc(30 * sizeof(char));
    char *s2 = malloc(30 * sizeof(char));

    strcpy(s1, "Ahmed");
    strcpy(s2, "Ali");
    // printf("S1 = %s\n", s1);
    // printf("S2 = %s\n", s2);

    // strcat(s1, s2);
    strncat(s1, s2, 1);

    printf("S1 = %s\n", s1); // AhmedAli
    printf("S2 = %s\n", s2); // Ali
    int len = strlen(s1);
    printf("length of S1 = %d\n", len);

    /*
    strcat(s1," Khaled");
    printf("S1 = %s\n" , s1); //Ahmed Khaled
    */

    /*
    strcpy(s1,"Khaled Waleed Abd Alzeez");
    strcat(s1,"Yasser Kamal");

    //S1 length: 36
    //S1 = Khaled Waleed Abd AlzeezYasser Kamal
    //strcat will keep adding starting from the \0 in s1,
    //it assumes that there is space in the memory,
    //but if it did not success then overflow will occur
    printf("S1 length: %d\n",strlen(s1));
    printf("S1 = %s\n" , s1);
    */

    // strcpy(s1,"Khaled Waleed");
    // strncat(s1," Hamd",3); //S1 = Khaled Waleed Ha
    // printf("S1 = %s\n" , s1);

    return 0;
}
