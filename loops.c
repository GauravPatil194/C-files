//for loop program :
/*
#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int i;
	for(i=1; i<=100; i+=2)
	{
		printf("\n %d",i);
	}
	
	return 0;
}*/

//WAP to print first 10 natural No..
/*#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	for(i=10; i>=1; i--) //reverse No..
	{
		printf("\n %d ",i);
	}
	return 0;
}*/
/*
//WAP to sum first 5 No..
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,sum=0;
	for(i=1; i<=5; i++)
	{
		sum=sum+i;
	}
		printf("\n sum %d ",sum);
			
	return 0;
}*/

//WAP to fing product of first 10 natural no...
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,product=1;
	printf("\n Enter the value of N : ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		product =product*i;
	}
		printf("\n product is  %d ",product);
	return 0;
}*/
/*
//WAP to print Even no.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,sum=0;
	printf("\n Enter the value of N : ");
	scanf("%d",&n);
	for(i=2; i<=n; i++)
	{
		sum=sum+i;
	}
		printf("\n sum is %d ",sum);
	return 0;
}*/

//WAP to print odd number..
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,sum=0;
	printf("\n Enter the value of N : ");
	scanf("%d",&n);
	for(i=1; i<=n; i+=2)
	{
		sum=sum+i;
	}
		printf("\n sum is %d ",sum);
	return 0;
}*/

/*
//WAP to find factorial of No..
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,fact=1,i;
	printf("\n Enter the value of N : ");
	scanf("%d",&n);	
	for(i=1; i<=n; i++)
	{
		fact=fact*i;
	}
	printf("\n factorial of %d is %d ",n,fact);
	
	return 0;	
}*/

//print factors of no.
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n;
	printf("\n Enter the factor of no : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		if(n%i == 0)
		{
			printf("\n %d  ",i);
		}
	}
		
	return 0;	
}*/
//WAP to find sum of all no between 1 to n. EVEN 
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,sum=0;
	printf("\n Enter the value of N : ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
		if(i%2==0)
		sum=sum+i;
		printf("\n %d",sum);	
		
	return 0;
}*/

//WAP to find sum of all no between 1 to n. ODD
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,sum=0;
	printf("\n Enter the value of N : ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
		if(i%2!=0)
		sum=sum+i;
		printf("\n %d",sum);	
		
	return 0;

}*/

//WAP to find multiplication table of any no.
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,sum,n;
	printf("\n Enter the value of N : ");
	scanf("%d",&n);
	for(i=1; i<=10; i++)
	{
		sum=n*i;
		printf("\n %d X %d = %d",i,n,sum);	
	}
	return 0;
}*/

// Prime Number
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,sum=0;
	printf("\n Enter the No ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			sum=sum+1;
		}
	}
	if(sum==2)
	{
		printf("\n %d is prime Number",n);
	}
	else
	{
		printf("\n %d is not prime Number",n);
	}
	return 0;
}*/

//perfect number.
/*-#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,sum=0;
	printf("\n Enter the No ");
	scanf("%d",&n);
	for(i=1; i<100; i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		
		}
	}
	if(sum==n)
	{
		printf("\n  is perfect Number %d",n);
	}
	else
	{
		printf("\n is not perfect Number %d",n);
	}
	return 0;
}*/

/* Nested Loop.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j;
	for( i=1; i<3; i++)
	{
		for( j=1; j<3; j++)
		{
			printf("\n %d",i);
		}
	}
	return 0;
}
*/

/* //print all prime no between 1 to 100.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,coun=0;
	for(i=1; i<=100; i++)
	{
		coun=0;
		for(j=1; j<=i; j++)
		{
			if(i%j==0)
			{
				coun++;
			}
		}
		if(coun==2)
		{
			printf("\n %d is prime no",i);
		}
	}	
	return 0;
	
}*/

//print all perfect no between 1 to N.
/*#include<stdio.h>
int main()
{
	int i,j,n,sum;
	printf("\n Enter the value : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		sum=0;
		for(j=1; j<i; j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
		}
		if(i==sum)
		{
			printf("\n %d is perfect no",i);
		}
	}	
	return 0;
}*/

//nested for loop patterns.
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
		
	return 0;
}*/

//1  1  1
//2  2  2
//3  3  3
//print pattern 1 to 5 in order.
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++)
		{
			printf("%d\t",i);
		}
		printf("\n");
	}
		
	return 0;
}*/

//3  3  3
//2  2  2
//1  1  1
//print pattern 5 to 1 reverse order.
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j;
	for(i=5; i>=1; i--)
	{
		for(j=5; j>=1; j--)
		{
			printf("%d\t",i);
		}
		printf("\n");
	}
		
	return 0;
}*/

//1	 2	3
//1	 2	3
//1	 2	3
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
		
	return 0;
}*/

//3    2    1
//3    2    1
//3	   2    1
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j;
	for(i=5; i>=1; i--)
	{
		for(j=5; j>=1; j--)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
		
	return 0;
}*/

//*
//*	*
//*	* *
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j;
	for(i=1; i<=3; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("*\t",i);
		}
		printf("\n");
	}
		
	return 0;
}*/

//*  *  *
//*  *
//*
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j;
	for(i=3; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("*\t",i);
		}
		printf("\n");
	}
		
	return 0;
}*/

//1   2   3
//1   2
//1
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j;
	for(i=3; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("\t %d",j);
		}
		printf("\n");
	}
		
	return 0;
}*/

//3
//2  2
//1  1  1
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j;
	for(i=3; i>=1; i--)
	{
		for(j=3; j>=i; j--)
		{
			printf("\t %d",i);
		}
		printf("\n");
	}
		
	return 0;
}*/

//1
//23
//456
//78910
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k=1;
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",k);
			k++;
    	}
		printf("\n");
	}

	return 0;
}*/

/*
1
1  0
1  0  1
1  0  1  0
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j;
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=i; j++)
		{
			if(j%2==0)
			{
			printf("\t 0");
			}
			else
			{
				printf("\t 1");
			}
		}
		printf("\n");
	}	
	return 0;
}*/

/*
0
10
010
1010
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j;
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=i; j++)
		{
			if((i+j)%2==0)
		{
			printf("0");
		}
		else
		{
			printf("1");
		}
		}
		printf("\n");
	}	
	return 0;
}*/

/*     *
    *  *
   *  *  *
  *  *  *  *
 *  *  *  *  *
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,a=4,sp;
	for(i=1; i<=5; i++)
	{
		for(sp=1; sp<=a; sp++)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			printf(" * ");
		}
		printf("\n"); 
		a--;
	}	
	return 0;
}*/























