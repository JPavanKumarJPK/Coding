//Conditional / ternary operator problem 2
//c program to find max of three numbers using ternary operator
#include<stdio.h>
int main(){
int a,b,c,d;
printf("enter three numbers");
scanf("%d%d%d",&a,&b,&c);
d=(a>b && a>c)?a:(b>c)?b:c;
printf("the greater is %d",d);
}
