#include <stdio.h>
int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int arrsize = (&arr)[1] - arr;
    int arr2[arrsize];
    ArrayToString(arr, arrsize);
    printf("\n");
    printf("%d\n",ArrayAverage(arr,arrsize));
    ArrayCopy(arr, arr2, arrsize);
    ArrayToString(arr2, arrsize);
    return 0;
}

int ArrayToString(int arr[], int size) {
    printf("[");
    int counter;
    for(counter = 0; counter < size; counter++) {
        printf("%d", *(arr + counter));
        if(counter != size - 1) {
      printf(", ");
  }
    }
    printf("]");
    return 0;
}

int ArrayAverage(int arr[], int size) {
    int sum = 0;
    int counter;
    for(counter = 0; counter < size; counter++) {
        sum += arr[counter];
    }
    return (sum/size);
}

int ArrayCopy(int arr[], int arr2[], int size) {
    int counter;
    for(counter = 0; counter < size; counter++) {
        arr2[counter] = arr[counter];
    }
    return 0;
}