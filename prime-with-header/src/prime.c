#include <stdio.h>
#include "prime.h"

int isprime(int n){
    int counter = 0;
    int i = 1;
    while (i<=n)
    {
        if (n % i == 0)
        {
            counter++;
            i++;
        }
        else
        {
            i++;
        }
    }
    if (counter > 2){
        return 0;
    }
    else{
        return 1;
    }
}

/*
int main(){
    int result = isprime(10);
    if (result == 0){
        systemout("it is not prime");
    }
    else{
        systemout("it is prime");
    }
}
*/