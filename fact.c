# include<stdio.h>

int main()
{

    int n,fact = 1 ;

    printf("enter a number \n");

    scanf("%d",&n);

     for (int i = 1; i <= n; ++i) {
        fact *= i;
    }

    printf("the factorial of the number is %d",fact);

}