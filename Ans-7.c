/*WAP to read the details of two workers working on daily wages basis and calculate total weekly
payment of workers using structure.*/

#include <stdio.h>

struct worker
{
    int id;
    char name[20];
    float pdw;
};

int main()
{
    struct worker w[2];
    int k;
    for (k = 0; k < 2; k++)
    {
        printf("\nEnter %d worker details...\n", k + 1);
        printf("Enter worker id : ");
        scanf("%d", &w[k].id);
        printf("Enter worker name : ");
        fflush(stdin);
        fgets(w[k].name, 20, stdin);
        printf("Enter worker salary : ");
        scanf("%f", &w[k].pdw);
    }

    for (k = 0; k < 2; k++)
        printf("\n%d worker total weekly payment is : %.2f\n", k + 1, w[k].pdw * 7);
    printf("\n\n");
    return 0;
}