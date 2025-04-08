#include <stdio.h>
 
int main() {

	int n, i = 1, result;

	scanf("%d", &n);

	if (1 <= n <= 10) {
		while (i <= 9) {
			result = n * i;
			printf("%d * %d = %d \n", n, i, result);
			i++;
		}
	}
	else
		return 0;
}
