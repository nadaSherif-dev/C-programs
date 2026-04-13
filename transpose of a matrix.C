#include<stdio.h>
int main(){
	int r, c, i, j;
	printf("Enter rows,&cols\n");
	scanf("%d %d", &r, &c);
	int arr[r][c], transpose[c][r];
	for(i=0; i<r; i++){
			for(j=0; j<c; j++){
				scanf("%d", &arr[i][j]);
			}
	}
    for(i=0; i<r; i++){
    	for(j=0; j<c; j++){
    		transpose[j][i] = arr[i][j];
		}
	}
	printf("transpose of the array\n");
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("%d", transpose[i][j]);
		}
		printf("\n");
	}
	return 0;
}
