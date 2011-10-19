/* Name:       1.c
 * Assignment: Write a program that asks the user to enter a two-diget number
 *             then prints the number with its digits reversed. 
 * Author:     Ty Overby 
 *
 */

#include <stdio.h>

int main(void){
	printf("Please enter a two digit number:\n");
	
	int input,i,j;
	scanf("%d",&input);

	j = input%10;
	i = (input -j)/10;	

	printf("%d%d",j,i);

	return 0;
}
