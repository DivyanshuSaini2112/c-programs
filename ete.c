#include<stdio.h>
int main(){
 /* 2D array declaration*/
 int Data[5][5];
 /*Counter variables for the loop*/
 int i, j;
 for(i=0; i<5; i++) {
 for(j=0;j<5;j++) {
 printf("Enter value for Data[%d][%d]:", i, j);
 scanf("%d", &Data[i][j]);
 }
 }
 //Displaying array elements which are divisible by 5
 printf("Two Dimensional array elements:\n");
 for(i=0; i<5; i++) {
 for(j=0;j<5;j++) {
if(Data[i][j]%5==0)
 printf("%d ", Data[i][j]);
 }
 }
 return 0;
}