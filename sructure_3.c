#include <stdio.h>

struct entries
{
	int ph,rollno;
	char name[50],addres[50];
	float income;
}e1;

int main()
{
	
	printf("enter the details as asked:-\nenter your name :\naddres :\nphone no. :\nincome :\n");
	scanf("%c%c%d%d",&e1.name,&e1.addres,&e1.ph,&e1.income);
	
	printf("your details are:-\nname : %c\nphone no. : %d\naddres : %c\nincome : %f",e1.name,e1.ph,e1.addres,e1.income);
	
}
