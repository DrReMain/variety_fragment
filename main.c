#include <stdio.h>

// #define debug(M, ...) fprintf(stderr, "DEBUG %s:%d: " M "\n", __FILE__, __LINE__, ##__VA_ARGS__)
#define log(M, ...) printf("%s:%d: " M "\n", __FILE__, __LINE__, ##__VA_ARGS__)

int main(int argc, char const *argv[])
{
    log("abc");
    return 0;
}
