#include <stdio.h>
int main(){
// int marks [5]={3,2,4,5,7};
// int ok    [5]={2,3,4,5,6};
// int add [5];
//   

// for(int i=0;i<5;i++){
    
//     add[i]=marks[i]+ok[i];

// }
// for ( int i = 0; i < 5; i++)
// {
// printf("%d\n",add[i]);
   
// }



















//reverse
// int reverse[5]={2,4,4,3,1};
// int i;
// for( i=4;i>=0;i--){
//     printf("%d ",reverse[i]);
// }
// return 0;
// }


//transpose
// int a[3][3],i,j;
// printf("Enter the matrix : ");
// for (i=0;i<3;i++){
//     for (j=0;j<3;j++){
//         scanf("%d",&a[i][j]);
//     }
// }
// printf("The matrix is :\n ");
// for (i=0;i<3;i++){
//     for (j=0;j<3;j++){
//         printf("%d\t",a[i][j]);
//     }
//      printf("\n");
// }
// printf("Transpose matrix is\n ");
// for (i=0;i<3;i++){
//     for (j=0;j<3;j++){
//         printf("%d\t",a[j][i]);
//     }
//     printf("\n");
// }
// }

//matrix multiplication
// int i,j,k,a[3][3],b[3][3],c[3][3];
// printf("enter matrix a");
// for(i=0;i<3;i++){
//     for(j=0;j<3;j++){
//         scanf("%d",&a[i][j]);
//     }
// }
// printf("enter matrix b");
// for(i=0;i<3;i++){
//     for(j=0;j<3;j++){
//         scanf("%d",&b[i][j]);
//     }
// }
// for(i=0;i<3;i++){
//     for(j=0;j<3;j++){
//         c[i][j]=0;
//         for(k=0;k<3;k++){
//             c[i][j]=c[i][j]+a[i][k]*b[k][j];
//         }
//     }
// }
// printf("multiplication of a and b is \n ");
// for(i=0;i<3;i++){
//     for(j=0;j<3;j++){
//         printf("%d\t",c[i][j]);
//     }
//     printf("\n");
// }
// }



//biggest element
int a[5],big;
printf("enter a element \n");
for(int i=0;i<5;i++){
    scanf("%d",&a[i]);
}
big=a[0];
for(int i=0;i<5;i++){
    if(a[i]>big)    // for small use (<)
    big=a[i];
}

    printf("biggest is %d \n",big);
}