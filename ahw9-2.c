#include <stdio.h>

#define ARR_SIZE 5

void display_arr(int* arr, int length) {
    for(int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
}

void swap(int* arr, int id1, int id2) {
    int tmp = arr[id1];
    arr[id1] = arr[id2];
    arr[id2] = tmp;
}

void merge_in_place(int *arr, int left, int mid, int right) {
    int i = left;
    int j = mid + 1;

    while (i <= mid && j <= right) {

        if (arr[i] <= arr[j]) {
            i++;
        } else {
            int value = arr[j];
            int index = j;

            while (index > i) {
                arr[index] = arr[index - 1];
                index--;
            }
            arr[i] = value;

            i++;
            mid++;
            j++;
        }
    }
}

void merge_sort(int* arr, int id_start, int id_end) {

    if(id_start < id_end) {
        int m = (id_end + id_start) / 2;

        merge_sort(arr, id_start, m);
        merge_sort(arr, m + 1, id_end);

        merge_in_place(arr, id_start, m, id_end);
    }
}

int main() {
    int arr[ARR_SIZE] = {};

    for(int i = 0; i < ARR_SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    merge_sort(arr, 0, ARR_SIZE);

    printf("sorted array:\n");
    display_arr(arr, ARR_SIZE);
}
