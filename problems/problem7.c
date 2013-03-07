/*By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
		What is the 10001st prime number?*/
#include<stdio.h>
int main()
{int long prime[10001],test=3;	// test is number to be stored in array if it is prime
int i=1,j,y;	//i=(n-1)th prime number
prime[0]=2;	//we know that 2 is prime
while(i<10001)
{ for(j=0;j<i;j++)
   { if(test%prime[j]==0)
	{ y=0; 	//test is not prime & no need to check further
	break;
	}
	else y=1;
	}
   if(y==1)	//if test is prime then assign test to ith prime
	{ prime[i]=test;
	 i++;
	test+=2;
	}
   if(y==0)	//if it is not prime then look for next odd number
	{ test+=2;
	}
}
printf("\tThe 10001th prime number is %ld\n.",prime[10000]);
}

