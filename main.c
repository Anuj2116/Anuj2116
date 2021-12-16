/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
main ()
{
    float num1,num2,num3;
    printf("Enter the three numbers:");
    scanf("%f%f%f",&num1,&num2,&num3);
    /* echo the data */
    printf ("\nGiven numbers are %8.2f%8.2f%8.2f\n",num1,num2,num3);
    if (num1 > num2)
    {
        if(num1 > num3)
        printf ("\nBiggest number is %8.2f\n",num1);
        else
        printf ("\nBiggest number is %8.2f\n",num3);
    }
    else
    {
        if (num2 > num3)
          printf ("\nBiggest number is %8.2f\n",num2);
          else
          printf ("\nBiggest number is %8.2f\n",num3);
    }
}
