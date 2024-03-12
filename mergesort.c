#include<stdio.h>
void merge(int arr[],int l,int mid,int r ){
    int an=mid-l+1;
    int bn=r-(mid+1)+1;
    int a[an]; // created one array 
    int b[bn]; // created another array
    
    for(int i=0;i<an;i++){
        a[i]=arr[i+l];   // stored element of first divide array 
    }
    for(int j=0;j<bn;j++){
        b[j]=arr[mid+1+j]; // stored element of second divide array
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<an && j<bn){
        if(a[i]<b[j]){
            arr[k++]=a[i++];
        }
        else 
            arr[k++]=b[j++];
    }
    while(i<an){
        arr[k++]=a[i++];
    }
     while(j<bn){
        
        arr[k++]=b[j++];
    }
    return;


}
void mergesort(int arr[],int l,int r){
    if(l>=r)
    return;
    {
    int mid=(l+r)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,r);
    merge(arr,l,mid,r);

    return;
    }
}
int main(){
    int arr[]={8,5,4,7,6};
    int size=sizeof(arr)/sizeof((arr[0]));
    printf("The size of the array:%d\n",size);
    mergesort(arr,0,size-1);
    printf("The sorted array:");
    for(int i=0;i<size-1;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}