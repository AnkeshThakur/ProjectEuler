/*2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?*/
#include<stdio.h>
int hcf(int lower, int bigger)
{int i,temp,res;
if(bigger>lower)
;
else { temp=bigger;
	bigger=lower;
	lower=temp;
	}

while(bigger%lower!=0)
{res=bigger%lower;
temp=lower;
lower=res;
bigger=temp;
}
if(bigger%lower==0)
return lower;
}
int main()
{ int i;
int long a=1;
for(i=1;i<21;i++)
{a=i*a/hcf(a,i);
}
printf("The lcm of the numbers is %ld.\n",a);
}
