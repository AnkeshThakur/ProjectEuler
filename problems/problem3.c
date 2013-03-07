/*The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?*/
#include<math.h>
#include<stdio.h>
int long prime(int long n)
{int y;
int long i;
for(i=3;i<n/2;i=i+2)
{ if(n%i==0)	//if a number divides n then it will check number is prime or not
	y=check(i);
	if(y==1)	//if number is prime we have got one prime divisor
	break;
	
}
if(n/i>=i)	//in order to get biggest prime we will have to find prime factor of quotient n/i if it is larger than i
return prime (n/i);
else return n;
}


int check (int long i)	//checks an odd number>=3 is prime or not
{int long j=3;			
if (i/2==0)
return 0;
for(;j<sqrt(i);j+=2) //divisor of a number lies between 0 to sqrt of number
{ if(i%j==0)
  return 0;}	// 0 means not prime
 return 1;
}

int main()
{
int long a;
a=prime(600851475143);
printf("\n\tThe prime number is %ld.\n ",a);
}
