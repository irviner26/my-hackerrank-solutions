#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int number1;
    int number2;
    float number3;
    float number4;
    
    scanf("%d %d", &number1, &number2);
    scanf("%f %f", &number3, &number4);
    
    printf("%d %d\n", number1+number2, number1-number2);
    printf("%0.1f %0.1f", number3+number4, number3-number4);
    return 0;
}
