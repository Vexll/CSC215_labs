#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    //char name1[10] = "Mohammed";
    //strlen will not count terminator \0
    //Output: Name: Mohammed, length: 8
    //printf("Name1: %s, length: %d\n",name1,strlen(name1));
//////////////////////////////////////////////////////////////////

    //char name2[10] = "Mohammed Ahmed"; //String is too long
    //printf("Name2: %s, length: %d\n",name2,strlen(name2));

    //Output (Garbage!). every time will give a different garbage
    //Name: Mohammed ....., length: 13
//////////////////////////////////////////////////////////////////
    //char name3[] = {'A', 'h', 'm', 'e', 'd','\0'};
    //printf("Name3: %s, length: %d\n",name3,strlen(name3));

    //Will print Mohamed with garbage because no terminator
    //char name4[] = {'A', 'h', 'm', 'e', 'd'};
    //printf("Name4: %s, length: %d\n",name4,strlen(name4));

    //char name5[] = "Waleed";
    //printf("Name5: %s, length: %d\n",name5,strlen(name5));

    //char name6[] = "Waleed\n"; //will count \n as 1 character only
    //printf("Name6: %s, length: %d\n",name6,strlen(name6));

    //char name7[5] = {'S', 'a', 'a', 'd', '\0'};
    //printf("Name7: %s, length: %d\n",name7,strlen(name7));

    //char name8[100];
    //do no do this
    //name8 = "Salam Mohammed";//error: assignment to expression with array type

    char name9[100] = "Salam Khaled";
    printf("Name9: %s, length: %d\n",name9,strlen(name9));
}
