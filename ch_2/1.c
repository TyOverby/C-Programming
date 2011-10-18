/* Name: 1.c
 * Purpose: To print a checkmark.  Uses char arrays for strings.
 * Author: Ty Overby
 */

#include <stdio.h>

int main(void){	
	char s1[] = "        *";
	char s2[] = "       * ";
	char s3[] = "      *  ";
        char s4[] = "     *   ";
        char s5[] = "*   *    ";
        char s6[] = " * *     ";
        char s7[] = "  *      ";

	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n",s1,s2,s3,s4,s5,s6,s7);

	return 0;
}
