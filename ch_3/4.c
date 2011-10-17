#include <stdio.h>

int main(void){
	printf("Please enter a telephone number of the form [(xxx) xxx-xxxx]\n");

	int one,two,three;
	scanf("(%d) %d-%d",&one,&two,&three);
	printf("%d.%d.%d\n",one,two,three);
		

	return 0;
}
