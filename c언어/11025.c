#include <stdio.h>

int main() {
	int n, k;
	scanf("%d %d" ,&n,&k);
	int ans = 0;
	for (int i = 2; i <= n; ++i) ans = (ans + k) % i;
	printf("%d", ans + 1);
}