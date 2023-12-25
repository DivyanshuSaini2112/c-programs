#include<stdio.h>  
void sum(); // Fun. prototype
//No. return no parameter
void main()  
{  int a,b;
    printf("\nGoing to calculate the sum of two numbers:");  
    sum();// fun calling
} 
 
void sum()  //fun. defination
{  
    int a,b;   
    printf("\nEnter two numbers");  
    scanf("%d%d",&a,&b);   
    printf("The sum is %d",a+b);  
}  
