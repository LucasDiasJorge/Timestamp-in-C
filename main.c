#include <stdio.h>
#include "time.h"

int main(){

    time_t startTime = time(NULL); // Now
    time_t tempTime = time(NULL) + 50; // Set tempTime to now + 50 seconds

    printf("Start time: %i\n",startTime);
    printf("Temp time: %i\n",tempTime);
    printf("Diff time: %i\n",difftime(tempTime, startTime));

    return 0;
}