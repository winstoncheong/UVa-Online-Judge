//11727 - Cost Cutting

#include <stdio.h>

int main()
{
	int T, a, b ,c;
	scanf("%d", &T);
	for(int i = 1; i <= T; i ++){
		scanf("%d %d %d", &a, &b, &c);
		printf("Case %d: ", i);
		if(a < b && b < c)
			printf("%d\n", b);
		else if (a < c && c < b)
				printf("%d\n", c);
		else if (b < c && c < a)
				printf("%d\n", c);
		else if (b < a && a < c)
				printf("%d\n", a);
		else if (c < a && a < b)
				printf("%d\n", a);
		else if (c < b && b < a)
				printf("%d\n", b);
		
	}
}