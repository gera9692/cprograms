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
}
// question 3 

/* gerald manyasa
21/05029 */
// question 3
#include <stdio.h>

int main()
{
    float a,b,c,d; 
    float total, average, percentage;

    /* Input marks of all four games */
    printf("Enter marks of four games: :- ");
    scanf("%f%f%f%f", &a, &d, &c, &d);

    // Calculate total, average and percentage 
    total = a+b+c+d;
    average = total / 4.0;
    percentage = (total / 400.0) * 100;

    /* Print all results */
    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f\n", average);
    printf("Percentage = %.2f", percentage);
    if (average >=80) 
   
    printf("proceed to the next \n");
    
    else if (average>=50) 
   
       printf("try again \n");
    
   else if(average<50)
   
      printf("disqualified \n");
      return 0;
}
    
