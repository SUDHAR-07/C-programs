#include <stdio.h>
int main() {
	int a = 3, b = 7;
	int t = a;
	a = b;
	b = t;
	printf("%d %d", a, b);
	return 0;
}