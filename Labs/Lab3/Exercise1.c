#include <stdio.h>

int main()
{   
    char o;
    double a;
    double b;
    double result;
    
    printf("Would you like to do addition (+), substraction (-), multiplication (*) or division (/)? ");
    scanf("%c", &o);
    
    printf("Please enter the first number: ");
    scanf("%lf", &a);
    
    printf("Please enter the second number: ");
    scanf("%lf", &b);
    
    switch(o){
        case '+':
            result = a + b;
            printf("%.1lf", result);
            break;
        case '-':
            result = a - b;
            printf("%f",result);
            break;
        case '*':
            result = a * b;
            printf("%f", result);
            break;
        case '/':
            if (b == 0){
                printf("%f", b);
                break;
            }
            else{
                result = a / b;
                printf("%f", result);
                break;
            }
        default:
            "Please enter either +, -, * or /. ";
    }
}