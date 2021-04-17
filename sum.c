#include <stdio.h>



/** Return the sum of values from a to b
 *  @param a = start value
 *  @param b = final value
 *  @return the sum, S
 * 
 * Let i = a, a + 1, a + 2, ..., b - 2, b - 1, b
 * Then S = sum of i
 * E.g.
 *    series(2,4); //  returns 9. coz, 2 + 3 + 4
 *    series(3,6); //  returns 18. coz, 3 + 4 + 5 + 6
 */ 
int series(int a, int b){
	int sum;
    //Write code here
    int i;
    for (i=a;i<=b;i++){
    	sum = sum + i;
	}

    return sum; //EDIT THIS
}


int main(void) {


    int a = 2, b=4;
    printf("The sum from %d to %d is %d\n",a,b,series(a,b));
    a = 3;
    b = 6;
    printf("The sum from %d to %d is %d\n",a,b,series(a,b));

    return 0;
}
