#include<stdio.h>

int power(int b, int e){
    int pow=1;
    for(int i=0;i<e;i++){
        pow=pow*b;
    }
    return pow;
}

int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    int original=n;
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }

    n=original;
    int sum=0;
    while(n!=0){
        int digit=n%10;
        sum=sum+power(digit,count);
        n=n/10;
    }

    if(sum==original){
        printf("%d is an Armstrong number",original);
    } else{
        printf("%d is not an Armstrong number",original);
    }

    return 0;
}
