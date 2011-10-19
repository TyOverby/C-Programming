/* Name:       2.c
 * Assignment: Write a program that asks the user to enter a three-digit number
 *             then prints the number with its digits reversed. 
 * Author:     Ty Overby 
 *
 */

#include <stdio.h>

int main(void){
	printf("Please enter a three digit number:\n");
	
	int input,a,b,c;
	scanf("%d",&input);
	
	int temp = input%100;
	c = temp%10;
	b = (temp-c)/10;
	a = (input - temp) / 100;

	printf("%d%d%d",c,b,a);

	return 0;
}
