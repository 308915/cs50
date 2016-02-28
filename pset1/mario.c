#include <cs50.h>
#include <stdio.h>

int GetPositiveInt(void);

int main(void) {
    int c = GetPositiveInt();
    for(int i = 0; i < c; i++){
        for(int j=0; j < c-i-1; j++){
            printf("%s", " ");
        }
        
        for(int k=0; k < i+2; k++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}

int GetPositiveInt(void) {
    int n;
    do
    {
        printf("Please input a positive int not greater than 23: ");
        n = GetInt();
        if(n == 0) {
        return 0;
    }
    } while(n < 1 || n > 23);
    return n;
}