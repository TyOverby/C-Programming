/* Name: 4.c
 * Purpose: Computes money after interest
 * Author: Ty Overby
 */

#include <stdio.h>

int main(void){
	printf("please enter the amount of money to start off with:\n");

	float amount;
	scanf("%f",&amount);
	amount*=1.05;

	printf("%.2f\n",amount);

	return 0;
}
