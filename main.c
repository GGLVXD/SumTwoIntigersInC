#include <stdio.h>

//func
int sum(int a, int b);
int sum(int a, int b) {
    return a + b;
}

//core
int main() {
    
//var 
int sum1, sum2;

//inputs
printf("please enter first number to sum: ");
scanf("%d", &sum1);
printf("please enter second number to sum: ");
scanf("%d", &sum2);
//sum the numbers
int num = sum(sum1, sum2);
//prints the number 
printf("%d", num);
    return 0;
}

