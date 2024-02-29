#include <stdio.h>

int main() {
	long long int max,n = 0, sum =0;
	scanf("%d", &max);
	while (1) {
		n++;
		sum = sum + n;
		if (sum > max) {
			n--;
			break;
		}
	}
	printf("%d\n", n);
}