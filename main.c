#include <stdio.h>
#include "NumClass.h"

int main(){
    int first,second;
    printf("please enter two numbers \n");
    scanf("%d%d", &first, &second);
    if(second<first){
        int tmp=first;
        int first=second;
        int second=tmp;
    }
    printf("the prime numbers are:");
    for(int i=first;i<=second;i++){
        if(isPrime(i)) {
            printf("%d" ,i);
        }
    }
    printf("\n");
    printf("the armstrong numbers are:");
    for(int i=first;i<=second;i++){
        if(isArmstrong(i)) {
            printf("%d" ,i);
        }
    }
    printf("\n");
    printf("the strong numbers are:");
    for(int i=first;i<=second;i++){
        if(isStrong(i)) {
            printf("%d" ,i);
        }
    }
    printf("\n");
    printf("the palindrome numbers are:");
    for(int i=first;i<=second;i++){
        if(isPalindrome(i)) {
            printf("%d" ,i);
        }
    }
    printf("\n");
    return 0;
}