#include <stdio.h>
#include "NumClass.h"


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



