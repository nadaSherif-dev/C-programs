#include<stdio.h>
int main(){
	int n, i, start, end, max;
	printf("Enter num of elements\n");
	scanf("%d", &n);
	int arr[n];
	printf("Enter array elements\n");
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	printf("Enter start & end of subarray\n");
	scanf("%d %d", &start, &end);
	max=arr[start];
	for(i=start+1; i<end; i++){
		if(arr[i] > max)
		max=arr[i];
		}
		printf("max of subarray is %d\n",max);
		return 0;
	}

