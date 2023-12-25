#include<stdio.h>  

int sum(); //Fun Prototype
//No return with parameter type
void main()  
{  
    int result,a,b;
	printf("Enter two no.\n");
	scanf("%d%d",&a,&b);   
    printf("\nGoing to calculate the sum of two numbers:\n");  
    sum(a,b); //Fun caling  
}  
int sum(int c, int d)  //Fun Defination
{  
    int sum;
	sum = c+d; 
    printf("Summation of no. is %d",sum); 
}  
