#include <stdio.h>
#include <string.h>

void print_reverse(char *s)
{
    size_t len = strlen(s);

    char *t = s + len-1;
    /* stores address of last elm in var s */

    /* Iterates through memory address from t's initial location to s's location and prints value at each location */
    /* Done decrementing values so it ends up reversing the wore */
    while (t >= s ) {
        printf("%c", *t);
        t = t-1; /* Calculating addresses as 'pointer arithmetic' */
    }
    puts("");
}

int main(void)
{
    char word[] = {"hello"};
    print_reverse(word);
    return 0;
}
