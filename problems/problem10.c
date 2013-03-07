/* The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct Prime {
int val;	//this will contain prime numbers
struct Prime *next;	//this will contain link to next element
}prime;

prime *create_prime(int v)
{
	prime *p;
	p=malloc(sizeof(prime));
	p->val=v;
	p->next=NULL;
	return p;
}

int check_prime(prime *m,int i)
{prime *t;

int y=1,k; //y=1 means i is prime otherwise not prime
t=m;
k=t->val;
while((t->next != NULL)&& k<(sqrt(i)+1))
{if(i%k==0)
y=0;
if(y==0)
break;
else t=t->next;
k=t->val;
}
return y;
}

void print_list(prime *h)
{int i=0;
prime *curr;
curr=h;
while(curr!=NULL)
{if(i==20)
{printf("%d-->",curr->val);i=0;}
curr=curr->next;
i++;
}
printf("NULL\n");
}



int main()
{int i,y=0;
double sum=2.0;
prime *head,*p=NULL,*q=NULL;
head=NULL;
i=3;
while(i<2000000)
{
if(head==NULL)
	{ q=create_prime(i);
	 head=q;
	sum+=i;}
else { y=check_prime(head,i);
	if(y==1)
	{	sum+=i;
		q=create_prime(i);
		p=head;
		while(p->next!=NULL)
			p=p->next;
		p->next=q;}

}
i=i+2;
}
printf("sum=%lf\n",sum);
print_list(head);
}
