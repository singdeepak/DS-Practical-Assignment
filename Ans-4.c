/* WAP to sort given array in ascending order and find smallest and largest element in the array
using pointers. */

#include <stdio.h>


void input(int *, int);
void display(int *, int);
void sort(int *, int);
int large(int *, int);
int small(int *, int);
int main()
{
    int A[10];
    printf("\nEnter 10 elemnet for array\n");
    
    input(A, 10);
    printf("\nBefore Sorting : ");
    display(A, 10);
    sort(A, 10);
    printf("\n");
    printf("\nAfter Sorting : ");
    display(A, 10);
    printf("\n\nLargest element in array is %d\n",large(A, 10));
    printf("\nSmallest element in array is %d\n\n",small(A, 10));
}


void input(int *p, int s)
{
    int k;
    for(k=0; k<s; k++)
        scanf("%d",p+k);
}


void display(int *p, int s)
{
    int k;
    for(k=0; k<s; k++)
        printf("%d\t",*(p+k));
}


void sort(int *p, int s)
{
    int a,b,c;
    for(a=1; a<s; a++)
    {
        for(b=0; b<=s-1-a; b++)
        {
            if(*(p+b) > *(p+b+1))
            {
                c = *(p+b);
                *(p+b) = *(p+b+1);
                *(p+b+1) = c;
            }
        }
    }
}


int large(int *p, int s)
{
    int max, k;
    max = *p;
    for(k=0; k<s; k++)
    {
        if(max < *(p+k))
            max = *(p+k);
    }
    return max;
}


int small(int *p, int s)
{
    int min, k;
    min = *p;
    for(k=0; k<s; k++)
    {
        if(min > *(p+k))
            min = *(p+k);
    }
    return min;
}