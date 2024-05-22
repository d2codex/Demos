/* Changing the Normal Execution Flow of a Loop 

BREAK
while (loop_condition) {
    Some statements

    if (exit_condition) {
        break; Immediately terminates the loop
    }

    Other statements
}

GOTO
while (loop_condition) {
    ...
    if (error_condition) {
        goto Cleanup; Immediately terminates the loop and jumps to cleanup
    }
    ...
}
Cleanup:
    Cleanup code goes here

NOTE
1. goto can be placed outside of loops also
2. don't abuse the goto statement - can get complicated 
*/

/* Infinite loop bug involving the while loop */

#include <stdio.h> /* printf */

int main(void)
{
    int i = 0;

    while (i <= 10) {
        printf("%d \n", i);
        i++;
    }

    return 0;
}