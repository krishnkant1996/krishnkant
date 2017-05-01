#include<stdio.h>
struct student
{
        int rno, m;
        char name[10];
        float per;
}; typedef struct student student;
int main()
{
	student s1 ;
	printf("\n enter student details\n");
	scanf("%d%s%d",&s1.rno,s1.name,&s1.m);
	printf("\n %d\t%s\t%d\n",s1.rno,s1.name,s1.m);
	 printf(" size of structure s1%d\n",sizeof(s1));
	 printf("  size of rno%d\n",sizeof(s1.rno));
 	printf(" size of name%d\n",sizeof(s1.name));
 	printf(" size of marks%d\n",sizeof(s1.m));
	 printf("  size of per%d\n",sizeof(s1.per));


	return 0;

}
