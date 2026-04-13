#include<stdio.h>
int main(){
	int n, arr[100], value, pos;
	printf("Enter size of array\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter new value and new possition\n");
	scanf("%d %d",&value,&pos);
	for(int i=n-1; i>=pos; i--){
		arr[i+1] = arr[i];
	}
	arr[pos] = value;
	n++;
	for(int i=0; i<n; i++)
	printf("%d", arr[i]);
	return 0;
}
