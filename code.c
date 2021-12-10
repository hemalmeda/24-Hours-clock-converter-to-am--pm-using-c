/*24 Hours clock checker*/
#include<stdio.h>
#include<conio.h>
void main(){
    int a,b;
    printf("Enter the Value of hours : ");
    scanf("%d",&a);
    printf("Enter the value of minutes : ");
    scanf("%d",&b);
    if(a==1){
        printf("The time value of hours is : 1:%d am ",b);
    }
    else if (a==2){
         printf("The time value of hours is : 2:%d am ",b);
    }
    else if (a==3){
         printf("The time value of hours is : 3:%d am ",b);
    }
    else if (a==4){
         printf("The time value of hours is : 4:%d am ",b);
    }
    else if (a==5){
         printf("The time value of hours is : 5:%d am ",b);
    }
     else if (a==6){
         printf("The time value of hours is : 6:%d am ",b);
    }
     else if (a==7){
         printf("The time value of hours is : 7:%d am ",b);
    }
     else if (a==8){
         printf("The time value of hours is : 8:%d am ",b);
    }
     else if (a==9){
         printf("The time value of hours is : 9:%d am ",b);
    }
     else if (a==10){
         printf("The time value of hours is : 10:%d am ",b);
    }
     else if (a==11){
         printf("The time value of hours is : 11:%d am ",b);
    }
     else if (a==12){
         printf("The time value of hours is : 12:%d pm ",b);
    }
     else if (a==13){
         printf("The time value of hours is : 1:%d pm ",b);
    }
     else if (a==14){
         printf("The time value of hours is : 2:%d pm ",b);
    }
     else if (a==15){
         printf("The time value of hours is : 3:%d pm ",b);
    }
     else if (a==16){
         printf("The time value of hours is : 4:%d pm ",b);
    }
     else if (a==17){
         printf("The time value of hours is : 5:%d pm ",b);
    }
     else if (a==18){
         printf("The time value of hours is : 6:%d pm ",b);
    }
     else if (a==19){
         printf("The time value of hours is : 7:%d pm ",b);
    }
     else if (a==20){
         printf("The time value of hours is : 8:%d pm ",b);
    }
     else if (a==21){
         printf("The time value of hours is : 9:%d pm ",b);
    }
     else if (a==22){
         printf("The time value of hours is : 10:%d pm ",b);
    }
     else if (a==23){
         printf("The time value of hours is : 11:%d pm ",b);
    }
     else if (a==24){
         printf("The time value of hours is : 12:%d am ",b);
    }
    else if (b<59){
        printf("does this time exist : %d:%d",a,b);
    }
    else if (a<24){
        printf("does this time exist : %d:%d",a,b);
    }
    else{
        printf("enter in proper format");
    }
}
