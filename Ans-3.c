/*WAP to calculate:
I. Factorial
II. Sum of digits
III. Fibonacci Series
For a given number using recursion.*/


#include <stdio.h>

int fact(int);
int digit_sum(int);
void fibonacci(int);
int main()
{
    int f, num, range;
    printf("\nEnter any number : ");
    scanf("%d",&f);
    printf("\nFactorial of %d is %d\n",f,fact(f));

    printf("\nEnter any number : ");
    scanf("%d",&num);
    printf("\n%d digit sum is %d\n",num,digit_sum(num));

    printf("\nEnter range for fibonacci : ");
    scanf("%d",&range);
    fibonacci(range);
    printf("\n\n");
}


int fact(int n)
{
    if(n==0 || n==1)
        return 1;
    return fact(n-1) * n;
}


int digit_sum(int n)
{
    if(n>0)
        return digit_sum(n/10) + n%10;
}


void fibonacci(int n)
{
    if(n>0)
    {
        printf("%d\t",(n-1)+(n-2));
        fibonacci(n-1);
    }
}