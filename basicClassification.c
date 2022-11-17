#include "NumClass.h"
#include <stdio.h>

int isPrime(int num) {
    if(num < 1){return 0;}
    for(int i = 2; i <= num/2; i++){
        if(num%i==0){return 0;}
    }
    return 1;
}

int fact(int n){
    int res = 1, i;
    for(i = 1; i <= n; i++){
        res=res*i;
    }
    return res;
}

int isStrong(int num){
    int n = num, sum = 0;
    do{
        sum = sum + fact(num%10);
        num = num/10;
    }while(num > 0);
    if(n == sum){return 1;}
    return 0;
}