/*
WHILE LOOP

while (condition) 
{
    Statements to be executed multiple times,
    while the condition is true
}

NOTES:
The condition is checked BEFORE entering the loop.
So if the condition is initially FALSE, 
the loop statements are NEVER executed.

DO WHILE LOOP

do 
{
    Statements to be executed multiple times,
    while the condition is true
} while (condition)

NOTES:
The condition is tested AFTER executing the statements.
So the body of the do-while loop is executed AT LEAST ONCE.

*/

/* Compute the lenght of a string 
while (current char is not null)
{ 
    Increase lenght counter
    Move to the next char
}

*/

#include <stdio.h>   /* printf */

int main (void)
{
    char str[] = "Connie";

    int len = 0;                      /* Current char index              */
    while (str[len] != '\0') {       /* While current char is _not_null */
        len ++;                       /* Update length counter           */
    }
    printf("%s \n", str);
    printf("String length is: %d \n", len);

    printf("String: \"%s\" \n", str);
    printf("Length: %d chars \n", len);

    return 0;
}
