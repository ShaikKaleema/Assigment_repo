#include<stdio.h>
void main(){
    int a[20],n,key,i;
    int flag=0;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the key to be searched:");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key){
            flag=1;
            break;
        }
        else{
            continue;
        }
    }
    if(flag)
        printf("Element found");
    else
        printf("Element not found");

}
