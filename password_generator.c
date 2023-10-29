//imports
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//main method
int main()
{
    //variables
    int length;
    int i =0, r = 0;

    //Gets password length
    printf("How many characters do you want your password to be?: ");
    scanf("%d", &length);
    
    //Random number generator
    srand((unsigned int)(time(NULL)));

    //Array of used characters
    char num[] = "0123456789";
    char let[] = "qwertyuiopasdfghjklzxcvbnm";
    char LET[] = "QWERTYUIOPASDFGHJKLZXCVBNM";
    char sym[] = "`~!@#$%&*()_+-={}|[];':,./<>?";

    //password storage
    char pw[length];

    //selects characters to randomize
    r = rand() % 4;

    //password generating for loop
    for(i = 0; i < length; i++)
    {
	    switch(r)
	    {
		    default:
			    pw[i] = sym[rand() % 29];
			    r = rand() % 4;
			    printf("%c",pw[i]);
			    break;
		    case 1:
			    pw[i] = num[rand() % 10];
			    r = rand() % 4;
			    printf("%c",pw[i]);
			    break;
		    case 2:
			    pw[i] = let[rand() % 26];
			    r = rand() % 4;
			    printf("%c",pw[i]);
			    break;
		    case 3:
			    pw[i] = LET[rand() % 26];
			    r = rand() % 4;
			    printf("%c", pw[i]);
			    break;
	             }
    }
    //Makes a new line cause... why wouldn't it?
    printf("\n");
	
    return 0;
}
