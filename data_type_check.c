#include <stdio.h>

int main(){
	int c;
	printf("enter a alphabet:\n");
	scanf("%c",&c);
	
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
		{
	switch(c)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': 
			printf("%c is a vowel of assci value %d\n",c,c);
			break;
		default:
			printf("%c is a consonant of assci value %d\n",c,c);
			break;
	}
}
	else if(c>='0'&&c<='9'){
		printf("%c is a integer of assci value %d. !!!PLEASE ENTER A VALID CHARACTER!!!\n",c,c);
	}
	else{
		printf("%c is a special symbol of assci value %d. !!!PLEASE ENTER A VALID CHARACTER!!!\n",c,c);
	}
	
}











