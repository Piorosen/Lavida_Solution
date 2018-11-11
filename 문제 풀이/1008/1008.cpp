#include <stdio.h>
#include <string.h>


int main()
{
	char Input[100];
	char Output[10][100] = { 0, };

	int num;
	scanf("%d", &num);

	int len;
	for (int i = 0; i < num; i++) {
		scanf("%s", &Input);

		len = strlen(Input);

		for (int q = 0; q <= len / 2; q++) {
			sprintf(Output[i], "%s%c", Output[i], Input[q * 2]);
		}

		int k = len % 2 == 0 ? 0 : 1;
		for (int q = 0; q < len / 2 + k; q++) {
			sprintf(Output[i], "%s%c", Output[i], Input[q * 2 + 1]);

		}
		printf("%s\n", Output[i]);
	}
}