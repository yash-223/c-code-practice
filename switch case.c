#include <stdio.h>

int main() 
{
    int age;
    printf("enter your age\n");
    scanf("%d",&age);
    
   
     
    switch (age)    
    {
        case 3:
        printf("the age is 3\n");
        break;
        
         case 13:
        printf(" age is 13\n");
        break;
        
        case 23:
        printf(" age is 23\n");
       break;
        
        default:
        printf(" age is not 3,13 & 23\n");
        break;
    }
   return 0;
   
}