#include <stdio.h>
#include <string.h>

int count(const char *str, const char *substr) {
	int result = 0;
	while(str = strstr(str, substr)) {
		result++;
		str++;
	}
	return result;
}

int main(void) {
	int c, r = 0;
	scanf("%d", &c);
	while(c--) {
		char s[10001];
		scanf("%s", s);
		int t = count(s, "for") + count(s, "while");
		if(t > r)
			r = t;
	}
	printf("%d", r);
}