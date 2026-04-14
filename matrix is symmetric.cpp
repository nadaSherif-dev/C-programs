#include<stdio.h>
int main(){
	int n, i, j, symmetric=1;
	printf("Enter n\n");
	scanf("%d",&n);
	int arr[n][n],transpose[n][n];
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			transpose[j][i]=arr[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(arr[i][j]!=transpose[i][j]){
				symmetric=0;
				break;
			}
		}
		if(symmetric==0)break;
	}
	if(symmetric) printf("symmetric");
	if(!symmetric) printf("not symmetric");
	else{
		printf("symmetric");
	}
	return 0;
}
