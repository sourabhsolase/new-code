#include<stdio.h>
#include<stdlib.h>

int difference(int arr[],int iLength)
{
    int icnt=0,imax=arr[0],imin=arr[0];
    for(icnt=0;icnt<iLength;icnt++)
    {
       if(arr[icnt]>imax)
       {
         imax=arr[icnt];
        
       }
       else if(arr[icnt]<imin)
        {
            imin=arr[icnt];
        }
    }
          return imax-imin;
}

int main()
{
    int iSize=0,iret=0,i=0;
    int*p=NULL;
    printf("enter number of elements :\n");
    scanf("%d",&iSize);
    p=(int *)malloc(iSize*sizeof(int));
   
 printf("enter the elements:");
 for(i-0;i<iSize;i++)
 {
    scanf("%d",&p[i]);
 }

iret=difference(p,iSize);
printf("difference number is :%d",iret);
free(p);
    return 0;
}