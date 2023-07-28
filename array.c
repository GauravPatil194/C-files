///////////////////////////////////////////////////////////////////////////ARRAY/////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
/*
void main() 
{
	int i,x[5]={12,34,44,344,122};
	for(i=0; i<5; i++)
	{
		printf("\n x[%d]= %d",i,x[i]);
	}
	return 0;
}*/

/*void main()
{
	int sum,i,x[5];
	printf("\n Enter values : ");
	for(i=0; i<5; i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0; i<5; i++)
	{
		sum=sum+x[i];
	}
	printf("\n total sum is %d ",sum);
}*/

//WAP to declere arrat of size 10 and print elements at even index.
/*
void main()
{
	int i,x[10];
	int sum;
	for(i=0; i<10; i++)
	{
		printf("\n Enter values");
		scanf("%d",&x[i]);	
	}
	for(i=0; i<10; i++)
	{
		if(i%2==0)
		{
			printf("\n %d",x[i]);
			sum=sum+x[i];
		}
	}
	printf("\n sum = %d",sum);
}*/

/*
void main()
{
	int i,x[10];
	for(i=0; i<10; i++)
	{
		printf("\n Enter values");
		scanf("%d",&x[i]);	
	}
	for(i=0; i<10; i+=2)
	{
		printf("\n %d",x[i]);
	}
}*/
//print find array max and min.. 
/*void main()
{
	int n,i,max,min;
	printf("\n Enter no. of Array");
	scanf("%d",&n);
	int x[n];
	printf("\n Enter a values");
	for(i=0; i<n; i++)
	{
		scanf("%d",&x[i]);
	}
	max=x[0],min=x[0];
	for(i=0; i<n; i++)
	{
		if(max<x[i])
		{
			max=x[i];
		}
		if(min>x[i])
		{
			min=x[i];
		}
	}
	printf("\n max %d",max);
	printf("\n min %d",min);
}*/

/*
void main()
{
	int n,i,cnt=0;
	int x[5];
	printf("\n Enter a values");
	for(i=0; i<5; i++)
	{
		scanf("%d",&x[i]);
	}
	printf("\nEnter a number to be searched: ");
    scanf("%d",&n); 
	for (i=0; 1<5; i++)
	{
		if(x[i]==n)
		{
	printf("Search found at %d position",(i+1));
	cnt++; 
	break;
		}
	}
	if(cnt==0)
	printf("\nNo search found");
	printf("\n %d",x[i]);
}*/

//sort array accending order
/*void main()
{
	int i,j;
	int x[5];
	printf("\n Enter a values: ");
	for(i=0; i<5; i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0; i<4; i++)   // pass values
	{
		for(j=0; j<4; j++)
		{
			if(x[j]>x[j+1])
			{
			int temp=x[j];
			x[j]=x[j+1];
			x[j+1]=temp;
			}
		}
	}
	for(i=0; i<5; i++)
	printf("\n x[%d]= %d ",i,x[i]);
}*/

//sort deccending order..
/*void main()
{
	int i,j;
	int x[5];
	printf("\n Enter a values: ");
	for(i=0; i<5; i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0; i<4; i++)   // no of pass 
	{
		for(j=0; j<4; j++)
		{
			if(x[j]<x[j+1])
			{
			int temp=x[j];
			x[j]=x[j+1];
			x[j+1]=temp;
			}
		}
	}
	for(i=0; i<5; i++)
	printf("\n x[%d]= %d ",i,x[i]);
}*/

/*1. Write a program in C to store elements in an array and print them.
Test Data :
Input 10 elements in the array :
element - 0 : 1
element - 1 : 1
element - 2 : 2

void main()
{
	int i;
	int arr[10];
	
	for(i=0; i<10; i++)
	{
		printf("\n Elements of array %d : ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0; i<10; i++)
	{
		printf(" %d ",arr[i]);
	}

}*/

/*WAP to accept 10 integers in an array and print only BUZZ numbers.
A number is said tio be BUZZ,if it is either divisible by 7 or whose last digit is 7
void main()
{ 
 int i; 
 int arr[5]; 
 int div[5]; 
 for(i=0;i<5;i++) 
 { 
  printf("enter value ="); 
  scanf("%d",&arr[i]);  
 } 
 for(i=0;i<5;i++) 
 { 
  if(arr[i]%7==0) 
  { 
   div[i]=arr[i];  
  } 
  else if(arr[i]%10==7) 
  { 
   div[i]=arr[i]; 
  } 
  printf("Array div = %d\n",div[i]); 
 } 
}*/

////////////////////////////////////////////////////////////////STRING////////////////////////////////////////////////////////////////////////////////////
/*void main()
{
	int l;
	l=strlen("GP");
	printf("\n Length of a string = %d ",l);
}*/
/*
int main()
{
	char str[20];
	printf("\n Enter a string : ");
	scanf("%s",str);
	
	printf("%s",str);
	
	return 0;
}*/

/*int main()
{
	char str[MAX];
	printf("\n Enter a string : ");
	scanf("%s",str);
	
	printf("%s",str);
	
	return 0;
}*/

