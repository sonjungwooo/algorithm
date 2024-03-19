#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long long int big(long long int a, long long int b) {
	if (b == 0) return a;
	else return big(b,a%b);
}
int main(int argc, char* argv[]) {
	long long int a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld\n", (a*b)/big(a,b));
	return 0;
}