/*
4.	Receive an array of n integers, n is even. 
Sort the first half in increasing order and second half decreasing order
Ex:
 ____________________________________
| Input:  8 7 9 2 1 5 2 0            |
| Output: 2 7 8 9 5 2 1 0            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int n = argc;
	int test_array[n],i;
	for(i=0; i<n;i++){
		test_array[i] = atoi(argv[i+1]);
	}
	//Your codes here
	int x[n/2], y[n/2];

	for(int i = 0; i < n; i++){
		if(i <= n/2 -1) x[i] = test_array[i];
		else y[i - n/2] = test_array[i];
	}

	for(int i = 0; i < n/2; i++){
		for(int j = i; j < n/2; j++){
			if(x[i] > x[j]){
				int t = x[i];
				x[i] = x[j];
				x[j] = t;
			}
		}
	}
	for(int i = 0; i < n/2; i++){
		for(int j = i; j < n/2; j++){
			if(y[i] < y[j]){
				int t = y[i];
				y[i] = y[j];
				y[j] = t;
			}
		}
	}


	for(int i = 0; i < n; i++){
		if(i <= n/2 - 1) printf("%d ", x[i]);
		else printf("%d ", y[i - n/2]);
	}

	return 0;
}
