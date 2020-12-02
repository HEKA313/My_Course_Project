#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *S1, *S2, *S3;
	int *a;
	int *tmp;
	int n;
	scanf("%d", &n);
	a = (int *) malloc(n * sizeof(int));
	a[300] = 5;
	a[10165] = 6;
	for (int i = 0; i < 10170; i++) {
		printf("%d.- ", i);
		printf("%d\n", a[i]);
	}
	tmp = a;
	a = (int *) malloc(n * sizeof(int) * 1.5);
	realloc((void *) *tmp, *a);
	for (int i = 0; i < n * 1.5; i++) {
		printf("%d.- ", i);
		printf("%d\n", tmp[i]);
	}
}
