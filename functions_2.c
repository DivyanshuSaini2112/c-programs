#include<stdio.h>  
int sum();  // fun defination oer prototye
//return with no parameter
void main()  
{  
    int result;   
    printf("\nGoing to calculate the sum of two numbers:");  
    result = sum();  // fun calling
    printf("%d",result);  
}  
int sum()  //fun defination
{  
    int a,b;   
    printf("\nEnter two numbers");  
    scanf("%d %d",&a,&b);  
    return a+b;   
}  
