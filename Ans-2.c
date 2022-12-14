/*WAP to find area and perimeter of:
I. Rectangle
II. Circle
III. Square
Using functions call by reference method.*/

#include <stdio.h>

int rectangle(int *, int *);
float circle(int *);
int square(int *)
int main()
{
    int radius, length, width, side;

    printf("\nEnter length & width : ");
    scanf("%d%d",&length,&width);
    printf("\nPerimeter of %d & %d is %d\n",length,width,rectangle(&length, &width));

    printf("\nEnter radius : ");
    scanf("%d",&radius);
    printf("\nPerimeter of %d is %d\n",radius,circle(&radius));

    printf("\nEnter square side : ");
    scanf("%d",&side);
    printf("\nPerimeter of %d is %d\n",side,square(&side));

    return 0;
}



int rectangle(int *p, int *q)
{
    int result;
    result = 2(*p * *q);
    return result;
}


float circle(int *p)
{
    return 2*3.14*(*p);
}


int square(int *p)
{
    return 4*(*p);
}