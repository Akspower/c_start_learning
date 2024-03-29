 #include <stdio.h>
 #include<string.h>
 struct student {
 char name[50];
 int roll;
 float cgpa;

 };
int main(){
// struct student s1;
 struct student s2 = {"aditya",1,8.9};
printf("%d %f %s ",s2.roll,s2.cgpa,s2.name);

// printf("ENTER YOUR DATA  : \n");
// printf("Name is \n");
// scanf("%s",s1.name);
// printf("Roll is \n");
// scanf("%d",&s1.roll);
// printf("cgpa is \n");
// scanf("%f",&s1.cgpa);
// printf("OK DONE ");

// printf("my name is %s\n",s1.name);
// printf("my roll is %d\n",s1.roll);
// printf("my cgpa is %f\n",s1.cgpa);
  return 0;
 }
