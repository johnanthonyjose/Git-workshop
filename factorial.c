#include <stdio.h>


/** Calculates the factorial of n. It is defined as:
 * n! = n * (n -1) * (n - 2) * (n - 3) * (n -4)
 * @param n = initial value of n
 * @return calculated result of n!
 */
int factorial (int n) {
    // ADD CODE HERE
    return 0; // EDIT THIS
}



int main(void) {

    int k=5;

    printf("%d! = %d\n", k,factorial(k));
    k = 8;
    printf("%d! = %d\n", k,factorial(k));
    k = 10;
    printf("%d! = %d\n", k,factorial(k));

    return 0;
}