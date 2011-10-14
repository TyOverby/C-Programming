#include <stdio.h>
float getPoly(float x);
float exponent(float x, int exp);

int main(void){
	printf("please enter a number:\n");

	float input;
	scanf("%f",&input);

	printf("%f\n",getPoly(input));

}

float getPoly(float x){
	return 3*exponent(x,5)+2*exponent(x,4)-5*exponent(x,3)+exponent(x,2)+7*x-6;
}

float exponent(float x, int exp){
	float num = x;
	for(int i=1;i<exp;i++){
		num*=x;
	}
	return num;
}
