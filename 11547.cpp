//11547 - Automatic Answer

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		printf("%d\n", abs(((n * 567 / 9 + 7492) * 235 / 47 - 498) / 10) % 10);
	}
	return 0;
}