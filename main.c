#include <stdio.h>
#include "NumClass.h"

int main(){
    int first,second;
    printf("Please enter two numbers \n");
    scanf("%d%d", &first, &second);
    if(second<first){
        int tmp=first;
        int first=second;
        int second=tmp;
    }
    printf("The prime numbers are: ");
    for(int i=first;i<=second;i++){
        if(isPrime(i)) {
            printf("%d " ,i);
        }
    }
    printf("\n");
    printf("The armstrong numbers are: ");
    for(int i=first;i<=second;i++){
        if(isArmstrong(i)) {
            printf("%d " ,i);
        }
    }
    printf("\n");
    printf("The strong numbers are: ");
    for(int i=first;i<=second;i++){
        if(isStrong(i)) {
            printf("%d " ,i);
        }
    }
    printf("\n");
    printf("The palindrome numbers are: ");
    for(int i=first;i<=second;i++){
        if(isPalindrome(i)) {
            printf("%d " ,i);
        }
    }
    printf("\n");
    return 0;
}