#include <stdio.h>
int main()
{
	int first,second,third,fourth,sum;
	float average;
	printf("enter the first score:\n");
	scanf("%d",&first);
	printf("enter the second score:\n");
	scanf("%d",&second);
	printf("enter the third score:\n");
	scanf("%d",&third);
	printf("enter the fourth score:\n");
	scanf("%d",&fourth);
	sum=first+second+third+fourth;
	printf("the total is :%d\n",sum);
	average=(sum)/4;
	printf("the average is: %f \n");
	if (average>=80)
	printf("proceed to the next stage:\n");
	else if(average>=50)
	printf("try again:\n");
	else if(average<50)
	printf("disqualified:\n");
	return 0;
}
