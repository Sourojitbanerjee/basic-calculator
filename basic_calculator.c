#include <stdio.h>
#include <math.h>
int main()
{
    char operator;
    float num1, num2, result;
    printf("enter two numbers: \n");
    scanf("%f  %f", &num1, &num2);

    while (1)
    {
        printf("enter an operator(+,-,*,/) or 'q' to quit\n");
        scanf(" %c", &operator);
        if (operator == 'q')
        {
            printf("calculator is closing\n");
            break;
        }
        switch (operator)
        {
        case '+':
            result = num1 + num2;
            printf("%f+%f=%f\n", num1, num2, result);
 break;
        case '-':
            result = num1 - num2;
            printf("%f-%f=%f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%f*%f=%f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0)
            {
                result = num1 / num2;
                printf("%f/%f=%f\n", num1, num2, result);
                break;
            }
            else
            {
                printf("invalid\n");
                break;
            }
        case '^':
            result = pow(num1, num2);
            printf("%d\n", num1, num2, result);
            break;

        default:
            printf("you have a sign error\n");
            break;
        }
    }

    return 0;
}