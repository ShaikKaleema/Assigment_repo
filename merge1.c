#include<stdio.h>
void sort(int a[],int l,int m,int r){
    for(int i=0;i<4;i++)
	  printf("%d\t",a[i]);
	int n1,n2;
	n1=m-l+1;
	n2=r-m;
	int L[n1],R[n2];
	int i,j,k;
	for(i=0;i<n1;i++)
	  L[i]=a[l+i];
	for(i=0;i<n2;i++)
	  R[i]=a[m+1+i];
	i=0;j=0;k=l;
	while(i<n1 && j<n2){
		if(L[i]>R[j]){
			a[k]=R[j];
			j++;
		}
		else{
			a[k]=L[i];
			i++;
		}
		k++;
	}
	while(i<n1){
		a[k]=L[i];
		i++;
		k++;
	}
	while(j<n2){
		a[k]=R[j];
		j++;
		k++;
	}
}
void merge(int a[],int l,int r){
	if(l<r){
		int m=l+((r-l)/2);
		merge(a,l,m);
		merge(a,m+1,r);
		sort(a,l,m,r);
	}
}
int main(){
	int a[10];
	for(int i=0;i<4;i++)
	  scanf("%d",&a[i]);
	merge(a,0,3);
	for(int i=0;i<4;i++)
	  printf("%d\t",a[i]);
	return 0;
}
