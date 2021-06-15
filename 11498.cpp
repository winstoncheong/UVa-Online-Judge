//11498 - Division of Nlogonia

// Super easy.

#include <stdio.h>

int main(){
	int K, N, M, X, Y;

	while (scanf("%d", &K) && K != 0){ // 0 acts as sentinal
		scanf("%d %d", &N, &M); // division point
		while(K--){
			scanf("%d %d", &X, &Y);
			if(X == N || Y == M)
				printf("divisa\n");
			else{
				printf(Y > M ? "N" : "S");
				printf(X > N ? "E" : "O");
				printf("\n");
			} 
				
		}
	}
}