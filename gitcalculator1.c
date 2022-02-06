#include <stdio.h>
#include <stdlib.h>

int main()
{

    float a , b, result ; char op;
    printf ("Please enter the operator (+, -, / or *):    ");
    scanf ("%c",&op);
    printf ("Please enter the first number:    ");
    scanf ("%f",&a);
    printf ("Please enter the second number:    ");
    scanf ("%f",&b);

    switch (op)
    {
    case '-':
        result = a - b;
        printf ("Subtraction of first number %f and second number %f is: %.2f  ", a , b, result);
        break;
    case '+':
        result = a+b;
        printf ("Addition of first number %f and second number %f is: %.2f ", a , b, result);
        break;
    case '*':
        result = a*b;
        printf ("Multiplication of first number %f and second number %f is: %.2f ", a , b, result);
        break;
    case '/':
        result = a/b;
        printf ("Division of first number %f and second number %f is: %.2f ", a , b, result);
        break;
    default:
        printf("You did not choose +, -, *, / Therefore calculator did not work. Check you option!");

    }
    return 0;
}
