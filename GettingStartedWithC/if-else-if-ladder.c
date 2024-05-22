/* 

if (expression #1) {

Block of code

} else if (expression #2) {

    Block code of #2

} else if (expression #3) {

    Block of code #3

}else {

    Default block of code
}
 Goes top down
*/

int main(void)
{
    printf("Please enter an integer number: ");
    int number1;
    scanf("%d", &number1);

    printf("Please enter another integer number: ");
    int number2;
10  scanf("%d", &number2);

    if (number1 > number2) {
        printf("number1 > number2 \n");
    } else if (number1 < number2) {
        printf("number1 < number2 \n");
    }else {
        printf("number1 == number2 \n");
    }

    return 0;
}