#include <stdlib.h>
#include <stdio.h>

int main(void) {

    double A[5] = {
        [0] = 9.0,
        [1] = 2.9,
        //[2]
        [3] = 0.00007,
        [4] = 3.E+25,
    };

    for (size_t i = 0; i < 5; ++i) {
        printf("element_%zu_is_%g,_\tits_square_is_%g\n",
            i,
            A[i],
            A[i]*A[i]);
    }

    return EXIT_SUCCESS;
}
