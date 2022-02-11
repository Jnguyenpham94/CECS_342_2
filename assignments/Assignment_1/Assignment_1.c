
//The implementation of merge sort in C will require a temporary array. This array has to be
/*allocated on the heap(and not the stack).Make sure to do this correctly and try to
understand why this is necessary.
4. Write a simple main function(one in C and one in Haskell) with a few test cases.Make sure
to cover edge cases like empty or invalid input.
*/

#include <stdlib.h>
#include <stdio.h>

void qsort2(int* a, int n) { // quick sort array a with n elements in place in C

}

void msort(int* a, int n) {// merge sort array a with n elements in place in C

} 


int main()
{
    int testArray1[] = { 0,0,0,0,0,0,0 }; //same values
    int testArray2[] = { 0,0,0,5,0,0,0 }; //same values with 1 diff
    int testArray3[] = { 10,50,9,10,150,80,30 }; //bunch of different values
    int testArray4[] = { 10,50, 0,30, 9,11,150,80}; //bunch 2
    int testArray5[1]; //empty
    char testArray6[] = { 'c', 'h', 'a', 'r'};
    printf("%o", testArray6[0]);
    //qsort2(10,10);
    //msort(10, 10);
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
