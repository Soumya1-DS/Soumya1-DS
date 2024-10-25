#include<stdio.h>
#include<conio.h>
int LIST[100];
int N;
void bubble_sort();
void create_array();
void display_array();
void main()
{
	create_array();
	bubble_sort();
 	display_array();
	getch();
}
void create_array()
{
	int i;
	printf("\nEnter the limit of LIST[N] :  ");
	scanf("\n%d",&N);
	printf("\nEnter unsorted element are LIST[%d] : \n",N);
		for(i=0;i<N;i++)
			scanf("\n%d",&LIST[i]);
}

void display_array()
{
	int k;
	printf("\nThe sorted element are LIST[%d] =",N);
		for(k=0;k<N;k++)
			printf("  %d",LIST[k]);
}

void bubble_sort()
{
    int temp,i,j;
	for(i=0;i<N-1;i++)
	{
        printf("\n after pass-%d",i+1);
		for(j=0;j<N-i-1;j++)
	    {
      	    printf("\n Comparing between %d and %d",LIST[j],LIST[j+1]);
			if(LIST[j]>LIST[j+1])
			{
			    temp=LIST[j];
			    LIST[j]=LIST[j+1];
		     	LIST[j+1]=temp;
			}
		}
		//display_array();
   // getch();
   }
}
