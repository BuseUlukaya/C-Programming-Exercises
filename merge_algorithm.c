#include <stdio.h>

void merge(int array[], int left, int middle, int right) {
    int l_size = middle-left + 1;
    int r_size = right - middle;
    int L[l_size];
    int R[r_size];
    int l_idx = 0, r_idx = 0, arr_idx = left;

    for(int i=0; i<l_size; i++) {
        L[i] = array[i + left];
    }
    for(int i=0; i<r_size; i++) {
        R[i] = array[middle + 1 +i];
    }
    while(l_idx < l_size && r_idx < r_size) {
        if(L[l_idx] < R[r_idx]) {
            array[arr_idx++] = L[l_idx++];
        }
        else {
            array[arr_idx++] = R[r_idx++];
        }
    }
    while(l_idx < l_size|| r_idx < r_size) {
        if(l_idx < l_size) {
            array[arr_idx++] = L[l_idx++];
        }
        else if(r_idx < r_size) {
            array[arr_idx++] = R[r_idx++];
        }
    }
}

void mergeSort(int array[], int left, int right) {
    int middle = (right+left) / 2;

    if(left >= right) {
        return;
    }
    else {
         mergeSort(array, left, middle);
         mergeSort(array, middle + 1, right);
         merge(array, left, middle, right);
    }
}

void printArray(int array[], int size) {
    for(int i=0; i<size; i++) {
        printf("%4d ", array[i]);
    }
    putchar('\n');
}

int main() {
    int array[7] = {38, 27, 43, 3, 9, 82, 10};
    printArray(array, 7);
    mergeSort(array, 0, 6);
    printArray(array, 7);
    return 0;
}
