/* Multiplication Table using NESTED FOR LOOPS 

int i is the outer loop
int j is the inner loop
%3d specifies a minimum width of 3 spaces 
    aligns the values
values are printed in the inner loop

*/

#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%3d ", (i*j));
        }
        putchar('\n');
    }

    return 0;
}