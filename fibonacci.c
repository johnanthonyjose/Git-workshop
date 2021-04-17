#include <stdio.h>

/** Calculates the fibonacci number at k.
 *  Fibonacci is defined as:
 *  Fibonacci(k) = Fibonacci(k - 1) + Fibonacci(k - 2)
 *  where:
 *     Fibonacci(0) = 1
 *     Fibonacci(1) = 1
 * @param k = the kth fibonacci number
 * @return the exact value of the fibonacci number
 *  
 *  Recall: The fibonacci sequence looks like
 *      1, 1, 2, 3, 5, 8, 13, 21, 34
 *  Example:
 *      fibonacci(5); //5
 *      fibonacci(6); //8
 *      fibonacci(8); //21
 */
int fibonacci(int k) {
    //WRITE CODE HERE

    return 0; // EDIT THIS
}


int main(void) {
    int k=5;

    printf("Fibonacci at %d is %d\n", k, fibonacci(k));
    k = 6;
    printf("Fibonacci at %d is %d\n", k, fibonacci(k));
    k = 7;
    printf("Fibonacci at %d is %d\n", k, fibonacci(k));

    return 0;
}