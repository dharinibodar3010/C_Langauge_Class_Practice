#include<stdio.h>
int main (){
     
     int num, reversed=0;
     
     printf("Enter Any Number : ");
     scanf("%d", &num);
     
     while(num>0)
     {
         int reminder = num % 10;
         reversed = (reversed * 10) + reminder;
         num = num / 10;
     }

    printf("Your Reversed Number Is : %d", reversed);
    
    return 0;
}
