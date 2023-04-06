#include<stdio.h>
#include<conio.h>
void main()
{
     clrscr();
    int mat1[3][3],mat2[3][3], addmat[3][3],i,j;
    printf("Enter the value of matrix");
         for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                {
                          scanf("%d",&mat1[i][j]);
                }
         }
   printf("Matrix 1 is \n");
                for(i=0;i<3;i++)
                {
                       for(j=0;j<3;j++)
                       {
                                     printf("%d ",mat1[i][j]);
                        }
                          printf("\n");
                  }
       printf("Enter the value of matrix 2\n");
                        for(i=0;i<3;i++)
                       {
                              for(j=0;j<3;j++)
                              {
                                    scanf("%d",&mat2[i][j]);
                               }
                       }
        printf("Matrix 2 is \n");
                       for(i=0;i<3;i++)
                       {
                              for(j=0;j<3;j++)
                               {
                                         printf("%d ",mat2[i][j]);
                                }
                                     printf("\n");
                       }
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
            addmat[i][j]=mat1[i][j]+mat2[i][j];
    }
}
printf("Matrix addition is \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",addmat[i][j]);
}
printf("\n");
}


printf("Transpose of addition is \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",addmat[j][i]);
}
printf("\n");
}


 getch();
}
