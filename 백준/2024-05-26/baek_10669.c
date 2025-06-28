#include <stdio.h>
#include <time.h>

int main(){
	time_t base = time(NULL);
    struct tm t = *localtime(&base);
	printf("%d-%02d-%d\n", t.tm_year + 1900, t.tm_mon + 1, t.tm_mday);

	return 0;
}