#include<stdio.h>
main()
{
int a,b;
printf("enter any two numbers");
scanf("%d",&a);
scanf("%d",&b);
printf("you entered the value of a=%d\n",a)
printf("you entered the value of b=%d\n",b)
a=a-b;
b=b+a;
a=b-a;
printf("after swapping the value of a is %d\n value of b is %d\n", a,b);
return 0;
}
