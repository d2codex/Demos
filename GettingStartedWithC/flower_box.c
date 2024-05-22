#include <stdio.h>
#include <string.h>

int main(void)
{
    /* String to border with asterisks */
    char str[] = "Diana is learning C.";

     /* Print the flowers above the string +4 extra to account for the sides */
    int len = strlen(str);
    
    for (int i = 0; i < len + 4; i++) {
        putchar('*');
    }

    putchar('\n');
    
    /* Print the string with 1 asterisk and 1 space on each side (4 total spaces) */
    printf("* %s * \n", str);

    /* Print the flowers below the string +4 extra to account for the sides */
    for (int i = 0; i < len + 4; i++) {
        putchar('*');
      
    }
    putchar('\n');

    return 0;
}