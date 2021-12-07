#include <stdio.h>
#include <cs50.h>

int main(void){
    int input = get_int("Please enter a whole number :) ");

    for (int i = 1; i < input; i++){
        if(i % 3 == 0 && i % 5 == 0) {
            printf("Fizzbuzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else printf("%i \n", i);
    }
}