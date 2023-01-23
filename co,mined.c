/* gerald manyasa
    21/05029 */
// question 1 
#include <stdio.h>
int  main()
{
	int x=25;
	
	do
{
	printf("%d:\n",x);
	x--;
}
while(x>=10);
return 0;

}
// question 2 
#include <stdio.h>
int main()
{
	int w,x,y,z;
	printf("enter w :\n");
	scanf("%d",&w);
	printf("enter x :\n");
	scanf("%d",&x);
	printf("enter y :\n");
	scanf("%d",&y);
	printf("enter z :\n");
	scanf("%d",&z);
	if (w>x)
	printf("%d is the largest :\n");
else if	(x>w)
printf("%d is the largest :\n");
else if	(x>y)
printf("%d is the largest :\n");
	else if(y>x)
	printf("%d is the largest :\n");
	else if(y>z)
	printf("%d is the largest :\n");
	else if(z>y)
	printf("%d is the largest :\n");
 printf("%d is the largest :\n");
	return 0;
	
}
// question 3 
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
