#include <stdio.h>

struct student
{
	int rn;
	char name[10];
	float m1,m2;
	
}s1;

int main()
{
	
	printf("enter name\n");
	gets(s1.name);
	
	printf("enter roll no.\n");
	scanf("%d",&s1.rn);
	
	printf("enter marks of two subjects\n");
	scanf("%d%d%d",&s1.m1,&s1.m2);
	
		
	printf("size of char array is %d\n",sizeof(s1.name));
	printf("size of roll no. is %d\n",sizeof(s1.rn));
	printf("size of first subject is %d\n",sizeof(s1.m1));
	printf("size of first subject is %d\n",sizeof(s1.m2));
	printf("size of structure is %d",sizeof(s1));
	
	return 0;
}
