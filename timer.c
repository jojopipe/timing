#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc < 2) {
        return 1;
    }
    char *end;
    long time = strtol(argv[1], &end, 10);
    char t_unit = 'M';
    if (*end == 0) {
        if (argc >= 3) {
            t_unit = *argv[2];
        }
    } else {
        t_unit = *end;
    }
    printf("%c\n", t_unit);
    long seconds = time;
    switch (t_unit)
    {
    case 'm':
    case 'M':
        seconds *= 60;
        break;
    case 'h':
    case 'H':
        seconds *= 60 * 60;
        break;
    default:
        break;
    }
    printf("seconds: %ld\n", seconds);
}