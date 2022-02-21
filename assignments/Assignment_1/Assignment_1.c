
//The implementation of merge sort in C will require a temporary array. This array has to be
/*allocated on the heap(and not the stack).Make sure to do this correctly and try to
understand why this is necessary.
4. Write a simple main function(one in C and one in Haskell) with a few test cases.Make sure
to cover edge cases like empty or invalid input.
*/

#include <stdlib.h>
#include <stdio.h>

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

void msort(int* a, int n) {// merge sort array a with n elements in place in C

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
    //msort(ptr, n);
    return 0;
}
