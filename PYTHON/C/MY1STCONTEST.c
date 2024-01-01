#include <stdio.h>

int main(void) {
/* code */
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("%d %d", (a - b), (a - b) - c);
	return 0;
}
