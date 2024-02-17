#include <stdio.h>

void reverse(int list[], int size);

int main(){
    int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(list) / sizeof(list[0]);
    reverse(list, size);
    int i;
    for (i = 0; i < size; i++){
        printf("%d\n", list[i]);
    }
    return 0;
}

void reverse(int list[], int size){
    int index = 0;
    int i;
    for(i = size - 1; i >= (size / 2); i--){
        int temp = list[i];
        list[i] = list[index];
        list[index] = temp;
        index++;
    }
}

