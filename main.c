#include <stdio.h>

#include "config.h"
#ifdef MEDIAN_OF_TWO_SORTED_ARRAYS
    #include <project.h>
#endif


int main() {
    printf("app version %d.%d\n", APP_VERSION_MAJOR, APP_VERSION_MINOR);
#ifdef MEDIAN_OF_TWO_SORTED_ARRAYS
    exec();
#endif
}