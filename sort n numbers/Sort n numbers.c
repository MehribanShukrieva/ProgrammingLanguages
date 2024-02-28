//Write a program in C to sort n numbers in the range from 0 to n^2.
#include <stdio.h>

// Function to perform counting sort for given array considering a specific exponent
int countSort(int arr1[], int n, int exp) {
    int output[n]; // Output array to store sorted elements
    int i, ctr[n]; // Counter array to store count of occurrences for every digit
    for (int i = 0; i < n; i++)
        ctr[i] = 0;
    for (i = 0; i < n; i++)
        ctr[(arr1[i] / exp) % n]++;
    for (i = 1; i < n; i++)
        ctr[i] += ctr[i - 1];
    for (i = n - 1; i >= 0; i--) {
        output[ctr[(arr1[i] / exp) % n] - 1] = arr1[i];
        ctr[(arr1[i] / exp) % n]--;
    }
    for (i = 0; i < n; i++)
        arr1[i] = output[i];
}

// Function to perform radix sort for the given array
void sortArray(int arr1[], int n) {
    countSort(arr1, n, 1); 
    countSort(arr1, n, n);
}

// Function to print elements of the array
void printBothArr(int arr1[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d  ", arr1[i]);
}

int main() {
    int arr1[] = {37, 62, 52, 7, 48, 3, 15, 61};
    int n = sizeof(arr1) / sizeof(arr1[0]);

    printf("The given array is:  ");
    printBothArr(arr1, n);
    sortArray(arr1, n);
    
    // Display the sorted array
    printf("\nSorted array is:  ");
    printBothArr(arr1, n);

    return 0;
}

