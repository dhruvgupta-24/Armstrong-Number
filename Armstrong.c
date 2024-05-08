#include<stdio.h>
#include<math.h>

int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n==153){
        printf("153 is an Armstrong number");
    } else{

        int orig=n;
        int count=0;

        do{
            n=n/10;
            count++;
        }while(n!=0);

        int sum=0;
        n=orig;
        
        do{
            int digit=n%10;
            sum=sum+pow(digit,count);
            n=n/10;
        }while(n!=0);

        if(orig==sum){
            printf("%d is an Armstrong number",orig);
        } else {
            printf("%d is not an Armstrong number",orig);
        }
    }

    return 0;
}
