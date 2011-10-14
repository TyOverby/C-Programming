/* Name: 2.c
 * Purpose: To compute the volume of a sphere
 * Author: Ty Overby
 */
#include <stdio.h>
#define PI 3.14159268f

int main(void){
	printf("Please input the radius of the sphere:\n");
	
	float radius;
	scanf("%f",&radius);

	float radiusCubed = radius*radius*radius;
	float volume = (4.0f/3.0f)*PI*radiusCubed;
	
	printf("Volume: %f\n",volume);
	return 0;
}
