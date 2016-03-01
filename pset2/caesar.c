#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
 
int main(int argc, string argv[])
{	
    //check for invalidity of arguments entered in the command line
    if (argc != 2)
    {
        printf("OOPs please do it this way => caesar KEY(eg 13)\n");
        return 1;
    }
 
    // Get the k value
    int k = atoi(argv[1]);
 
    // Get text input
    string s = GetString();
 
    for (int i = 0, length = strlen(s); i < length; i++)
    {
        char character = s[i];
 
        // Change char if it is uppercase, lowercase, or not a letter
        // Nota bene: 65 ASCII 'A', and 97 is ASCII 'a'
        if (isupper(character))
        {
            char newUpperChar = (((character - 65) + k) % 26) + 65;
            printf("%c", newUpperChar);
        }
        else if(islower(character))
        {
            char newLowerChar = (((character - 97) + k) % 26) + 97;
            printf("%c", newLowerChar);
        }
        else
        {
            printf("%c", character);
        }
    }
    printf("\n");
    return 0;
}