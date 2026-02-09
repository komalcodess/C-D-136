#include <stdio.h>
#include <string.h>
int main(){
int m,i,j;
printf("Enter the number of rows or columns: ");
scanf("%d",&m);

int arr[m][m];
printf("Enter all the elemets: ");
for(i=0;i<m;i++)
{
    for(j=0;j<m;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}

int sum=0;

for(i=0;i<m;i++)
{
    for(j=0;j<m;j++)
    {
        if(i==0 || i==m-1 || j==0 || j==m-1)
        {
            sum+=arr[i][j];
        }
    }
}


printf("The sum of all the elemets of the matrix is: %d",sum);


}
