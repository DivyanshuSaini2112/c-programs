# include <stdio.h>

union student
{
	char name[10];
	int rn;
	float m1,m2,m3;
}u1;

int main()
{
	printf("enter name:\n");
	gets(u1.name);
	
	printf("enter roll no.:\n");
	scanf("%d",&u1.rn);
	
	printf("enter your marks of three subjects:\n");
	scanf("%d%d",&u1.m1,&u1.m2);
	
	printf("size of union is %d\n",sizeof(u1.name));
	printf("size of union is %d\n",sizeof(u1.rn));
	printf("size of union is %d\n",sizeof(u1));
	
	return 0;
}
