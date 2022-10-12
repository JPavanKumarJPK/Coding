//loops problem 2
#include<stdio.h>
int main(){
int n,l,i=1;
int f;
scanf("%d",&n);
while(n>0)
 {if (i==1)
    l=n%10;
   f=n%10;
   n=n/10;
   i++;
 }
printf("first digit is %d last digit is %d",f,l);
}

