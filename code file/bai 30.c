#include<stdio.h>
int main()
{
	char letter;
	printf("enter a letter:");
	scanf("%c",&letter);
	switch (letter)
	{
		case 'a': 
		    printf("this is a vowel");
		    break;
		case 'u': 
		    printf("this is a vowel");
	        break;
	    case 'e':
	    	printf("this is a vowel");
	    	break;
	    case 'i':
	        printf("this is a vowel");
	        break;
	    case 'o':
	    	printf("this is a vowel");
	    	break;
		default:
			printf("this is a consonant");
			break;
	}
	return 0;
}
