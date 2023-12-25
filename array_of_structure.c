#include <stdio.h>

struct student 
{
	int roll_no;
	char name[20];
	float fees;
};
	int main()
{
	struct student s[5];
	int i,j,k,l;
	
	for(i=0;i<5;i++)
	{
		printf("enter name of student %d\n",i+1);
		gets(s[i].name);
		
		printf("enter roll no. of student %d\n",j+1);
		scanf("%d",&s[i].roll_no);
		
		printf("enter fees paid by student %d\n",k+1);
		scanf("%f",&s[i].fees);
	}
	for(l=0;l<5;l++)
	{
		printf("__________\n");
		printf("%s\n",s[l].name);
		printf("%d\n",s[l].roll_no);
		printf("%f\n",s[l].fees);
		printf("__________\n__________\n__________\n");	
	}
}

