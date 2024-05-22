/* For Loop
for (int i = 0; i < N; i++) {

    i = 0 initialiazation executes once
    i < N loop condition, will terminate when it is false
        if the condition is INITIALLY false it will never be executed
    i >= 0; i-- backward iteration from N down to 0
    i +=3 increment by given step
    i++ update statement


    Statements to be executed multiple times
printf("%d \n", i);

N represents the number of times it will repeat

for (initialization; condition; update)
{
    statement(s)
}

}
*/

#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 10; i++) {
        printf("Iteration #%d \n", (i+1));
    }
    
    return 0;
}
