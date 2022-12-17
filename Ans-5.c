// WAP to compare two strings using pointers (without using inbuilt function).

#include <stdio.h>


void camp(char *, char *, int);
int main()
{
    char str1[20], str2[20];
    printf("\nEnter first string : ");
    fgets(str1, 20, stdin);
    printf("\nEnter second string : ");
    fgets(str2, 20, stdin);
    camp(str1, str2, 20);
    return 0;
}


void camp(char *p, char *q, int t)
{
    int k=0, g=0, l=0;
    while(*(p+k)!='\0' || *(q+k)!='\0')
    {
        if(*(p+k) > *(q+k))
        {   
            g=1;
            break;
        }

        else if(*(p+k) < *(q+k))
        {
            l=1;
            break;
        }
        k++;
    }
    if(g==1)
        printf("\nSecond string is greater than first string\n\n");
    else if(l==1)
        printf("\nFirst string is greater than second string\n\n");
    else
        printf("\nBoth! strings are equal\n\n");
}