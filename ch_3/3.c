#include <stdio.h>

int main(void){
	int prefix, groupId, pubCode, itemNum, check;

	printf("Please enter the ISBN code:\n");
	scanf("%d-%d-%d-%d-%d",&prefix,&groupId,&pubCode,&itemNum,&check);

	printf("GS1 Prefix: %d\n",prefix);
	printf("Group Id:   %d\n",groupId);
	printf("Pub Code:   %d\n",pubCode);
	printf("Number:     %d\n",itemNum);
	printf("Check:      %d\n",check);

	return 0;
}
