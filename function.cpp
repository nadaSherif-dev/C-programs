#include<stdio.h>
int x,y;
void test(int x, int y);
int test1(int a, int b);
int main(){
	int a,b,z;
	x=a=10; y=b=20;
	test(a,b);
	printf("%d %d",x,y);
	printf("%d %d",a,b);
	return 0;
}
void test(int x, int y){
	int z;
	z=x++ - y--;
	x+=z;
	y-=z;
	printf("%d %d",x,y);
}
int test1(int a, int b){
	x=a++;
	y=b++;
	printf("%d %d",x,y);
	printf("%d %d",a,b);
	return(a+b);
}
