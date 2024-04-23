#include <stdio.h>

int main(){
    int amount,rem,five00=0,two00=0,one00=0,five0=0,two0=0,one0=0,five=0,two=0,one=0;

    printf("enter the amount you have :\n");
    scanf("%d",&amount);

    if(amount>=500){
        five00 = amount/500;
        rem = amount%500;
    }
    if(rem>=200){
        two00 = rem/200;
        rem = rem%200;
    }
    if(rem>=100){
        one00 = rem/100;
        rem = rem%100;
    }
    if(rem>=50){
        five0 = rem/50;
        rem = rem%50;
    }
    if(rem>=20){
        two0 = rem/20;
        rem = rem%20;
    }
    if(rem>=10){
        one0 = rem/10;
        rem = rem%10;
    }
    if(rem>=5){
        five = rem/5;
        rem = rem%5;
    }
    if(rem>=2){
        two = rem/2;
        rem = rem%2;
    }
    if(rem>=1){
        one = rem/1;
        rem = rem%1;
    }

    printf("500 note : %d\n",five00);
    printf("200 note : %d\n",two00);
    printf("100 note : %d\n",one00);
    printf("50 note : %d\n",five0);
    printf("20 note : %d\n",two0);
    printf("10 note : %d\n",one0);
    printf("5 coin : %d\n",five);
    printf("2 coin : %d\n",two);
    printf("1 coin : %d\n",one);


}