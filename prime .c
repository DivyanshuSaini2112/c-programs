#include <stdio.h>

int main(){
	int n,flag=1;
	int i = 2;
	
	printf("enter a number:\n");
	scanf("%d",&n);
	
	while(i<=n)
{
	
	if(n%i == 0)
	{
		flag =0;
		break;
	}
	i++;
}
	if(flag)
	printf("the number  %d is  prime\n",n);
	else
	printf("the number  %d is not prime\n",n);
	

}
