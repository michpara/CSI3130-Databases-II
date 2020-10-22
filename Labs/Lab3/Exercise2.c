#include <stdio.h>

int main()
{   
    int a;
    int b;
    int c;
    
    printf("Please enter the three number: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b){
        if(a > c){
            printf("%d", a);
        }else{
            printf("%d", c);
        }
    }
    if(a < b){
        if(b > c){
            printf("%d", b);
        }else{
            printf("%d", c);
        }
    }
}