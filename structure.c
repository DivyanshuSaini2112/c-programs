#include <stdio.h>
#include <string.h>

struct student
{
	int rn;
	char name[10];
	float m1,m2;
	
}s1,s2;

int main()
{
	
	printf("enter name of second student:\n");
	gets(s2.name);
	
	printf("enter name\n");
	gets(s1.name);
	
	printf("enter roll no.\n");
	scanf("%d",&s1.rn);
	
	printf("enter marks of two subjects\n");
	scanf("%d%d",&s1.m1,&s1.m2);

	
	
		
	printf("size of char array is %s\n",s1.name);
	printf("size of roll no. is %d\n",s1.rn);
	printf("size of first subject is %f\n",s1.m1);
	printf("size of first subject is %f\n",s1.m2);
	printf("size of structure is %d",sizeof(s1));

	puts(s2.name);
	
	return 0;
}
