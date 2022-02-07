#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    time_t t = time(NULL);

    printf("%lu\n", t);

    srand(t);

    for (int i = 0; i < 4; i++)
    {
        printf("rand(): %d\n", rand() % 10 + 1);
    }

    return 0;
}
