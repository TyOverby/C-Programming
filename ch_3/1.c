#include <stdio.h>

int main(void){
	int month, day, year;

	scanf("%d/%d/%d",&month, &day, &year);
	printf("yyyy/mm/dd\n");
	printf("%.4d/%.2d/%.2d\n",year,month,day);

	return 0;
}
