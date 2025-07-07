#include <stdio.h>

int main() {

    int A, B;
    
    scanf("%d %d", &A, &B);

    
    if (A > 0 && A < 10 && B > 0 && B < 10) {
       
        printf("%.15lf\n", (double)A / B);
        
    }
   
    return 0;
}


