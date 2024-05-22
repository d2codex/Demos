
/* Testing for Equality against a List of Values
    Using the switch statement

switch (n) {
case value1:
    Statments for case 1

    break;
case value2:
    Statements for case 2

    break;

default:
    Statements for all other cases

    break;
}

break is optional and will fall through to the next cases until a break is found
switch can't be used for STRINGS

must use IF-ELSE-IF ladder to compare strings

switch cannot be used with RANGES, only SINGLE values
*/

#include <stdio.h>

int main(void)
{
    int number;
    printf("Please enter an integer number: ");
    scanf("%d", &number);

    switch (number) {
        case 1:
        printf("You entered one. \n");
        break;

        case 10:
        printf("You entered ten. \n");
        break;

        case 64:
        printf("You entered sixty-four. \n");
        break;

        default:
        printf("You entered a number other than 1, 10, 64. \n");
        break;
    }

    return 0;
}