#include<stdio.h>
int main(){
    
    int amount, hun, fifty, ten, five, two, one,total;
    
    printf("enter the amount\n");
    scanf("%d\n",&amount);
    hun=amount/100;
    amount=amount%100;
    fifty=amount/50;
    amount=amount%50;
    ten=amount/10;
    amount%=10;
    five=amount/5;
    amount%=5;
    two=amount/2;
    amount%=2;
    one=amount/1;
    amount%=1;
    total=hun+fifty+ten+five+two+one;
    printf("smallest number of notes=%d\n",total);
    return 0;

}