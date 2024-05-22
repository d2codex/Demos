#include <stdio.h>

int main(void)
{
    char answer[10];
    
    int i = 0;

    do {
        i++;
        printf("Iteration #%d \n", i);
        
        printf("Do you want to continue? [Enter NO to quit] ");
        scanf("%9s", answer);
    } while (strcmp(answer, "NO") != 0); /* strcmp(s1, s2) returns zero when s1 == s2 
    when answer == NO, it is false and ends the loop */

    return 0;
}