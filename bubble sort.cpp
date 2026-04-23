#include<stdio.h>
void bubbleSort(char[], int size){
	int n,i,j,temp,arr[i];
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(arr[j+1]<arr[j]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int main(){
	int n,i;
	scanf("%d",&n);
	int grades[n];
	for(i=0;i<n;i++){
		scanf("%d",&grades);
	}
	printf("%d",n);
	return 0;
}


