#include <stdio.h>

void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    
    while (start < end) {
        // Swapping elements at start and end
        arr[start] = arr[start] + arr[end];
        arr[end] = arr[start] - arr[end];
        arr[start] = arr[start] - arr[end];
        
        // Move towards the center
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    reverseArray(arr, n);
    
    printf("\nArray after reversing: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    
    return 0;
}
