#include<stdio.h>
#include<conio.h>

int main()
{
    void selection_sort(int [], int);
    int min(int [], int, int);
    int a[10],i,N;
    N=4;
    printf("\nenter the %d element to sort :\n",N);
    for(i=0;i<N;i++)
	scanf("%d",&a[i]);
    selection_sort(a,N);
    printf("\n\nthe sorted list is :\n");
    for(i=0;i<N;i++)
    printf("%d ",a[i]);
    getch();
    return 0;
}

void selection_sort (int *array, int N)
{
    int i=0,loc=0,temp=0;
    for(i=0;i<N;i++)
    {
        loc=min(array,i,N);
        temp=array[loc];
        array[loc]=array[i];
        array[i]=temp;
        printf("\n\nthe partial sorted list is :\n");
        for(i=0;i<N;i++)
        printf("%d ",array[i]);
    }
}

int min(int *array, int low_bound, int up_bound)
{
    int min=low_bound;
    while(low_bound<up_bound)
    {
        if(array[low_bound]<array[min])
	    min=low_bound;
	    low_bound++;
    }
    printf("\n............. Min=%d", min);
    return min;
}
