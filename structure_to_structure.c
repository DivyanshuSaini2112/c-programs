#include <stdio.h>

struct employee
{
	char name[20];
	struct address
	{
		char city[10];
		int pincode;
		int phone;
	}add;
}emp;

int main()
{
	printf("enter your Name\nCity\nPincode\nPhone.....\n");
	scanf("%s%s%d%d",&emp.name,&emp.add.city,&emp.add.pincode,&emp.add.phone);
	
	printf("your details are.....\n");
	printf("Name : %s\nCity : %s\nPincode : %d\nPhone : %d",emp.name,emp.add.city,emp.add.pincode,emp.add.phone);
}
