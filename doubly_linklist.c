#include <stdio.h>
#include <stdlib.h>
void create_node();
void display();
void insert_begin();
void insert_any_position();
void insert_rear();
void delete_begin();
void delete_any_position();
void delete_rear();
typedef struct Doubly_linklist
 {
   int data;
   struct Doubly_linklist *next;
   struct Doubly_linklist *prev;
} node;
node *front, *rear;

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

