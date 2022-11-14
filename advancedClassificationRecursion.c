#include <stdio.h>
#include "NumClass.h"

int isPalindrome2(int n, int first,int last, int a) {
    if(n < 1){return 1;}
    a = power(10, sumOfDigits(n)-1);
    first = n % 10;
    last = n / a;
    if (first != last){
        return isPalindrome2( ((n%a)-first)/10, 0,0,0) * 0;
    }
    return isPalindrome2( ((n%a)-first)/10, 0,0,0)*1;
}

int isPalindrome1(int n) {
    return isPalindrome2(n, 0, 0, 0);
}

//subfunctions that help with the main functions
int power2(int n,int m){
    int pow=1;
    for (int i = 1; i <=m ; i++) {
        pow*=n;
    }
    return pow;
}
int sumOfDigits2(int n){
    int sum=0,tmp=n;
    do {
        tmp/=10;
        sum++;
    } while (tmp>0);
    return sum;
}

int isArmstrong2(int n,int m){
    if(n<1)return 0;
    int sum= power2(n%10,m);
    return sum+isArmstrong2(n/10,m);
}
int isArmstrong(int n) {
    if(isArmstrong2(n, sumOfDigits2(n)-1) ==n) return 1;
    return 0;
}

int main(){
    printf("badok ahi %d" , isArmstrong(407));
}



