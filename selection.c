#include<stdio.h>
#include<limits.h>
    int main(){
        int n;
        printf("enter the size of an array:");
        scanf("%d",&n);

        int arr[n];
        for (int i=0;i<n;i++){
        printf("enter %d element of array:",i+1);
        scanf("%d",&arr[i]);
        }
        printf("the unsorted array:\n");
        for (int i=0;i<n;i++){
            printf("%d",arr[i]);
        }
        
        for(int i=0;i<n-1;i++){
            int min=INT_MAX;
            int minindex=-1;
            for(int j=i;j<=n-1;j++){
            if(min>arr[j]){
                min=arr[j];
                minindex=j;   // how to solve this in j loop
            }
        
            }
            int temp=arr[i];
            arr[i]=arr[minindex];
            arr[minindex]=temp;
            
        }
        printf("\n");
        printf("the sorted array:\n");
        for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        }
        return 0;
    }