// WAP to search an element in singly linked list.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

struct node *create_node()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    return temp;
}

void at_begin()
{
    struct node *ptr;
    int d;
    ptr = create_node();

    printf("\nEnter data value : ");
    scanf("%d", &d);
    ptr->data = d;

    if (head == NULL)
    {
        ptr->next = NULL;
        head = ptr;
        printf("\nNode was inserted at beginning\n\n");
    }

    else
    {
        ptr->next = head;
        head = ptr;
        printf("\nNode was inserted at beginning\n\n");
    }
}

void at_random()
{
    struct node *ptr, *trav;
    int loc, d, k;
    ptr = create_node();

    printf("\nEnter node location : ");
    scanf("%d", &loc);
    printf("\nEnter data value : ");
    scanf("%d", &d);
    ptr->data = d;

    if (loc == 1)
    {
        ptr->next = head;
        head = ptr;
        printf("\nNode has been inserted\n\n");
    }
    else
    {
        trav = head;
        for (k = 1; k < loc - 1; k++)
        {
            trav = trav->next;
            if (trav == NULL)
            {
                printf("\nCan't insert node, list got overflow\n\n");
                return;
            }
        }
        ptr->next = trav->next;
        trav->next = ptr;
        printf("\nNode has been inserted\n\n");
    }
}

void at_last()
{
    struct node *ptr, *trav;
    int d;
    ptr = create_node();

    printf("\nEnter data value : ");
    scanf("%d", &d);
    ptr->data = d;

    if (head == NULL)
        printf("\nCan't insert, list is empty\n\n");
    else
    {
        trav = head;
        while (trav->next != NULL)
            trav = trav->next;
        trav->next = ptr;
        ptr->next = NULL;
        printf("\nNode was inserted at last\n\n");
    }
}

void delete_first()
{
    struct node *temp;
    if (head == NULL)
        printf("\nList is empty\n\n");
    else
    {
        temp = head;
        head = head->next;
        free(temp);
        printf("\nFirst node was deleted\n\n");
    }
}





void delete_last()
{
    struct node *temp, *ptr;
    if (head == NULL)
        printf("\nList is empty\n\n");
    else if(head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nThe only was deleted\n\n");
    }
    else{
        ptr = head;
        while(ptr->next!=NULL)
        {
            temp = ptr;
            ptr = ptr->next;
        }
        temp->next = NULL;
        free(ptr);
        printf("\nLast node was deleted\n\n");
    }
}



void delete_random()
{
    struct node *temp, *ptr;
    int loc, k;

    if(head == NULL)
        printf("\nList is empty\n\n");
    else{
        printf("\nEnter node location that you want to delete : ");
        scanf("%d",&loc);

        ptr = head;
        for(k=0; k<loc-1; k++)
        {
            temp = ptr;
            ptr = ptr->next;
        }
        temp->next = ptr->next;
        free(ptr);
        printf("\nNode was deleted\n\n");
    }
}


void traverse()
{
    struct node *trav;
    trav = head;
    if (head == NULL)
        printf("\nList is empty\n\n");
    else
    {
        printf("\n");
        while (trav != NULL)
        {
            printf("%d\t", trav->data);
            trav = trav->next;
        }
        printf("\n\n");
    }
}



void search()
{
    struct node *ptr;
    int item, i=0, flag;

    ptr = head;
    if(ptr == NULL)
        printf("\nList is empty\n\n");
    else{
        printf("\nEnter location that you want to search : ");
        scanf("%d",&item);

        while(ptr!=NULL)
        {
            if(ptr->data == item)
            {
                printf("\nItem has found at location %d\n\n",i+1);
                flag=0;
            }
            else
                flag=1;
            i++;
            ptr = ptr->next;
        }
        if(flag==1)
            printf("\nItem not found\n\n");
    }
}






void at_begin();
void at_random();
void at_last();
void traverse();
void delete_first();
void delete_last();
void delete_random();
void search();
struct node *create_node();
int main()
{
    int ch;

    while (1)
    {
        printf("\n1 : Insert at beginning\n");
        printf("2 : Insert at last\n");
        printf("3 : Insert at random\n");
        printf("4 : Delete first\n");
        printf("5 : Delete last\n");
        printf("6 : Delete random\n");
        printf("7 : Traverse\n");
        printf("8 : Exit\n\n");

        printf("\nEnter you choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            at_begin();
            break;

        case 2:
            at_last();
            break;

        case 3:
            at_random();
            break;

        case 4:
            delete_first();
            break;

        case 5:
            delete_last();
            break;

        case 6:
            delete_random();
            break;

        case 7:
            traverse();
            break;

        case 8:
            search();
            break;

        case 9:
            exit(0);

        default:
            printf("\nInvalid Choice\n");
            break;
        }
    }
    return 0;
}