#include <stdio.h>

int main()
{
	int t;
	int w;
	scanf("%d", &t);
	while (t--) {
		int l[20][20] = { 0, };
		scanf("%d", &w);
		for (int i = 0; i < w; i++) {
			for (int y = 0 + i; y < w - i; y++) {
				for (int x = 0 + i; x < w - i; x++) {
					l[y][x]++;
				}
			}
		}
		for (int y = 0; y < w; y++) {
			for (int x = 0; x < w; x++) {
				printf("%d", l[y][x]);
			}
			putchar('\n');
		}
		putchar('\n');
	}
}