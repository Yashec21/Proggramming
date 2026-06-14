#include<stdio.h>
#include <stdlib.h>

int Frequency (int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iFrequency = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt])==iNo)
        {
            iFrequency++;
        }
    }

    return iFrequency;
}

int main()
{
    int iSize = 0, iCnt = 0,iRet = 0, iValue = 0;
    
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    printf("Enter Frequency that you have\n");
    scanf("%d",&iValue);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element :%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p,iSize,iValue);

    printf("Frequency is :\n%d",iRet);

    free(p);

    return 0;
    
}