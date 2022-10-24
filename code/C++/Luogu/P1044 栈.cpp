#include <cstdio>
#include <algorithm>
#include <iostream>

using namespace std;

int catalan[25], n;
int main(){
	catalan[0] = catalan[1] = 1;
	scanf("%d", &n);
	for (int i = 2; i <= n; ++i){
		for (int k = 0; k < i; ++k){
			catalan[i] += catalan[k] * catalan[i-k-1];
		}
	}
	printf("%d", catalan[n]);
	return 0;
}
