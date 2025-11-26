//code to demonstrate the need of iteration

#include <stdio.h>

int main()
{
    int iNo = 0;
    int iDigit = 0;

    printf("enter number : %d\n",iNo);
    printf("original value of iNo is : %d\n",iNo);
    printf("----------------------\n");
    while(iNo != 0)
    {
       printf("----------------------\n");
       iDigit = iNo % 10;
       printf("iDigit is : %d\n",iDigit);
       iNo = iNo/10;
       printf("iNo is : %d\n",iNo);
    }

   
    printf("----------------------\n");
    return 0;
}