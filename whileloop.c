//Write a program to accept number and perform sum of print. 
/*#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int n,sum=0,dig;
	printf("\n Enter the Number: ");
	scanf("%d",&n);
	while(n>0)
	{
		dig=n%10;
		sum=sum+dig;
		n=n/10;
	}
	printf("\n %d is sum",sum);
	return 0;
}*/

//write a program to perform product of digit.
/*#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int n,pro=1,dig;
	printf("\n Enter the Number: ");
	scanf("%d",&n);
	while(n>0)
	{
		dig=n%10;
		pro=pro*dig;
		n=n/10;
	}
	printf("\n %d is product",pro);
	return 0;
}*/


//print armstrong number.
/*#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int n,sum=0,dig,n1;
	printf("\n Enter the Number: ");
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{
		dig=n%10;
		sum=sum+(dig*dig*dig);
		n=n/10;
	}
	if(sum==n1)
	{
		printf("\n %d is Armstrong number",sum);
	}
	else
	{
		printf("\n %d Not is Armstrong number",sum);
	}
	return 0;
}*/

/*
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() 
{
	int n,sum=0,dig,n1;
	printf("\n Enter the Number: ");
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{
		dig=n%10;
		sum=sum+(dig*dig*dig);
		n=n/10;
	}
	if(sum==n1)
	{
		printf("\n %d is Armstrong number",sum);
	}
	else
	{
		printf("\n %d Not is Armstrong number",sum);
	}
	return 0;
}*/


/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,rev=0,temp,rem;
	printf("\n Enter a Number");
	scanf("%d",&n);
	while(temp != 0)
	{
		rem=temp%10;
		rev=rev*10+rem;
		temp=temp/10;
	}
	if(rev == n)
	{
		printf("\n %d is palindrone number",n);
	}
	else
	{
		printf("\n %d is not palindrone number",n);
	}
	return 0;
}*/

#include<stdio.h>
#include<stdlib.h>
/*#include<math.h>
int main()
{
	int n,n1,cou=0,dig,a,sq;
	printf("\n Enter a number: ");
	scanf("%d",&n);
	sq=n*n;
	cou=0;
	n1=n;
	while(n>0)
	{
		dig=n%10;
		cou++;
		n=n/10;	
	}
	a=pow(10,cou);
	if((sq%a)==n1)
	{
		printf("\n %d is automorphic",n1);
	}	
	else
	{
		printf("\n %d is not automorphic",n1);
	}

	return 0;
}*/
/*int main()
{
 int i;
 for(i=1;i<=3;i++)
{

	if(i==2)
	continue;
	
	printf("\n%d",i);
}
	return 0;
}*/
/*
#include<stdio.h>
int main()
{
	int i;
	while(i<=3)
	{
		if(i==2)
		{		
		continue;
		printf("%d",i);
		i++;
	}
	}
	return 0;
}
*/

//1)Write a C program to print all natural numbers from 1 to n. - using while loop
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n;
	printf("\n Enter a number");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf("\n %d",i);
		i++;
	}
	return 0;
}*/


//2)Write a C program to print all natural numbers in reverse (from n to 1). - using while loop
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n;
	printf("\n Enter a number");
	scanf("%d",&n);
	i=100;
	while(i>=n)
	{
		printf("\n %d",i);
		i--;
	}
	return 0;
}*/


//3)Write a C program to print all alphabets from a to z. - using while loop.
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	char i;
	i='a';
	while(i<='z')
	{
		printf("\n %c",i);
		i++;
	}
	return 0;
}*/

//4)Write a C program to print all even numbers between 1 to 100. - using while loop
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;	
	i=1;
	while(i<=100)
	{
		if(i%2==0)
		printf("\n %d",i);
		i++;
	}
	return 0;
}*/

//5)Write a C program to print all odd number between 1 to 100.
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;	
	i=1;
	while(i<=100)
	{
		if(i%2==1)
		printf("\n %d",i);
		i++;
	}
	return 0;
}*/

//6)Write a C program to find sum of all natural numbers between 1 to n.
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,sum=0;
	printf("\n Enter a number");
	scanf("%d",&n);
	i=0;
	while(i<=n)
	{
		sum=sum+i;		
		i++;
	}
	printf("\n %d",sum);
	return 0;
}*/

//7)Write a C program to find sum of all even numbers between 1 to n.
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,sum=0;
	printf("\n Enter a number");
	scanf("%d",&n);
	i=0;
	while(i<=n)
	{
		if(i%2==0)
		sum=sum+i;		
		i++;
	}
	printf("\n %d",sum);
	return 0;
}*/

//8)Write a C program to find sum of all odd numbers between 1 to n.
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,sum=0;
	printf("\n Enter a number");
	scanf("%d",&n);
	i=0;
	while(i<=n)
	{
		if(i%2==1)
		sum=sum+i;		
		i++;
	}
	printf("\n %d",sum);
	return 0;
}*/

//9)Write a C program to print multiplication table of any number.
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,sum=1;
	printf("\n Enter a number: ");
	scanf("%d",&n);
	i=1;
	while(i<=10)
	{
		sum=n*i;		
		printf("\n %d * %d = %d",n,i,sum);
		i++;
	}
	return 0;
}*/

//10)Write a C program to count number of digits in a number.


































