// #include <stdio.h>
// void printhelllo(); //declaration
// void printgoodbye();
// int main(){
// printhelllo(); //call
// printgoodbye();
// return 0;
// }
// void printhelllo(){ //definition
//     printf("hello ji");
// }
// void printgoodbye(){
//     printf("good bye ");
// }


// #include <stdio.h>
// void namaste ();
// void gutentag ();
// int main(){
// printf("press  i for indian and g for german");
// char ch;
// scanf("%c",&ch);
// if (ch=='i')
// { namaste();
// }else {
//     gutentag();
// }

// return 0;
// }
// void namaste (){
//     printf("namaste");
// }
// void gutentag (){
//     printf("guten tag");
// }


#include <stdio.h>
int sum(int a ,int b);
int main(){
    int a,b;
printf("enter two digit numbers restpectively");
scanf ("%d %d",&a,&b);
int s=(a+b)/2;
printf("%d",s);
return 0;
}
int sum(int a ,int b){
return a+b;
}


// #include <stdio.h>
// void printtable(int n);

// int main(){
// int n;
// printf("enter your favourite number");
// scanf("%d",&n);
// printtable(n);
// return 0;

// }
// void printtable(int n){
//     for(int i=1;i<=10;i++){
// printf("%d\t",n*i);
//     }
// }