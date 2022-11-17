#include "NumClass.h"
#include <stdio.h>

//subfunctions that help with the main functions
int powerR(int n,int m){
    int pow=1;
    for (int i = 1; i <=m ; i++) {
        pow*=n;
    }
    return pow;
}
int sumOfDigitsR(int n){
    int sum=0,tmp=n;
    do {
        tmp/=10;
        sum++;
    } while (tmp>0);
    return sum;
}

//functions
int isPalindrome2(int n, int first, int last, int afterfirst , int a) {
    if(n < 1){return 1;}
    a = powerR(10, sumOfDigitsR(n)-1);
    first = n % 10;
    afterfirst = ((n % 100)/10);
    last = n / a;
    int b = 1;
    if (first != last){
        return 0;
    }
    if (n/(a/10) == last*10){
        if(afterfirst == 0){
            return isPalindrome2( ((n%a)-first)/10 + a/100 + 1, 0,0,0,0)*1;
            b = 0;
        }else{
            return 0;
        }
    }
    if(b){return isPalindrome2( ((n%a)-first)/10, 0,0,0,0)*1;}
}

int isPalindrome(int n) {
    return isPalindrome2(n, 0, 0, 0, 0);
}


int isArmstrong2(int n,int m){
    if(n<1)return 0;
    int sum= powerR(n%10,m);
    return sum+isArmstrong2(n/10,m);
}
int isArmstrong(int n) {
    if(isArmstrong2(n, sumOfDigitsR(n)) ==n) return 1;
    return 0;
}


