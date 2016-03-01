#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
 
int getK(int ltrCiphered, string k);

int main(int argc, string argv[])
{	
    //check for invalidity of arguments entered in the command line
    if (argc != 2)
    {
        printf("OOPs please do it this way => vigenere k \n");
        return 1;
    }
 
    string k = argv[1];
 
    // Check if k only contains letters
    for (int i = 0, length = strlen(k); i < length; i++)
    {
        if (!isalpha(k[i]))
        {
            printf("Please provide only a letter\n");
            return 1;
        }
    }
 
    // Get the text input
    string s = GetString();
 
    int ltrCiphered = 0;
 
    for (int i = 0, length = strlen(s); i < length; i++)
    {
        char character = s[i];
 
        if (isupper(character))
        {
            char newUpperChar = (((character - 65) + getK(ltrCiphered,k)) % 26) + 65;
            printf("%c", newUpperChar);
            ltrCiphered++;
        }
        else if(islower(character))
        {
            char newLowerChar = (((character - 97) + getK(ltrCiphered,k)) % 26) + 97;
            printf("%c", newLowerChar);
            ltrCiphered++;
        }
        else
        {
            printf("%c", character);
        }
    }
 
    printf("\n");
 
    return 0;
}
//get corresponding letters of k
int getK(int ltrCiphered, string k)
{
    int kLen = strlen(k);
    return tolower(k[ltrCiphered % kLen]) - 97;
}