#include <cs50.h>
#include <stdio.h>

int GetPositiveInt(void);

int main(void) {
    
    int lengthInShower = GetPositiveInt();
    int x = (lengthInShower * 1.5) * 128;
    int y = x /16;
    lengthInShower = y;
    printf("bottles: %i\n", lengthInShower);
}

int GetPositiveInt(void) {
    int n;
    do
    {
        printf("Input amount of time you spend in the shower: ");
        n = GetInt();
    } 
    while(n < 1);
    return n;
}