#include<stdio.h>
void main (){
long int a,b,c,d,e,f,n;
printf("Enter five digit number ");
scanf("%ld,&a");
b=a%10;
c=(a%100)/10;
d=(a%1000)/100;
e=(a%10000)/1000;
f=a/100000;
n=(b*10000)+(c*1000)+(d*100)+(e*10)+f;
printf("\n The reverse of these number are %ld",n);

    

}