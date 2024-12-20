#include <stdio.h>

void initialization(int*, int);
void display(int*, int);
void insertion(int*, int, int, int);
void deletion(int*, int, int);
void deleteEnd(int*, int*);
void merging(int*, int, int*, int, int*, int);

int main() 
{
    int option, n, m, x, y, z;
    int a[10], b[10], d[20];
    int pos, num, pos1, num1, pos2;

    printf("\nEnter the number of elements for the first array: ");
    scanf("%d", &n);

    printf("\nEnter array elements: ");
    initialization(a, n);

    while (1) 
	{
        printf("\n **Main Menu**:\n");
        printf("1. Display array\n");
        printf("2. Insert an element\n");
        printf("3. Delete an element at position\n");
        printf("4. Delete the last element\n");
        printf("5. Merge with another array\n");
        printf("6. Exit\n");
        printf("Enter your option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("\nArray elements are: ");
                display(a, n);
                break;

            case 2:
                m = n + 1;
                printf("\nEnter the element to insert: ");
                scanf("%d", &num);
                printf("\nEnter the position to insert at: ");
                scanf("%d", &pos);
                insertion(a, pos, num, m);
                n = m; // Update the size after insertion
                printf("\nAfter insertion, array elements are: ");
                display(a, n);
                break;

            case 3:
                printf("\nEnter the position of the element to delete: ");
                scanf("%d", &pos2);
                deletion(a, pos2, n);
                n = n - 1; // Update the size after deletion
                printf("\nAfter deletion, array elements are: ");
                display(a, n);
                break;

            case 4:
                deleteEnd(a, &n);
                printf("\nAfter deleting the last element, array elements are: ");
                display(a, n);
                break;

            case 5:
                printf("\nEnter the number of elements for the second array: ");
                scanf("%d", &y);
                printf("\nEnter second array elements: ");
                initialization(b, y);
                z = n + y;
                merging(d, z, a, n, b, y);
                printf("\nAfter merging, combined array elements are: ");
                display(d, z);
                break;

            case 6:
                printf("\nExiting program.\n");
                return 0;

            default:
                printf("\nInvalid choice. Please try again.\n");
        }
    }

    return 0;
}

void initialization(int arr[], int x) 
{
    for (int i = 0; i < x; i++) 
	{
        scanf("%d", &arr[i]);
    }
}

void display(int arr[], int x) 
{
    for (int i = 0; i < x; i++) 
	{
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void insertion(int a[], int pos, int num, int x) 
{
    if (pos < 1 || pos > x) 
	{
        printf("Invalid position!\n");
        return;
    }

    for (int i = x - 1; i >= pos - 1; i--) 
	{
        a[i + 1] = a[i];
    }
    a[pos - 1] = num;
}

void deletion(int a[], int pos2, int x) 
{
    if (pos2 < 1 || pos2 > x) {
        printf("Invalid position!\n");
        return;
    }

    for (int i = pos2 - 1; i < x - 1; i++) 
	{
        a[i] = a[i + 1];
    }
}

void deleteEnd(int a[], int *x) 
{
    if (*x <= 0) 
	{
        printf("Array is already empty.\n");
    } else {
        (*x)--;  // Reduce the size of the array by one
        printf("Deleted last element.\n");
    }
}

void merging(int d[], int z, int a[], int x, int b[], int y) 
{
    int i, j = 0;

    for (i = 0; i < x; i++) 
	{
        d[j++] = a[i];
    }

    for (i = 0; i < y; i++) 
	{
        d[j++] = b[i];
    }
}
