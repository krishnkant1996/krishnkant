#include<stdio.h>
#include<stdlib.h>
void insert_begin();
void insert_any_position();
void insert_rear();
void delete_begin();
void delete_any_position();
void delete_rear();
void create_node();
void display();

typedef struct linklist
{
        int data;
        struct linklist* link;
}
node;
node *front, *rear;
void insert_begin()
{
        node* temp;
        if(front==NULL||rear==NULL)
                create_node();
        else
        {
                temp=(node*) malloc(sizeof(node));
                printf("\n Enter item \t");
                scanf("%d",&temp -> data);
                temp -> link = front;
                front = temp;
        }
        display();
        return;
}
void create_node()
{
        node *temp;
                temp=(node*) malloc(sizeof(node));
                printf("\n Enter item \t");
                scanf("%d",&temp -> data);
                temp -> link = NULL;
                front = temp;
                rear = temp;

        return;
}
void insert_rear()
{

        node *temp;
        if(front==NULL||rear==NULL)
                create_node();
        else
        {
                temp=(node*) malloc(sizeof(node));
                printf("\n Enter item \t");
                scanf("%d",&temp -> data);
                rear -> link = temp;
                temp -> link = NULL;
                rear = temp;
        }
        display();
        return;
}
void insert_any_position()
{
        int position,i;
        node *temp , *temp1;
        if(front==NULL||rear==NULL)
                create_node();
        else
        {
                temp=(node*) malloc(sizeof(node));
                temp1=(node*) malloc(sizeof(node));
                printf("\n Enter item \t");
                scanf("%d",&temp -> data);
                printf("\n Enter node position \t ");
                scanf("%d",&position);
                temp1 = front;
                for(i = 1; i < position-1; i++)
                        {
                                temp1 = temp1 -> link;
                        }

                temp -> link = temp1 -> link;

                temp -> link = temp1 -> link;
                temp1 -> link = temp;
        }
        display();
        return;
}
void display()
{
        if(front==NULL)
        printf("\n linklist is empty\n");
        else
        {
        node *temp;
        temp = front ;
        printf("\n linklist is: \n ");
        while(temp -> link != NULL)
                {
                        printf("||%p| %d |%p|| -> ",temp,temp->data,temp->link);
                        temp = temp -> link;
                }
                printf("||%p| %d |%p|| \n ",temp,temp->data,temp->link);
        }
        return;
}

void delete_begin()
{

        node *temp;
        if(front==NULL)
        printf("\n      Linklist is empty \n");
        else
        {
                temp = front;
                front = front -> link;
                temp -> link = NULL;
                printf("\n Deleted item is  : = %d ",temp -> data);
                free(temp);
        }
        display();
        return;
}







void delete_rear()
{

        node *temp;
        if(front==NULL)
        printf("\n      Linklist is empty \n");
        else
        {
                temp = front;
                while(temp -> link != rear)
                {
                        temp = temp -> link;
                }
                temp->link = NULL;
                printf(" \nDeleted item is  := %d ", rear->data);
                free(rear);
                rear = temp;
        }
        display();
        return ;
}

void delete_any_position()
{
        int pos , i;
        node *temp , *temp1;
        if(front == NULL)
        printf("\n      Linklist is empty \n");
        else
        {
                printf("\n Enter any position : = \t" );
                scanf("%d",&pos);
                temp = front;
                for(i = 1; i < pos-1; i++)
                        {
                                temp = temp -> link;
                        }
                temp1 = temp -> link;
                temp -> link = temp1 -> link;
                printf("\n Deleted data is : = %d \n ",temp1 -> data);
                free(temp1);
        }
        display();                                                    
        return;
}
int main()
{       int ch;
        while(1)
        {
        printf("\n----------------------------------------------------------\n");
        printf("          YOUR CHOUICE\n ");
        printf("\n1:    insert at begin ");
        printf("\n2:    insert at any position ");
        printf("\n3:    insert at rear ");
        printf("\n4:    delete at begin ");
        printf("\n5:    delete at any position ");
        printf("\n6:    delete at rear ");
        printf("\n7:     Display ");
        printf("\n0:  exit");
        printf("\n Enter your choice\t ");
        scanf("%d",&ch);
                switch(ch)
                {
                        case 1:
                                insert_begin();
                                break;
                        case 2:
                                insert_any_position();
                                break;
                        case 3:
                                insert_rear();
                                break;
                        case 4:
                                delete_begin();
                                break;
                        case 5:
                                delete_any_position();
                                break;
                        case 6:
                                delete_rear();
                                break;
                        case 7:
                                display();
                                break;
                        case 0: exit(0);
                        default:
                                printf("\n invalid option \n");
                }
        }
}
                                                                                                                                       
                                                                          
