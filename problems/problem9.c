/* A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a^2 + b^2 = c2

For example, 3^2 + 4^2 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc. */

#include<stdio.h>

int main()
{int a,b,c,i,y;

for(a=1;a<500;a++)
{for(b=1;b<500;b++)
{if((a+b)>500)
	{
	c=1000-(a+b);
	if(c*c==a*a+b*b)
	{y=1;
	printf("%d\t%d\t%d\t",a,b,c);
	break;}}}// out of b loop
	if(y==1)
	break;}//out of a loop
if(y==1)
printf("The product abc is equal to %d\n",a*b*c);
}
