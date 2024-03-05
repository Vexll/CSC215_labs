#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *s1 = "Ahmed";
    char *s2 = "Ali";

    int compare = strcmp(s1,s2);
    //case sensitive A != a, a > A, length has nothing to do with this function
    //OUTPUT: Ali is greater then Ahmed
    if (compare > 0)
        printf("%s is greater then %s\n",s1,s2);
    else if (compare < 0)
        printf("%s is greater then %s\n",s2,s1);
    else
        printf("%s equals to %s\n",s1,s2);

    s1 = "190";
    s2 = "2";

    compare = strcmp(s1,s2);
    //OUTPUT: 2 is greater then 190 , WHY?
    if (compare > 0)
        printf("%s is greater then %s\n",s1,s2);
    else if (compare < 0)
        printf("%s is greater then %s\n",s2,s1);
    else
        printf("%s equals to %s\n",s1,s2);

    s1 = "King Saud University";
    s2 = "King Khaled University";

    //Compare only the first 4 characters
    compare = strncmp(s1,s2,4);
    //OUTPUT: King Saud University equals to King Khaled University
    if (compare > 0)
        printf("%s is greater then %s\n",s1,s2);
    else if (compare < 0)
        printf("%s is greater then %s\n",s2,s1);
    else
        printf("%s equals to %s\n",s1,s2);

    s1 = "abcde";
    s2 = "abc";

    compare = strncmp(s1,s2,4);
    //OUTPUT:abcde is greater then abc
    if (compare > 0)
        printf("%s is greater then %s\n",s1,s2);
    else if (compare < 0)
        printf("%s is greater then %s\n",s2,s1);
    else
        printf("%s equals to %s\n",s1,s2);

    return 1;
}
