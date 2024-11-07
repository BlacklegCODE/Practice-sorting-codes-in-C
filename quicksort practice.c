#include<stdio.h>
void printer(int arr[], int n)
{
    for(int i = 0;i<n ;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}
int partition(int arr[],int l, int h)
{
    int pivot = arr[l];
    int i = l+1;
    int j = h;
    do{
    while(arr[i]<=pivot && i <=h)
    {
        i++;
    }
    while(arr[j]>pivot)
    {
        j--;
    }

    if(i<j)
    {
       int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    }while(i<j);

    int temp = arr[l];
    arr[l]=arr[j];
    arr[j]=temp;

    return j;
}

void quicksort(int arr[],int l, int h)
{
    int partid;
    if(l<h){
    partid = partition(arr,l,h);
    quicksort(arr,l,partid-1);
    quicksort(arr,partid+1,h);
    }
}
int main()
{
    int n;
    printf("Enter size :\n");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements :\n",n);
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printer(arr,n);
    quicksort(arr,0,n-1);
    printer(arr,n);

    return 0;
}
