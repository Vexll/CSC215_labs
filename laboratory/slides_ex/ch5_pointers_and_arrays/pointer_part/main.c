#include <stdio.h>

void printArray(int *, int);
void changeFirstElement(int[], int, int);
void changeFirstElementP(int *, int, int);

int main()
{
    /*
    int *ip;
    int x = 20;
    ip = &x;
    printf("before changing the value = %d\n", x);
    printf("before pointer changing the value = %d\t address = %p\n", *ip, ip);
    x = 10;
    printf("after changing the value = %d\n", x);
    printf("after pointer changing the value = %d\t address = %p\n", *ip, ip);
    */

    int nums[] = {1, 2, 3};
    int *ptr = nums;
    printArray(ptr, 3);
    printf("\n\n");
    changeFirstElement(nums, 0, 5);
    changeFirstElementP(ptr, 2, 1);
    printArray(ptr, 3);
    return 0;
}

void printArray(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("element No.%d = %d\n", i + 1, arr[i]);
    }
}

// By passing an array
void changeFirstElement(int arr[], int index, int newValue)
{
    arr[index] = newValue;
}

// By passing a pointer
void changeFirstElementP(int *arr, int index, int newValue)
{
    arr[index] = newValue;
}