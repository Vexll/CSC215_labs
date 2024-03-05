#include <stdio.h>

void reverseArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        // Swapping elements at start and end
        arr[start] = arr[start] + arr[end];
        arr[end] = arr[start] - arr[end];
        arr[start] = arr[start] - arr[end];

        // Move towards the center
        start++;
        end--;
    }
}

int main()
{
    // char subject[] = "CSC 215";
    // char *subject_ptr = "CSC 380";
    // printf("1st course: %s\n\n2nd course: %c\n", subject, subject_ptr[1]);

    int var[] = {10, 100, 200};
    int i, *ptr;
    /* let us have array address in pointer */
    ptr = var;
    int ptrz;
    ptrz = (*ptr)++;
    printf("ptr value = %d\n", *ptr);
    printf("ptrz value = %d\n", ptrz);

    printArray(var, 3);

    return 0;
}

void printArray(int ptr[], int length)
{
    int i;
    printf("[");
    for (i = 0; i < length; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("]\n");
}

/*
char *ptr = "CSC 215"

printf("%p", *ptr)    --> random memory address. compiler give you warning

printf("%p", ptr)     --> original memory address. there is no warning

printf("%p", &ptr)     --> random memory address. there is no warning

printf("%s", &ptr)     --> random characters. compiler give you warning

printf("%c", *ptr)     ---> will print first character. 'C'

printf("%c", ptr[1])   ---> will print second charater. 's', keep in mind *ptr[1] <-- this is syntax error



*/
