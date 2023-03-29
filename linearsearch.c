#include<stdio.h>
int linear(int a[],int key,int low,int high ){
    while(low<=high){
        if(a[low]==key){
            return 1;
        }
        else{
            linear(a,key,low+1,high);
        }
    }
    return 0;

}
void main(){
    int a[20],n,key,i;
    int flag;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the key to be searched:");
    scanf("%d",&key);
    flag=linear(a,key,0,n-1);
    if(flag){
        printf("Element found");
    }
    else{
        printf("Element not found");
    }

}
