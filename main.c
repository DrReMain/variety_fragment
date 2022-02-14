#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    // time_t t = time(NULL);
    // srand(t);
    // for (int i = 0; i < 2; i++)
    // {
    //     printf("rand(): %d\n", rand() % 10 + 1);
    // }

    char str[1000] = {'a'};
    memset(str, 'x', 1000);

    printf("%s\n", str);

    return 0;
}
