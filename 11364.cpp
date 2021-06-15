
// 11364 - Parking
// The idea is he goes to the furthest points and back, 
// which is an overall distance of 2 * (r - l)

#include <stdio.h>

int main(){
	int T, N, i;

	scanf("%d", &T);
	while(T--){
		scanf("%d", &N);
		int l = 100, h = -1;
		while(N--){
			scanf("%d", &i);
			if(i < l) l = i;
			if(i > h) h = i;
		}
		printf("%d\n", 2 * (h - l));
	}
}
