#include<bits/stdc++.h>
using namespace std;
#define MAX 2000009

int a[MAX];

void merge(int *a, int p, int q, int r, int& c){
	int L[q-p+1],R[r-q];
	for(int i=p;i<=q;i++)	L[i-p]=a[i];
	for(int i=q+1;i<=r;i++)	R[i-q-1]=a[i];
	
	int i=0,j=0,k=p;
	while(i<=(q-p) && j<=(r-q-1)){
		if(L[i]<=R[j]){
			a[k]=L[i];
			k++,i++;
		}else{
			c+=q-p-i+1;
			a[k]=R[j];
			j++,k++;
		}
	}
	for(;i<=q-p;i++)	a[k++]=L[i];
	for(;j<=r-q-1;j++)	a[k++]=R[j];
	return;
}

void mergeSort(int *a, int p, int r, int& c){
	if(p<r){
		int q=(p+r)/2;
		mergeSort(a,p,q,c);
		mergeSort(a,q+1,r,c);
		merge(a,p,q,r,c);
	}
	return;
}

int main(){
	int n,x;
	scanf("%d",&n);
	for(int i=0;i<n;i++)		scanf("%d",&a[i]);
	
	int c=0;
	mergeSort(a,0,n-1,c);
	
	for(int i=0;i<n;i++)    printf("%d ",a[i]);
	printf("\n%d",c);
	return 0;
}
