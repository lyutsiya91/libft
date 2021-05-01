#include "libft.h"
#include <stdio.h>

int main(void)
{
	int size = 8539;

	void * d1 = ft_calloc(size, sizeof(int));
	void * d2 = calloc(size, sizeof(int));
	printf("%d\n", memcmp(d1, d2, size * sizeof(int)));
	free(d1);
	free(d2);

	int number = 0;
	void * c1 = ft_calloc(number, sizeof(int));
	void * c2 = calloc(number, sizeof(int));
	printf("%d\n", memcmp(c1, c2, number * sizeof(int)));
	free(c1);
	free(c2);
}