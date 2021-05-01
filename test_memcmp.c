#include "libft.h"
#include <stdio.h>

int main(void)
{
	char	str31[11] = "abcdefghij";
	char	str32[11] = "abcdefghij";
	char	str33[11] = "ab45efghij";
	char	str34[11] = "abcdefghij";
	char	str35[20] = "string with\200inside";
	char	str36[20] = "string with\0inside";

	int		intg;
	int		intg2;

	intg = memcmp(str31, str32, 8);
	printf("Memcmp return: %d\n", intg);
	intg2 = ft_memcmp(str31, str32, 8);
	printf("ft_memcmp return: %d\n", intg2);
	
	intg = memcmp(str33, str34, 8);
	printf("Memcmp return: %d\n", intg);
	intg2 = ft_memcmp(str33, str34, 8);
	printf("ft_memcmp return: %d\n", intg2);

	intg = memcmp(str33, str34, 0);
	printf("Memcmp return: %d\n", intg);
	intg2 = ft_memcmp(str33, str34, 0);
	printf("ft_memcmp return: %d\n", intg2);

	intg = memcmp(str35, str36, 20);
	printf("Memcmp return: %d\n", intg);
	intg2 = ft_memcmp(str35, str36, 20);
	printf("ft_memcmp return: %d\n", intg2);

	intg2 = ft_memcmp(NULL, str34, 8);
	printf("ft_memcmp return: %d\n", intg2);
	intg = memcmp(NULL, str34, 8);
	printf("Memcmp return: %d\n", intg);
}