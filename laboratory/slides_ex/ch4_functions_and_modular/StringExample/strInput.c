#include <stdio.h>

int main()
{
    char name1[100];
    printf("Name1? ");
    scanf("%s", name1);           // if you enter mohammed
    printf("Name1: %s\n", name1); // Name1: mohammed

    // to print number of characters from the string put %.5 (do not forget the . (dot)
    // First 3 characters: moh
    printf("First 3 characters: %.3s\n", name1);

    // To read a complete line use fgets(char *,sizeof(char *),stdin) stdin means the keyboard

    // char name2[100];
    // printf("Name2? ");
    // fgets(name2, sizeof(name2), stdin); //it will add the \n in the string
    // printf("Name2: %s", name2);
    // printf("Name2: ");
    // puts(name2); //it will print \n auto

    /*
    char name3[5];
    printf("Name3? ");
    gets(name3); //out of standard c, because it will take any number of characters, overflow could happen
    printf("Name3: %s", name3);
    */

    return 1;
}
