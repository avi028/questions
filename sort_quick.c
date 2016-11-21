#include<stdio.h>

int Partition(int a[] , int low ,int high)
{
    int left , right , n ;
    left = low+1;
    right = high;
    int pivot = a[low];
                printf("error %d\n " , pivot);
    while(left <=right)
    {

        while(a[left] <= pivot )
            left++;
        while(a[right] > pivot )
            right--;
        if(left < right)
        {
            a[left]=a[left]+a[right];
            a[right]=a[left]-a[right];
            a[left]=a[left]-a[right];
        }
    }
    a[low]=a[right];
    a[right]=pivot;
    return right;
}




void QuickSort(int a[] ,int low,int high)
{

    int left , right ;
    left = low;
    right = high;
    int pivot,i;
    int n=(sizeof(a)/sizeof(a[0]));

    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    printf("\n");

    if(left < right )
    {
        pivot = Partition(a,left, right);

        QuickSort(a,left ,pivot-1);
        QuickSort(a,pivot+1,right);
    }
}




int main()
{
    int a[]={7,5,3,2,9,11,23,6,10};
    int i;
    int n=(sizeof(a)/sizeof(a[0]));

    QuickSort(a,0,n-1);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
