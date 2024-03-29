// #include <stdio.h>
// int main(){
// int age=19;
// int *ptr =&age;
// int _age=*ptr;
// printf("%d\n",_age);
// printf("%u\n",&age); //address
// printf("%u\n",ptr);
// printf("%u\n",&ptr); //address
// printf("%u\n",*ptr); //value
// printf("%u\n",*(&age)); //value
// return 0;
// }

//pointer in function
#include <stdio.h>
void square (int n);
int main(){
    int number =5;
    square(number);
printf("number %d \n",number);
return 0; }
void square (int n){
    n= n*n;
    printf("square %d\n",n);
}
