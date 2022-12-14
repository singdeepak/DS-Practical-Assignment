/*WAP to check if the given number is :
I. Palindrome or not
II. Even or Odd
III. Prime or not
Using functions call by value method.*/

#include <stdio.h>

void palindrome(int);
void even_odd(int);
void prime(int);
int main()
{
    int num;
    printf("\nEnter any number : ");
    scanf("%d", &num);

    palindrome(num);
    even_odd(num);
    prime(num);
    printf("\n\n");
    return 0;
}

void palindrome(int temp)
{
    int rev = 0, remain, org, t;
    org = temp;
    while (temp != 0)
    {
        t = temp % 10;
        rev = rev * 10 + t;
        temp /= 10;
    }
    if (rev == org)
        printf("\n%d is a palindrome number\n", org);
    else
        printf("\nNo! %d is not palindrome number\n", org);
}

void even_odd(int temp)
{
    if (temp % 2)
        printf("\n%d is odd number\n", temp);
    else
        printf("\n%d is even number\n", temp);
}

void prime(int temp)
{
    int k;
    for (k = 2; k < temp; k++)
    {
        if (temp % k == 0)
        {
            printf("\n%d is not prime number\n", temp);
            break;
        }
    }
    if (k == temp)
        printf("\nYes! %d is prime number\n", temp);
}