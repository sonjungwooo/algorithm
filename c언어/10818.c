#include <stdio.h>

int main()
{
	int n,min=1000000,max=-1000000; 
	scanf("%d", &n);
    int a[n]; 
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		if (a[i] > max)
			max = a[i];
        if (a[i] < min)
			min = a[i];
	}

	printf("%d %d", min, max);

	return 0;

}
