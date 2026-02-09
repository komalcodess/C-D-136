#include <stdio.h>

int main()
{
int n,m;
printf("Enter the number of rows: ");
scanf("%d",&n);
printf("Enter the number of columns: ");
scanf("%d",&m);

int arr[n][m];

printf("Enter the elements of first matrix: ");
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}

int brr[n][m];
printf("Enter the elements of second matrix: ");
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        scanf("%d",&brr[i][j]);
    }
}

for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        arr[i][j]=arr[i][j]-brr[i][j];
    }
}

printf("The resultant matrix is: ");
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        printf("%d ",arr[i][j]);
    }
}
}



