/*WAP to calculate:
I. Factorial
II. Sum of digits
III. Fibonacci Series
For a given number using recursion.*/


#include <stdio.h>

int fact(int);
int digit_sum(int);
int fibonacci(int);
int main()
{
    int f, num, range;
    printf("\nEnter any number for factorial : ");
    scanf("%d",&f);
    printf("\nFactorial of %d is %d\n",f,fact(f));

    printf("\nEnter any number for digit sum : ");
    scanf("%d",&num);
    printf("\n%d digit sum is %d\n",num,digit_sum(num));

    printf("\nEnter range for fibonacci : ");
    scanf("%d",&range);
    printf("\n");
    for(f=1; f<=range; f++)
        printf("%d\t",fibonacci(f));
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


int fibonacci(int n)
{
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);

}