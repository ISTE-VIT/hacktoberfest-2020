// Created by GeorgiyX (github.com/GeorgiyX) 30.10.2020.
#include <iostream>
#include <cstring>

/**
 * Selects the pivot element (this is an element with index 0),
 * then sort the array "arr" - on the left, elements
 * smaller or equal to the pivot, and on the right, elements
 * larger. Returns the new pivot index.
 * @param arr - array pointer
 * @param arrSize - array size
 * @return the new pivot index. The element for this index is the pivot-th order statistic.
 */
size_t partition(int *arr, size_t arrSize) {
    size_t pivot = 0;
    int tmp;
    for (size_t i = 1; i < arrSize; ++i) {
        if (arr[i] <= arr[pivot]) {
            /* move an element less than or equal to pivot before pivot */
            tmp = arr[i];
            memmove(arr + pivot + 1, arr + pivot, i - pivot);
            arr[pivot] = tmp;
            pivot++;
        }
    }
    return pivot;
}

/**
 * Algorithm for searching for K-th order statistics.
 * @param arr - array pointer
 * @param arrSize - array size
 * @param k - statistics number
 * @return returns the k-th ordinal statistics, or -1 in case of failure.
 */
int kOrderStatistic(int *arr, size_t arrSize, size_t k) {
        
};

int main() {
    int arr[] = {-1, 8, 7, 1, 6, 8, 15, 2, 6, 10, 16};
    std::cout << partition(arr, sizeof(arr) / sizeof(arr[0])) << std::endl;
    return 0;
}
