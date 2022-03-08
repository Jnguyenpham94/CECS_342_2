
//The implementation of merge sort in C will require a temporary array. This array has to be
/*allocated on the heap(and not the stack).Make sure to do this correctly and try to
understand why this is necessary.
4. Write a simple main function(one in C and one in Haskell) with a few test cases.Make sure
to cover edge cases like empty or invalid input.
*/

#include <stdlib.h>
#include <stdio.h>

void mergeSort(int arr[], int l, int r);

// function to swap elements
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// function to find the partition position
int partition(int array[], int low, int high) {

    // select the rightmost element as pivot
    int pivot = array[high];

    // pointer for greater element
    int i = (low - 1);

    // traverse each element of the array
    // compare them with the pivot
    for (int j = low; j < high; j++) {
        if (array[j] <= pivot) {

            // if element smaller than pivot is found
            // swap it with the greater element pointed by i
            i++;

            // swap element at i with element at j
            swap(&array[i], &array[j]);
        }
    }

    // swap the pivot element with the greater element at i
    swap(&array[i + 1], &array[high]);

    // return the partition point
    return (i + 1);
}

void quickSort(int array[], int low, int high) {
    if (low < high) {

        // find the pivot element such that
        // elements smaller than pivot are on left of pivot
        // elements greater than pivot are on right of pivot
        int pi = partition(array, low, high);

        // recursive call on the left of pivot
        quickSort(array, low, pi - 1);

        // recursive call on the right of pivot
        quickSort(array, pi + 1, high);
    }
}

void qsort2(int* a, int n) { // quick sort array a with n elements in place in C

    quickSort(a, 0, n - 1);

}


// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // create temp arrays left sub and right sub
    //TODO: error with constant expressions with size of arrays below
    int L[10], R[10];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void msort(int* a, int n) {// merge sort array a with n elements in place in C
    
    int sizeArr = sizeof(*a) / sizeof(a[0]);
    
    mergeSort(a, 0, sizeArr - 1);
} 

void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

int main()
{
    
    int testArray1[] = { 0, 0, 0, 0, 0, 0}; //same values
    int testArray2[] = { 0,0,0,5,0,0,0 }; //same values with 1 diff
    int testArray3[] = { 10,50,9,10,150,80,30 }; //bunch of different values
    int testArray4[] = { 10,50, 0,30, 9,11,150,80}; //bunch 2
    //int testArray5[1]; //empty
    char testArray6[] = { 'c', 'h', 'a', 'r'};

    //int* ptr = (int*)malloc(n * sizeof(int));
    //ptr = testArray1;
    int n = sizeof(testArray3)/sizeof(testArray3[0]);
    int size = sizeof(testArray1)/sizeof(int);
    /*
    * for (int i = 0; i < size; i++)
    {
        printf("%d\n", ptr[i]);
    }
    */


    qsort2(testArray3, n);
    msort(testArray3, n);
    return 0;
}
