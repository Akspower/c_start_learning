#include<stdio.h>
void main (){
long int n,l,f,s;
printf("Enter the five digit number ");
scanf("%ld,&n");
l=n/10;
f=n%10000;
s=l+f;
printf("The sum of first and last digit are %ld",s);
}