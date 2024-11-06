#include<stdio.h>
#include<stdlib.h>

void bubble(int arr[],int n)
{
    for(int i = 0;i<n-1;i++)
    {
        for(int j = 0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        printf("\n");
    }

    printf("\n\nArray :");
    for(int i = 0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}

void selection(int arr[],int n)
{
    int minid;
    for(int i = 0;i<n-1;i++)
    {
        minid = i;
        {
            for(int j = i+1;j<n;j++)
            {
                if(arr[j]<arr[minid])
                {
                    minid = j;
                }
            }
            int temp = arr[minid];
            arr[minid] = arr[i];
            arr[i] = temp;
        }
    }
    printf("\n\nArray :");
    for(int i = 0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}

void insertion(int arr[],int n)
{
    for(int i = 1;i<n;i++)
    {
        int key = arr[i];
        int j = i-1;

        while (j >= 0 && arr[j]>key){
            arr[j+1] = arr[j];
            j = j-1;
    }
    arr[j+1] = key;
}
printf("\n\nArray :");
    for(int i = 0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}

int main()
{
    int ch;
    int n;
    printf("Enter array size :\n");
    scanf("%d",&n);

    int arr[n];

    printf("Enter n elements :\n");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

printf("\n1.Bubble\n2.Selection\n3.Insertion");
printf("\n\nEnter choice :\n");
scanf("%d",&ch);
switch(ch)
{
    case 1:bubble(arr,n);
    break;

    case 2:selection(arr,n);
    break;

    case 3:insertion(arr,n);
    break;

    default : printf("Invalid choice !! choose between 1,2 and 3 only !");
}

printf("\n\nCompleted\n\n");
return 0;

}
