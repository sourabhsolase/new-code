#include<stdio.h>
void rangedispalyeven(int istart,int iend)
{
    int icnt=0;
     if(iend<istart)
        {
            printf("range invalid ",icnt);
        }
        else
        {
           for(icnt=istart;icnt<=iend;icnt++)
             {
                if((icnt%2)==0)
                {
                printf("%d\t",icnt);
                }
               }
        }
        
}



int main()
{
    int ivalue1=0,ivalue2=0;
    printf("enter start point :");
    scanf("%d",&ivalue1);
    printf("enter end point :");
    scanf("%d",&ivalue2);

    rangedispalyeven(ivalue1,ivalue2);
    return 0;

}