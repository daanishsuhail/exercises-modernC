/* this program is provided for challenge 1 
 TASK: (1) merge sorting arrays, (2) quick sorting arrays.
 a subroutine must run which checks both arrays 
 this program will be written to sort a string array */
#include <stdio.h>

int main() {
    char stringle[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int subarray_count;
    int* subcount_pass = &subarray_count;
    void arrayatomizer(char*);
    int recursion_counter = 0;
    int* counter_pass = &recursion_counter;
    printf("# of elements: %d", recursion_counter);
    return 0;
}

void arrayatomizer(char* array, int* pass) {
    if(strlen(array) > 1) {
        *pass++; 
        //!!!        
    }
}
