#include <stdio.h>

int gcf(int, int);
void swap(int*, int*);


int main(){
    int a = 4, b = 3;
    swap(&a, &b);
    printf("a = %d \nb = %d \n", a, b);
    return 0;
}

int gcf(int a, int b){
    /* if a < b swap them, to be discussed later*/
    if (b > a) swap(&a, &b);
    while (b) { 
        int temp = b ;
        b = a % b ;
        a = temp ;
    }
    return a;
}

// * the star means pointer
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}