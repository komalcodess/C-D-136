#include <stdio.h>
#include <string.h>


int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    char name[50];
    printf("Enter the name you want to find: ");
    scanf("%s",name);

    char arr[n][50];
    printf("Enter all the names in the array: ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%s",arr[i]);
        }
    }

    int found=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(strcpy(arr[i],name)==0)
            {
                found=1;
                break;
            }
        }
    }
      if(found=1)
        printf("The name you entered has been found.");
    else
        printf("The name you entered was not found.");

}
