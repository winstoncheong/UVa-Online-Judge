// 11172 - Relational Operator

#include <stdio.h>

int main(){
	int N;
	long int a, b;

	scanf("%d", &N);
	while(N--){
		scanf("%ld %ld", &a, &b);
		if (a == b) printf("=\n");
		else if (a < b) printf("<\n");
		else printf(">\n");
	}
}