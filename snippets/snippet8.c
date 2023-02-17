#include <stdio.h>
void solve() {
    int ch = 2;
    switch(ch) {
        case 1: printf("A ");
        case 2: printf("F ");
        case 3: printf("C ");
        default: printf("None");
    }
}
int main() {
    solve();
	return 0;
}