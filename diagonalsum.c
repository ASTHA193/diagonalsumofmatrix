#include<stdio.h>
void main()
{
    int arr[3][3],i,j,k=0;
    printf("\n enter the elements of array");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&arr[i][j]);
    }

    printf("\n the elements of array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }


       for(i=0;i<3;i++)
        {
        for(j=0;j<3;j++)
          if(i==j)
           {
              k+=arr[i][j];
           }


        }
        printf("\n the sum of diagonal elements are%d" ,k);

}



