#include <stdio.h>
//storing the string by using Pointer Array,here there will be no memory wastage
int main()
{
	int i;
	char* array[6] = {"geek","geeks","geekfor","hi","divyanshu","hello"};
	
	for(i=0;i<6;i++)
	{
		printf("%p\n",&array[i]);
	}
	
		for(i=0;i<6;i++)
	{
		printf("%d\n",&array[i]);
	}
}
