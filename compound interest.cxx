//program to find compound interest
/*
Author :Wilson Mtito
Reg No:CT101/G/24972/24
*/
//preprocessor derective printf(

#include <stdio.h>
#include <math.h>

int main()
{
            //declaration and initialization
            float principal;
            int rate;
            int time;
            int n;
            
            printf("Enter the principal:  ");
            scanf("%f",  &principal);
            
            printf("\n Enter the interest rate:  ");
            scanf("%d",  &rate);
           
            
            printf("\n Enter the time :  ");
            scanf("%d",  &time);
            
            printf("\n Enter number of times interest applied per time period: ");
            scanf("%d", &n);
            
            /*calculate total amount with compound interest */
             float A;
             A =  principal  * pow( (1 + rate / n), n*time);
             printf ("The total amount is:  %.2f  \n", A);
             
             /*calculate the compound interest */
             float CI;
             CI = A  - principal;
             printf ("The Compound interest = %.2f   \n", CI);
            return 0;
 }                        
            