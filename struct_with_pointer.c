#include<stdio.h>
struct student
{
        int rno;
        float m;
}; typedef struct student student;
int main()
{
        
        student s ,*p;
	p=&s;
        printf("\n enter student details\n");
        scanf("%d%f",&p->rno,&p->m);        
        printf("\n %d\t %f \n ",p->rno,p->m);
        

        return 0;

}
