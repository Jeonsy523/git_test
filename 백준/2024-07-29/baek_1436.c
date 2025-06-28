#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N, k;
	int num[10] = { 0, };
	int answer[10000];
	int s = 0;

	scanf("%d", &N);
	
	for (int i = 666; s < 10000; ++i) {
		int m = 0;
		k = i;

		while (k > 0) {
			num[m] = k % 10;
			k /= 10;
			m++;
		}

		for (int j = 0; j < m - 1; ++j) {
			if (num[j] == num[j + 1] && num[j + 1] == num[j + 2] && num[j] == 6) {
				answer[s] = i;
				s++;
				break;
			}
		}
	}
	printf("%d\n", answer[N - 1]);

	return 0;
}

