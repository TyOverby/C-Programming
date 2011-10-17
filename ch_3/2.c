#include <stdio.h>

int main(void){
	int itemNumber;
	float unitPrice;

	int dateMonth, dateDay, dateYear;

	printf("Enter item number: ");
	scanf("%d",&itemNumber);
	
	printf("\nEnter unit price: ");
	scanf("%f",&unitPrice);

	printf("\nEnter purchase date (mm/dd/yyyy):\n");
	scanf("%d/%d/%d",&dateMonth,&dateDay,&dateYear);

	printf("Item\tPrice\tDate\n");
	printf("%d\t$%.2f\t%.2d/%.2d/%.4d\n",itemNumber,unitPrice,dateMonth,dateDay,dateYear);

	return 0;	
}
