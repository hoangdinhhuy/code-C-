	//fibonacci
	#include <stdio.h>
	#include <math.h>
	// check n co phai fibo hay kh
	int check(int n){
		int fn1=0, fn2=1;
		for(int i = 2; i <= 92; i++){
			long long fn = fn1 + fn2;
			if(fn == n) return 1;
			fn1 = fn2;
			fn2 = fn;
		}
		return 0; // neu trong vong for khong co dap an thi in ra 0;	
	}
	
//in ra fibo dau tien den n-1 : 0 => n-1
void inFibo (int n){
	if(n == 1) printf("0");
	else if (n == 2) printf("0 1");
	else{
		printf("0 1 ");
		long long  fn1 = 0, fn2 = 1;
		for(int i = 2; i < n; i++){
			long long  fn = fn1 + fn2;
			printf("%lld ",fn);
			fn1 = fn2;
			fn2 = fn;
		}
	}
}

//in ra so fibo thu n;
long long innFibo(int n){
if(n == 1 || n == 2) return n;
long long fn1 = 0, fn2 = 1, fn;
for(int i = 2; i < n; i++){
	fn = fn1 + fn2;
	fn1 = fn2;
	fn2 = fn;
}
return fn;
}	
	int main(){
		int n;
		scanf("%d",&n);
		printf("%d\n", check(n));
		inFibo(n);// vi ham void xuat san nen kh can printf
		printf("\n%lld", innFibo(n));
	}
