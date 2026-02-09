#include <stdio.h>

int main()
{
int n,m;
printf("Enter the number of rows: ");
scanf("%d",&n);
printf("Enter the number of columns: ");
scanf("%d",&m);

int arr[m][n];
printf("Enter the elements: ");
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}
int flag=0;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
        if(i>j && arr[i][j]==0)
        {
            flag=1;
            break;
        }
}

if(flag==0)
    printf("The matrix is not an upper triangular matrix: ");
else
    printf("The matrix is an upper triangular matrix: ");


}
