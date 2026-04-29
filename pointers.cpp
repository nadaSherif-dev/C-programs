#include<stdio.h>
void Double(int var){
	var  *=2;
}
int Triple(int *p){
	return (*p)*(*p)*(*p);
}
int change(int *n){
	static int z=5;
	z = z*3;
	*n += z;
	return *n;
}
int main(){
	int n=5, r=8, v=2;
	printf("Initial values: n=%d, r=%d, v=%d\n\n", n,r,v);
	Double (n);
	printf("After Double(n): n=%d(unchanged - pass by value)\n", n);
	r = Triple(&n);
	printf("After Triple(&n): r=%d, n=%d\n", r,n);
	v = change(&n);
	printf("After change(&n): v=%d, n=%d\n", v,n);
	Double(r);
	printf("After Double(r): r=%d(unchanged - pass by value)\n",r);
	r = Triple(&v);
	printf("After Triple(&v): r=%d, v=%d\n\n", r,v);
	printf("Final values: n=%d, r=%d, v=%d\n", n,r,v);
	// Demonstrating static behavior //
	printf("\n--- Demonstrating Static Behavior ---\n");
	change (&n);
	printf("After calling change again: n=%d\n", n);
	return 0;
}
