#include <stdio.h>

int main() {

    int A, B;
    
    scanf("%d %d", &A, &B);
    
    if (A > 0) {
        if (B < 10) {
           printf("%d\n", A-B);         
        }
    }
   
    return 0;
}
