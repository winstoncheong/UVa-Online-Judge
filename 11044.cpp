
// 11044 - Searching for Nessy
// Uses basic formula

#include <stdio.h>
#include <math.h>

int main(){
	int N, a, b;
	scanf("%d", &N);
	while(N--){
		scanf("%d %d", &a, &b);
		printf("%d\n", (int) (ceil((a - 2) / 3.0) * ceil((b - 2) / 3.0)));
	}
}
