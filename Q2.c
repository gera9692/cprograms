/* gerald manyasa
    21/05029 */
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
// OR

// question 2
#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter four numbers\n");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b&&a>c&&a>d)
printf("max is = %d",a);
else if(b>c&&b>d)
printf("max is = %d",b);
else if(c>d)
printf("max is =%d",c);
 else 
printf("max is = %d",d);
return 0;
