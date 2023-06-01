#include <stdio.h>
#include <sys/time.h>

int main(){

        struct timeval tv;
        gettimeofday(&tv,NULL);
        tv.tv_sec; // seconds
        tv.tv_usec; // microseconds

        printf("%ld\n", tv.tv_sec);

        return 0;
}