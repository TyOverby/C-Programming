/* Name: 5.c
 * 
 * Assignment: Rewrite the upc.c program of Section 4.1 so that the user enters
 *             11 digits at one time instead of entering one digit, then five digits,
 *             and then another five digits.
 *
 * Author: Ty Overby
 */

#include <stdio.h>

int main(void){
	printf("please enter the code\n");

	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5;
	int sum1, sum2, total, check;

	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);
	
	sum1 =  d + i2 + i4 + j1 + j3 + j5;
	sum2 = i1 + i3 + i5 + j2 + j4;
	total = 3 * sum1 + sum2;
	check = 9 - (total - 1)%10;

	printf("check digit: %d\n",check);
	
	return 0;
}
