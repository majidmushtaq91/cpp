#include <stdio.h>

enum {max_length = 127};
static char response[max_length];

int main(int argc, char ** argv) {
    printf("type a string : ");
    fflush(stdout);
    fgets(response, max_length, stdin);
    printf("this string is %s\n", response);
}