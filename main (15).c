#include<stdio.h>
int main (){
    
    //Error
    int marks;
    
    printf("Enter Marks : ");
    scanf("%d", &marks);
    
    do
    {
        printf("pass");
    }
    while(marks>=35);
    return 0;
}
