#include<stdio.h>
#include<conio.h>
int Arr1[10], Arr2[10], Arr3[20];
int i,n1=4,n2=4,t=0;
int m=n1+n2;
void Insert();
void Traverse();
void merge();

void Insert() 
{
	for(i=0; i<n1; i++) 
	{
		printf("Enter values at Arr1[%d]=",i);
		scanf("%d",& Arr1[i]);
	}
	for(i=0; i<n2; i++) 
	{
		printf("\nEnter values at Arr2[%d]=",i);
		scanf("%d",& Arr2[i]);
	}
	
}

void Traverse()      // function definition
{
    printf("\n After mergin of Arr1 and Arr2 The elements of Arr3 is:\n");
    for(int k=0; k<t;k++)
	{
        printf("\t%d",Arr3[k]);
	}
    printf("\n");
}

void merge()         // function definition
{
    for(i=0;i<n1;i++)
    {
 	   Arr3[t]=Arr1[i];
 	   t++;
    }
    for(i=0;i<n2;i++)
    {
 	   Arr3[t]=Arr2[i];
       t++;
    }
}

int main()
{
	Insert();
    merge();
    Traverse();
    getch();
    return(0);
}