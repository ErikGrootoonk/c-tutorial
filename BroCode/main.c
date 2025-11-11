#include <stdio.h>
#include <stdbool.h>
int main(){

    // this is my first programm :-)
    /* this is a multiline 
    comment with lots of words */
    printf("Hello, World!\n");
    printf("Pizza is delicious\n");


    // variable = je weet wel

    int age = 20;  // int has 4 bytes
    int year = 2025;
    int quantity = 1;
    printf("My age is %d\n", age);
    printf("My age is %d\n", year);
    printf("You have ordered %d pizzas\n", quantity);


    float grade = 9.5; // float has 4 bytes
    float price = 10.55;
    printf("My grade is %f\n", grade);
    printf("My price is %.2f\n", price);


    double pi = 3.141592653589793; // double has 8 bytes
    printf("Pi is %.15lf\n", pi);
    


    char cijfer = 'A'; //char has 1 byte
    char symbol = '!';
    char currency = '$';
    char name[] = "Johan Broodje";  // array of chars
    char email[] = "erik.grootoonk@gmail.com";
    printf("My grade is %c\n", cijfer);
    printf("I am %c\n", symbol);
    printf("My name is %s\n", name);
    printf("My email is %s\n", email);

    bool isOnline = false; // 1 byte, requires <stdbool.h>
    printf("I am %s\n", isOnline ? "online" : "offline");


    // Format specifier = Special tokens that tell printf how to format the output, that begin with a percent sign (%)
    // followed by a type specifier.

   printf("%d\n", age);
   printf("%f\n", price);
   printf("%lf\n", pi);
   printf("%c\n", cijfer);
   printf("%s\n", name);

   // width precision flags
    float price1 = 19.99;
    float price2 = -100.00;

    printf("%+7.2f\n", price1);
    printf("%+7.2f\n", price2);
    

    return 0;
}