#include<stdio.h>
#define monthes 12
void enterData(float sales[][monthes], int branches);
float totalSales(float sales[][monthes], int branches);
void branchPercentage(float sales[][monthes], int branches);
void peakMonth(float sales[][monthes], int branches);
void sortBranchesByMonth(float sales[][monthes], int branches);
void sortMonthesByBranch(float sales[][monthes], int branches);
int main(){
	int branches;
	int choice;
	printf("enter number of branches:");
	scanf("%d",&branches);
	float sales[branches][monthes];
	do{
		printf("\n MENU \n");
		printf("1. enter salesData\n");
		printf("2. calculate totalSales\n");
		printf("3. calculate branchPercentage\n");
		printf("4. find peakMonth\n");
		printf("5. sortBranchesByMonth\n");
		printf("6. sortMonthesByBranch\n");
		printf("7. Exist\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice){
	case 1:
	enterData(sales, branches);
	break;
	case 2:
	printf("totalSales = %.2f\n, totalSales(sales, branches)");
	break;
	case 3:
	branchPercentage(sales, branches);
	break;
	case 4:
	peakMonth(sales, branches);
	break;
	case 5:
	sortBranchesByMonth(sales, branches);
	break;
	case 6:
	sortMonthesByBranch(sales, branches);
	break;
	case 7:
	printf("program Ended.\n");
	break;
	printf("Invalid choice!\n");
}
}
while(choice != 7);
return 0;
}
void enterData(float sales[][monthes], int branches){
	int i, j;
	for(i=0; i<branches; i++){
		printf("\nBranch %d\n",i);
		for(j=0; j<monthes; j++){
			printf("enter sales for month %d:",j+1);
			scanf("%f",&sales[i][j]);
		}
	}
}
float totalSales(float sales[][monthes], int branches){
	int i, j;
	float total=0;
	for(i=0;i<branches;i++){
		for(j=0;j<monthes;j++){
			total+=sales[i][j];
		}
	}
	return total;
}
void branchPercentage(float sales[][monthes], int branches){
	int i, j;
	float total = totalSales(sales, branches);
	float branchTotal;
	float percentage;
	for(i=0;i<branches;i++){
		branchTotal=0;
		for(j=0;j<monthes;j++){
			branchTotal += sales[i][j]; 
		}
		percentage = (branchTotal/total)*100;
		printf("Brach %d percentage = %.2f%%\n",i,percentage);
	}
}
void peakMonth(float sales[][monthes], int branches){
	int i, j;
	float monthTotal[monthes] = {0};
	int peak=0;
	for(j=0;j<monthes;j++){
		for(i=0;i<branches;i++){
			monthTotal[j] += sales[i][j];
		}
	}
	for(j=1;j<monthes;j++){
		if(monthTotal[j] > monthTotal[peak]){
			peak = j;
		}
	}
	printf("peak sales month = %d\n", peak+1);
}
void sortBranchesByMonth(float sales[][monthes], int branches){
	int month;
	int i,j,temp;
	printf("enter month number (1-12):");
	scanf("%d",&month);
	--month;
	int branchIndex[branches];
	for(i=0;i<branches;i++){
		branchIndex[i]=i;
	}
	for(i=0;i<branches-1;i++){
		for(j=0;j<branches-1-i;j++){
			if(sales[branchIndex[j]][month] > sales[branchIndex[j+1]][month]){
				temp = branchIndex[j];
				branchIndex[j] = branchIndex[j+1];
				branchIndex[j+1] = temp;
			}
		}
	}
	printf("Branch sorted by sales:\n");
	for(i=0;i<branches;i++){
		printf("Branch %d\n", branchIndex[i]);
	}
}
void sortMonthesByBranch(float sales[][monthes], int branches){
	int branch;
	int i,j,temp;
	printf("enter branch number:");
	scanf("%d",&branch);
	int monthIndex[monthes];
	for(i=0;i<monthes;i++){
		monthIndex[i]=i;
	}
	for(i=0;i<monthes-1;i++){
		for(j=0;j<monthes-1-i;j++){
			if(sales[branch][monthIndex[j]]>sales[branch][monthIndex[j+1]]){
				temp = monthIndex[j];
				monthIndex[j] = monthIndex[j+1];
				monthIndex[j+1] = temp;
			}
		}
	}
	printf("monthes sorted by sales:\n");
	for(i=0;i<monthes;i++){
		printf("monthes %d\n", monthIndex[i]+1);
	}
}
