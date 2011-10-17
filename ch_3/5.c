#include <stdio.h>

int main(void){
	printf("enter 16 random numbers:\n");
	int x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16;

	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",&x1,&x2,&x3,&x4,&x5,&x6,&x7,&x8,&x9,&x10,&x11,&x12,&x13,&x14,&x15,&x16);

	printf("%3d%3d%3d%3d\n%3d%3d%3d%3d\n%3d%3d%3d%3d\n%3d%3d%3d%3d\n\n",x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16);
	
	int r1, r2, r3, r4;
	r1 = x1+x2+x3+x4;
	r2 = x5+x6+x7+x8;
	r3 = x9+x10+x11+x12;
	r4 = x13+x14+x15+x16;
	printf("Row sums %4d %4d %4d %4d\n",r1,r2,r3,r4);	

	return 0;	
}
