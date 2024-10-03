//program to show loan qualifications
/*
Author : Mtito Wilson
Reg No: CT101/G/24972/24
*/
//preprocessor derective printf()

#include <stdio.h>

int main()
{
       int age;
       float salary;
       
        printf("Enter your age please:  ");
        scanf("%d",   &age);
        
        if   (age >= 21){
            printf("Thank you proceed.   \n");
        } else  {
            printf("Unfortunately, we are unable to offer you a loan at this time.");
            return 0;
        }
        
        printf("Please enter your annual salary:  ");
        scanf("%f",  & salary);
        if (salary  >= 21000) {
            printf("Congratulations you qualify for a loan!");
        } else {
            printf("Unfortunately, we are unable to offer you a loan at this time.  ");
 }
       return 0;
  }                