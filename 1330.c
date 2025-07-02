int main() {

	int a, b;

	scanf("%d %d", &a, &b);

	if (-10000 <= a, b <= 10000) {
		if (a > b) {
			printf(">"); 
		}
		else if (a == b) {
			printf("==");
		}
		else {
			printf("<");
		}
	}
		else
			return 0;

}
