	//fibonacci
	#include <stdio.h>
	#include <math.h>
	int check(int n){
		int fn1=0, fn2=1;
		for(int i = 1; i <= 92; i++){
			long long fn = fn1 + fn2;
			if(fn == n) return 1;
			fn1 = fn2;
			fn2 = fn;
		}
		return 0; // neu trong vong for khong co dap an thi in ra 0;
		
	}
