#include<stdio.h>

int main ()
{
    int i,j,key;
    int arr[5]={12,11,13,5,6};
    int m = sizeof(arr) / sizeof(arr[0]);
    for(i=1;i<m;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    for(i=0;i<m;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}