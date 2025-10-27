#include <stdio.h>

int main() {
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		printf("%.15f\n", 1.0/n);
	}
	return 0;
}
