#include <stdio.h>
#include <stdlib.h>

int addNumbers(int x, int y) {
    return (x + y);
}

float multiplyNumbers(int x, int y) {
    int result = x * y;
    return (result);
}

double divideNumbers(int a, int b) {
    int answer;
    answer = a / b;
    return (answer);
}

int substract_numbers(int a, int b, int c, int d) {
    return (a - b - c -d);
}

void add_calc() {
    int num1, num2, sum;
    printf("Enter your first number: ");
    scanf("%d", &num1);

    printf("Enter your second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("The sum of entered value = %d\n", sum);
}

void mult_calc() {
    int num1, num2, mult;
    printf("Enter first number to multiply: ");
    scanf("%d", &num1);

    printf("Enter second number to multiply: ");
    scanf("%d", &num2);

    mult = num1 * num2;
    printf("The product of entered value = %d\n", mult);
}

void div_calc() {
    int num1, num2, div;
    printf("Enter first number to divide: ");
    scanf("%d", &num1);

    printf("Enter second number to divide: ");
    scanf("%d", &num2);

    div = num1 / num2;
    printf("The quotient of entered value = %d\n", div);
}

void sub_calc() {
    int num1, num2, sub;
    printf("Enter first number to subtract: ");
    scanf("%d", &num1);

    printf("Enter second number to subtract: ");
    scanf("%d", &num2);

    sub = num1 - num2;
    printf("The difference of entered value = %d\n", sub);
}
void sizeof_function() {
    printf("The actual size of integer is %u\n", sizeof(int));
    printf("The actual size of float is %u\n", sizeof(float));
    printf("The actual size of double is %u\n", sizeof(double));
    printf("The actual size of character is %u\n", sizeof(char));
}

void test_some_entry() {
    int x;
    float num;
    char text[20];
    printf("Please enter some integer, floating point number and string: ");
    scanf("%d %f %s", &x, &num, text);
    printf("Entered integer is %d and entered floating_point_number is %f and entered string is %s \n");
    printf("Good Bye!\n");
}

void printCrap() {
    printf("The tree has %d apples. \n", 22);
    printf("\"Hello, World in Quotations\b Marks\"\n");
    printf("Single line Comment in C programming looks like \/\/ Comment goes here...\n");
    printf("Multi-line comment in C programming looks like \/* Comment goes in between those asterisk *\/\n");
    printf("Color: %s \nNumber: %d\nFloat: %f\n", "blue", 25, 35.69);
    printf("Pi = %3.2f\n", 3.14159);
    printf("Pi = %-2.2f\n", 2.27837);
    printf("I love C programming 100%% \n");
}

void simple_mensuration() {
    double length;
    double height;
    double area;

    length = 10;
    height = 5;
    area = length * height;
    printf("Area = %f\n", area);
}

void division_explorer() {
    int i1 = 10;
    int i2 = 3;
    int quotient, remainder;
    float f1 = 4.2;
    float f2 = 2.5;
    float result;

    quotient = i1 / i2; // 3
    remainder = i1 % i2; // 1
    result = f1 / f2; // 1.68

    printf("Value of computed quotient = %d\n", quotient);
    printf("Value of computed remainder = %d\n", remainder);
    printf("Value of computed result = %f\n", result);

    int a = 12;
    int b = 5;
    int resultOfAandB = a % b;
    printf("The result of A and B = %d\n", resultOfAandB);
}

void printCrap() {
    int c = 0;
    int number = 10;
    while(c <= number) {
        printf("I love to program in c language!\n");
        c++;
    }
}

int main()
{
    printf("Hello world!\n");

    printf("The Sum of those numbers = %d\n", addNumbers(25, 25));
    printf("The product of those numbers = %f\n", multiplyNumbers(5, 5));
    printf("The Quotient of those numbers = %f\n", divideNumbers(100, 2));
    printf("The Difference of those numbers = %d\n", substract_numbers(160, 40, 20, 10));
    printf("Good Bye!\n\n");

    int x = 0;
    while(x <= 10) {

        if(x == 1) {
            add_calc();
            mult_calc();
            div_calc();
            sub_calc();
            sizeof_function();
            test_some_entry();
            printCrap();
            simple_mensuration();
            division_explorer();
            printCrap();
        }

        x++;
    }




    return (0);
}