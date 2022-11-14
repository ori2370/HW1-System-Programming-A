#include <stdio.h>
#include "NumClass.h"
int power(int n,int m){
    int pow=1;
    for (int i = 1; i <=m ; i++) {
        pow*=n;
    }
    return pow;
}
int sumOfDigits(int n){
    int sum=0,tmp=n;
    do {
        tmp/=10;
        sum++;
    } while (tmp>0);
    return sum;
}
int isArmstrong(int n){
    int sum=0,digits=n;
    do {
        sum=sum+power(digits%10,sumOfDigits(n));
        digits/=10;
    } while (digits>0);

    if(sum==n)return 1;
    return 0;
}

int isPalindrome(int n) {
    int num = n;
    while (num > 0) {
        int first = 0, last = 0, a;
        a = power(10, sumOfDigits(num)-1);
        first = num % 10;
        last = num / a;

        if (first != last)return 0;
        num=((num%a)-first)/10;
    }
    return 1;
}

