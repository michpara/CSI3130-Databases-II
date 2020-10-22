#include <stdio.h>

int main()
{   
    int a;
    int result = 1;
    
    printf("Please enter a number: ");
    scanf("%d", &a);

    int i;

    if (a == 0 ||a == 1){
        result = 0;
    }
    
    for (i = 2; i < a; i++){
        if(a%i == 0){
            result = 0;
            break;
        }
    }
    
    if(result){
        printf("It is a prime number.");
    }else{
        printf("It is not a prime number.");
    }
    return 0;
}