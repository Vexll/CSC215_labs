#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*
    char *s1 = (char *) malloc(100 * sizeof(char));
    strcpy(s1,"King Saud University");
    printf("S1 = %s\n" , s1); //S1 = King Saud University
    */

    /*
    char *s1 = (char *) malloc(100 * sizeof(char));
    char * s2 = "CCIS";
    strcpy(s1,s2);
    printf("S1 = %s\n" , s1); //S1 = CCIS
    printf("S2 = %s\n" , s2); //S2 = CCIS
    printf("S1[8] = %c\n",s1[8]);//S1[8] = d
    */

    char *s1 = (char *) malloc(100 * sizeof(char));
    strcpy(s1,"King Saud University");
    char *s2 = "College of Computer and Information Sciences";
    strncpy(s1,s2,7);
    printf("S1 = %s.\n" , s1); //S1 = Collegeud University.
    printf("S2 = %s.\n" , s2); //S2 = College of Computer and Information Sciences.
    //You should terminate the string s1 your self
    s1[7] = '\0';
    printf("S1 = %s.\n" , s1); //S1 = Colleg
    printf("S2 = %s.\n" , s2); //S2 = College of Computer and Information Sciences.

    /*
    char *s1 = "King Saud University";
    char *s2 = "College of Computer and Information Sciences";
    strcpy(s1,s2);
    printf("S1 = %s.\n" , s1); //overflow
    printf("S2 = %s.\n" , s2);
    */

    return 1;
}
/*
strcpy(s1, s2) : copies s2 into s1 (including ‘\0’ as last char)
strncpy(s1, s2, n) : same but only copies up to n chars of s2
strcmp(s1, s2) : returns a negative int if s1 < s2, 0 if s1 = = s2 and a positive int if s1 > s2
strncmp(s1, s2, n) : same but only compares up to n chars
strcat(s1, s2) : concatenates s2 onto s1 (this changes s1, but not s2)
strncat(s1, s2, n) : same but only concatenates up to n chars
strlen(s1) : returns the integer length of s1
strchr(s1, ch) : returns a pointer to the 1st occurrence of ch in s1 (or NULL if not found)
strrchr(s1, ch) : same but the pointer points to the last occurrence of ch
strstr(s1, s2) : substring, return a pointer to the char in s1 that starts a substring that matches s2, or NULL if the substring is not present


*/
