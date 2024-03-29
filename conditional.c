#include<stdio.h>
int main(){
 
    //if else

// int age;
// printf("Enter your Age \n");
// scanf("%d",&age);
// if (age<=1){
//     printf("INFANT");
// }
// else if (age<=12){
//     printf("CHILD \n");
// }
// else if (age<18){
//     printf("TEENAGERS \n");
// }
//     else if (age<=99)  {
// printf("ADULT \n");
//     }
// else {
//     printf("GOD IS WAITING ");
// }
    
    //ternary

// int age;
// printf("ENTER YOUR AGE");
// scanf("%d",&age);
// age>18?printf("ADULT \n"):printf("UNDER AGE");

// int number;
// printf("ENTER YOUR NUMBER \n");
// scanf("%d",&number);
// int luckynumber=67;
// number==luckynumber?printf("you win \n"):printf("try again \n");

//switches integers

int day;
printf("enter day in number means monday=1,tuesday=2,.....sunday=7 \n");
scanf("%d",&day);
switch (day)
{
case 1 : printf("monday \n"); 
     break;
     case 2 : printf("tuesday \n"); 
     break;
     case 3 : printf("wednesday\n"); 
    break;
     case 4 : printf("thursday \n"); 
     break;
     case 5 : printf("friday \n"); 
     break;
     case 6 : printf("saturday \n"); 
     break;
     case 7 : printf("sunday \n"); 
     break;

}

}