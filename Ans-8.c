// WAP using structures to add two distances given in feet and inches and print the sum.

#include <stdio.h>


struct distance{
    int feet;
    int inch;
};


int main()
{
    struct distance d1, d2;
    int a,b;

    printf("\nEnter first distance details\n");
    printf("Feet : ");
    scanf("%d",&d1.feet);
    printf("Inch : ");
    scanf("%d",&d1.inch);

    printf("\n\nEnter last distance details\n");
    printf("Feet : ");
    scanf("%d",&d2.feet);
    printf("Inch : ");
    scanf("%d",&d2.inch);

    a = d1.feet + d2.feet;
    b = d1.inch + d2.inch;

    if(b>=12)
    {
        a = a + (b/12);
        b-=12*(b/12);
    }
    printf("\nTwo distance sum is : %d feet %d inch\n\n",a,b);
    return 0;
}