#include <stdio.h>
#include <time.h>
int main() {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    printf("%d-%02d-%02d",tm.tm_year+1900,tm.tm_mon+1,tm.tm_mday);
}
//02d 두자리수 출력