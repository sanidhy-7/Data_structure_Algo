#include <stdio.h>
#include<stdlib.h>>

struct node
{
    int data;
    struct node *next;
};
struct node*head;
void insertdata()
{
    struct node*newnode,*temp;
    head=NULL;
    int choice=1;


    while(choice!=0)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d",& newnode->data);
        newnode->next=NULL;
        if (head==NULL)
        {
            temp=head=newnode;
        }
        else
        {
            temp->next =newnode;
            temp = newnode;
        }
        printf("Do You Want to Insert data(0,1)");
        scanf("%d",&choice);

    }
    bubblesort();
}

void bubblesort()
{
    struct node*temp,*p;
    int c,swapped;
    p=NULL;
    if(head==NULL)
    {
        printf("Underflow");
        return;
    }
    do
    {
        swapped=0;
        temp=head;
        while(temp->next != p)
        {
            if(temp->data > temp->next->data)
            {
                swapped=1;
                c=temp->data;
                temp->data=temp->next->data;
                temp->next->data=c;
            }
            temp=temp->next;
        }
        p=temp;
    }
    while(swapped);
}
void print()
{
    struct node * ptr=head;
    while(ptr->next!= NULL)
    {

        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("%d",ptr->data);
}

int main()
{
    insertdata();
    bubblesort();
    print();
    return 0;
}
