#include <stdio.h>

void bubbleSort(int arr[], int n);
void printArray(int arr[], int n);

// int main() {
//     int n, i;
//     scanf("%d", &n);
//     int arr[n];
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     bubbleSort(arr, n);
//     printArray(arr, n);
//     return 0;
// }

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

