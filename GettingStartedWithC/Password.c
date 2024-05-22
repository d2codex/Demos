/* Demo: if...else */

#include <stdio.h> /* For console I/O */
#include <string.h> /* For strcmp */

int main(void)
{
    char password[20];
    printf(" Please enter the password: ");
    scanf("%19s", password);

    if (strcmp(password, "Pluralsight") == 0) 
    /* string compare == 0 (returns 0 whne strings are equal) */
    {
        printf(" Correct Password! \n");
    } else {
        printf(" Wrong Password! \n");
    }

    return 0;
}