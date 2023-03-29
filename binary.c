#include<stdio.h>
int main(){
    int a[20],key,n,i,mid,first,last,flag=0;
    printf("Emter array size:");
    scanf("%d",&n);
    printf("Enter the array elements");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the key to be found:");
    scanf("%d",&key);
    first=0;
    last=n-1;
    while(first<=last){
        mid=(first+last)/2;
        if(a[mid]==key){
            flag=1;
            break;
        }
        else{
            if(a[mid]<key)
                first=mid+1;
            else
                last=mid-1;
        }
    }
    if(flag){
        printf("Element found");
    }
    else{
        printf("Element not found");
    }
    return 0;



}
