/* Name 4.c
 *
 * Assignment: Write a program that reads an integer entered by the user and
 *             displays it in octal (base 8).  The output should be displayed
 *             using five digits even if fewer digets are suficient.
 *
 * Author: Ty Overby
 */

#include <stdio.h>

int main(void){
	printf("please input an integer\n");
	
	int input;
	scanf("%d",&input);

	printf("actual: %o\n",input); /* The "%o" tells it to print in octal */

	int a,b,c,d,e,f;

	f = input%8; input /= 8;
	e = input%8; input /= 8;
	d = input%8; input /= 8;
	c = input%8; input /= 8;
	b = input%8; input /= 8;
	a = input%8; input /= 8;

	printf("calculated: %d%d%d%d%d%d\n",a,b,c,d,e,f);

	return 0;
}
