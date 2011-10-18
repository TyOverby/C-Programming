/* Name: 1.c
 * Purpose: Input the date in month,day,year and have it output in year month day
 * Author: Ty Overby
 */

#include <stdio.h>

int main(void){
	int month, day, year;

	scanf("%d/%d/%d",&month, &day, &year);
	printf("yyyy/mm/dd\n");
	printf("%.4d/%.2d/%.2d\n",year,month,day);

	return 0;
}
