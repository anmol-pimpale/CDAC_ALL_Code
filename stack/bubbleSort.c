#include <stdio.h>

void bubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - 1 - i; j++)
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int main() {
    int array[] = { 2, 13, 30, 99, 9 };
    int size = sizeof(array) / sizeof(array[0]);

    bubbleSort(array, size);
    printf("Sorted Array in Ascending Order: \n");
    printArray(array, size);

    return 0;
}