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