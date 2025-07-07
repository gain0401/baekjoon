#include <stdio.h>

int main() {

    int y;
    
    scanf("%d", &y);

    if (y < 1000 || y > 3000) 
        return 0;

    printf("%d\n", y-543);
   
    return 0;
}
