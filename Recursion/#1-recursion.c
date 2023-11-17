// Write a program in C to print the first 50 natural numbers using recursion.
#include <stdio.h>
void counter(int);
int main(void){
    int count = 50;
    counter(count);
    return 0;
}

void counter(int n){
    if(n == 0){
        return;
    }
    counter(n-1);
    printf("%d ", n);
}