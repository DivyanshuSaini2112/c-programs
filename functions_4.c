#include<stdio.h> 
 
int sum(); //Function prototype or fun. defination 
//Return with parameter type
void main()  
{  
    int result,a,b; 
	printf("\nEnter two numbers");  
    scanf("%d%d",&a,&b);   
    printf("\nGoing to calculate the sum of two numbers:");  
    result = sum(a,b); //function calling 
    printf("%d",result);  
} 
 
int sum(int c,int d)  //fun. defination
{  
      
 
    return c+d;   
}  