/*
void main()
{
	int i,j;
	int arr [4][3];
	for(i=0; i<4; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("\n Enter element");
			scanf("\t%d",&arr[i][j]);
		}
	}
		for(i=0; i<4; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("\n arr[%d][%d] = %d",i,j,arr[i][j]);
		}
	}
}*/

//sum of two matrics.
/*int main()
{
   int i,j;
   int a[2][2], b[2][2], sum[2][2];
 
   for (i = 0; i < 2; i++)             //first matrix
   {
      for (j = 0; j < 2; j++)
      {
     	printf("\n Enter 1st array");
        scanf("%d", &a[i][j]);
     }
   }
   for (i = 0; i < 2; i++)            //second matrix
   {
      for (j = 0 ; j < 2; j++)
      {
    	printf("\n Enter 2nd array");
        scanf("%d", &b[i][j]);
      }
   }
   for (i = 0; i < 2; i++)              //Addition of 2 matrics
   {
      for (j = 0 ; j < 2; j++) 
	  {
        sum[i][j] = a[i][j] + b[i][j];
        printf("%d\t", sum[i][j]);
      }
      printf("\n");
	}
 
   return 0;
}*/


//sum of digonal
/*int main()
{
   int i,j,sum;
   int a[3][3];
 
   for (i = 0; i < 3; i++)             //first matrix
   {
      for (j = 0; j < 3; j++)
      {
     	printf("\n Enter 1st array");
        scanf("%d", &a[i][j]);
     }
   }
  
   for (i = 0; i < 3; i++)              //Addition of 2 matrics
   {
      for (j = 0 ; j < 3; j++) 
	  {
	  	if(i==j)
	  	{
        sum = sum + a[i][j]; 
        } 
      }		
   }
    printf(" Add\t : %d ",sum);
   	printf("\n");
   return 0;
}*/

/*
int main()
{
   int i,j;
   int a[3][3],b[3][3];
 
   for (i = 0; i < 3; i++)             //first matrix
   {
      for (j = 0; j < 3; j++)
      {
     	printf("\n Enter array");
        scanf("%d", &a[i][j]);
     }
   }
  
   for (i = 0; i < 3; i++)              //Addition of 2 matrics
   {
      for (j = 0 ; j < 3; j++) 
	  {
	  		a[i][j]=b[i][j];
	  }
   }
    for (i = 0; i < 3; i++)              //Addition of 2 matrics
   {
      for (j = 0 ; j < 3; j++) 
	  {
	  	 printf("\t %d ",b[i][j]);
	  }
	    printf("\n");
   }
   return 0;
}*/

/* #include<string.h>
struct studentdata 
{ 
 int st_id; 
 char st_name[50]; 
 int st_age; 
}; 
 
int main()  
{ 
 struct studentdata std; 
  
 ////////// First Student data //////////// 
    
 std.st_id = 001;       
 strcpy(std.st_name,"Student-1"); 
 std.st_age = 22; 
  
 printf("Student ID : %d\n",std.st_id); 
 printf("Student Name : %s\n",std.st_name); 
 printf("Student Age : %d\n",std.st_age); 
  
 printf("\n\n"); 
  
  
 ////////// Second Student data //////////// 
 std.st_id = 002; 
 strcpy(std.st_name,"student-2"); 
 std.st_age = 33; 
  
 printf("Student ID : %d\n",std.st_id); 
 printf("Student Name : %s\n",std.st_name); 
 printf("Student Age : %d\n",std.st_age); 
  
 printf("\n\n"); 
 ////////// Third Student data //////////// 
 
 std.st_id = 003; 
 strcpy(std.st_name,"student-3"); 
 std.st_age = 44; 
  
 printf("Student ID : %d\n",std.st_id); 
 printf("Student Name : %s\n",std.st_name); 
 printf("Student Age : %d\n",std.st_age); 
}
*/

struct stu_address
{
	int street;
	char *state;
	char *city;
	char *country;
};
struct stu_data
{
	struct stu_address stuAddress;
	int stu_id;
	int stu_age;
//	long int stu_cont;
	char *stu_name;
};
int main()
{
	struct stu_data mydata;
	mydata.stu_id = 1001;
	mydata.stu_age = 30;
//	mydata.stu_cont = 1265646;
	mydata.stu_name = "Gaurav";
	mydata.stuAddress.state = "Maharashtra";
	mydata.stuAddress.street = 101;
	mydata.stuAddress.city = "pune";
	mydata.stuAddress.country = "India";;
	printf("\n printing student data:-");
	printf("\n Student Id : %d",mydata.stu_id);
	printf("\n Student Age : %d",mydata.stu_age);
//	printf("\n Student Contact : %ld",mydata.stu_cont);
	printf("\n Student name : %s",mydata.stu_name);
	printf("\n Student street : %d",mydata.stuAddress.street);
	printf("\n Student state : %s",mydata.stuAddress.state);
	printf("\n Student city : %s",mydata.stuAddress.city);
	printf("\n Student Country : %s",mydata.stuAddress.country);
	
	return 0;
}








