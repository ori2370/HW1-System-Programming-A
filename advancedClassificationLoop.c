#include <stdio.h>
#include "NumClass.h"
#ifdef LOOP

//subfunctions that help with the main functions
int powerL(int n,int m){
    int pow=1;
    for (int i = 1; i <=m ; i++) {
        pow*=n;
    }
    return pow;
}
int sumOfDigitsL(int n){
    int sum=0,tmp=n;
    do {
        tmp/=10;
        sum++;
    } while (tmp>0);
    return sum;
}

//functions
int isArmstrong(int n){
    int sum=0,digits=n;
    do {
        sum=sum+powerL(digits%10,sumOfDigitsL(n));
        digits/=10;
    } while (digits>0);

    if(sum==n)return 1;
    return 0;
}

int isPalindrome(int n) {
    int num = n;
    while (num > 0) {
        int first = 0, last = 0, a;
        a = powerL(10, sumOfDigitsL(num)-1);
        first = num % 10;
        last = num / a;

        if (first != last)return 0;
        num=((num%a)-first)/10;
    }
    return 1;
}
#endif