/*This is a solution of problem 4 of Projecteular 
 Problem statement:-A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
      And here is the solution By Ankesh Kumar Thakur */


#include<stdio.h>
int Ispalindrome(int N)         /* It will check a number is palindrom or not*/
{ int reverse=0,i=0,k=N;

        for(;i<6;i++)	//To find for four digits use i<8 and so on
        { reverse=reverse*10+k%10;
          k=k/10;
        }
       if(reverse==N)
        return 1;
        else return 0;
}




int main()
{ int i,j,I,J,Number=0;
   for (i=999;i>100;i--)		//to find for four digits change to (i=9999;i>1000;i--) similarly change the next loop
     {	for(j=999;(j>100)&& j>i && (i*j)%10!=0; j--)	// to avoid repeatation j>i & last digit can't be zero */
	{ if (( (i*j)%11==0 ) && (Number<(i*j)) && (Ispalindrome(i*j)==1))  /*A palindrome with even number of digits is divisible by 11 
										as 10^(2k+1)+1 is divisible by 11 */ 
		{ Number=i*j;
		 I=i; J=j;
		  break; //As j is decreasing , now we can't find any number greater than this
		}
	}
	}
	printf("\n\tThe required palindrome number is %d and it is product of %d and %d\n", Number,I,J);
}
