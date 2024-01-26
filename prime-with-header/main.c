#include <stdio.h>
#include "src/prime.h"

int main(){
    int num;
    printf("input number: ");
    scanf("%d",&num);
    int result = isprime(num);
    if (result == 0){
        systemout("it is not prime");
    }
    else{
        systemout("it is prime");
    }
}