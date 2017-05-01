#include<stdio.h>
struct student
{
        int rno, m;
        char name[10];
        float per;
}; typedef struct student student;
int main()
{
        int i=0;
        student s[10] ;
        printf("\n enter student details\n");
        for(i=0; i<10; i++)
        {
                scanf("%d%s%d",&s[i].rno,s[i].name,&s[i].m);
        }
        for(i=0; i<10; i++)
        {
        printf("\n %d\t%s\t%d\n",s[i].rno,s[i].name,s[i].m);
        }
        printf(" size of structure s %d\n",sizeof(s[10]));
         printf("  size of rno%d\n",sizeof(s[i].rno));
        printf(" size of name%d\n",sizeof(s[i].name));
        printf(" size of marks%d\n",sizeof(s[i].m));
         printf("  size of per%d\n",sizeof(s[i].per));


        return 0;

}
