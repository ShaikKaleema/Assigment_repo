#include<stdio.h>
int binSearch(int a[],int key,int first,int last){
    int mid;
    if(first<=last){
        mid=(first+last)/2;
        if(a[mid]==key)
            return 1;
        else if(a[mid]>key)
            return binSearch(a,key,first,mid-1);
        else
            return binSearch(a,key,mid+1,last);


    }
    else{
        return 0;
    }

}
int main(){
    int a[100],size,key,i;
    int first,last,flag;
    printf("enter size ");
    scanf("%d",&size);
    printf("enter array elements ");
    for(i=0;i<=size-1;i++){
        scanf("%d",&a[i]);
    }
    printf("enter key ");
    scanf("%d",&key);
    first=0;
    last=size-1;
    flag=binSearch(a,key,first,last);
    if(flag)
        printf("Eement found");
    else
        printf("Element not found");


}
