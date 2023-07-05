#include<stdio.h>
main(){
	char ch;
	printf("\n enter any letter to see weather it is vowel of consonant:");
	scanf("%c",&ch);
	switch(ch){
		case :'a';
		case :'e';
	    case :'i';
		case :'o';
		case :'u';
		case :'A';
		case :'E';
		case :'I';
		case :'O';
		case :'U';
			printf("\n this is vowel");
			break;
			default:
			printf("\n this is consonant");
			break;
	}
}
