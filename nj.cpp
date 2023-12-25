#include <stdio.h>
int main(){
	// NO. IS PRIME OR COMPOSITE 
	int a;
    //int a>=0 && a<=32;
	printf("enter any no. b/w 1-32\n");
	scanf("%d" ,&a);
	switch (a){	
		case 2:
		case 3:
		case 5:
		case 7:
		case 11:
		case 13:
		case 17:
		case 19:
		case 23:
		case 29:
		case 31:
		printf ("no is prime");	
		break;
		default:
    	printf("No is composite ");
    	break;
		
			
	}
	     
  		
    
	return 0;
    
}
