#include <stdio.h>

int main(){

	int tab;
	int i = 1;
	printf("enter the number of which you want the table of:\n ");
	scanf("%d",&tab);
	
	printf("the table are as follows:\n");
	
	while(i<11){
		printf("%d * %d = %d\n",tab,i,tab*i);
		
		i++;
	}
}
