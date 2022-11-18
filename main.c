#include "NumClass.h"
#include <stdio.h>


int main(){
    int first,second;
    scanf("%d",&first);
    scanf("%d", &second);
    if(second<first){
        int tmp=first;
        first=second;
         second=tmp;
    }
    printf("The Armstrong numbers are: ");
    for(int i=first;i<=second;i++){
        if(isArmstrong(i)) {
            if(i!=first){printf(" ");}
            printf("%d",i);
        }
    }
    printf("\n");
    printf("The Palindromes are: ");
    for(int i=first;i<=second;i++){
        if(isPalindrome(i)) {
            if(i!=first){printf(" ");}
            printf("%d" ,i);
        }
    }
    printf("\n");
    printf("The Prime numbers are: ");
    for(int i=first;i<=second;i++){
        if(isPrime(i)) {
            if(i!=first){printf(" ");}
            printf("%d" ,i);
        }
    }
    printf("\n");
    printf("The Strong numbers are: ");
    for(int i=first;i<=second;i++){
        if(isStrong(i)) {
            if(i!=first){printf(" ");}
            printf("%d",i);
        }
    } 
    printf("\n");
    return 0;
}
