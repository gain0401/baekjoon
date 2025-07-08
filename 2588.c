#include <stdio.h>

int main() {

    int num1, num2;
    
    scanf("%d\n", &num1);
    scanf("%d\n", &num2);

    printf("%d\n", (num2%10)*num1);
    printf("%d\n", ((num2/10)%10)*num1);
    printf("%d\n", (num2/100)*num1);

    printf("%d\n", num1*num2);
   
    return 0;
}
