#include<stdio.h>
#include<math.h>

int main(){

    int a,b,c,d,e,f,g,h,i;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Specify the number of digits in your number: ");
    scanf("%d",&h);


    b=a%10;
    c=a%100/10;
    d=a%1000/100;
    e=a%10000/1000;
    f=a%100000/10000;
    i=a%1000000/100000;

    printf("Entered number is: %d%d%d%d%d%d\n",i,f,e,d,c,b);
    
    if (pow(b,h)+pow(c,h)+pow(d,h)+pow(e,h)+pow(f,h)+pow(i,h)==a){
        printf("%d is a Armstrong number",a);
    } else {
        printf("%d is not an Armstrong number",a);
    }

return 0;
}