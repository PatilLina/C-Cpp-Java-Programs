#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr [], int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
}
int main()
{
    int iLenghth = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;
    
    printf("Enter number of Elements :" );
    sacnf("%d",&iLenghth);

    ptr = (int *)malloc(iLenghth * sizeof(int));
    if(NULL == ptr)       // Industrial way of coding
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements :\n");
    for(iCnt = 0; iCnt < iLenghth; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);

    }
    iRet = Summation(ptr, iLenghth);
    printf("Addition is :%d\n", iRet);

    free(ptr);
    return 0;
}