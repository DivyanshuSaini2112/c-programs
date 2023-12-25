#include <stdio.h>

void main()
{
    int a,b;
	
	printf("enter number a:");
	scanf("%d",&a);
	printf("enter number b:");
	scanf("%d",&b);
	

    printf("after swapping the number a is %d and number b is %d",a+(b-a),b-(b-a));
}
