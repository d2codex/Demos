#include <stdio.h>
#include <string.h>

int main(void)
{
    /* String to underline */
    char str[] = "Connie is learning C.";

    /* Print the string */
    printf("%s \n", str);

    /* Print the underline */
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        putchar('-');
        /*putchar is more efficient than printf for printing single characters */
    }
    putchar('\n');

    return 0;
}

