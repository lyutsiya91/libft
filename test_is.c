#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf("%d\n", ft_isalnum('5'));
	printf("%d\n\n", isalnum('5'));

	printf("%d\n", ft_isalnum('a'));
	printf("%d\n\n", isalnum('a'));

	printf("%d\n", ft_isalnum('%'));
	printf("%d\n\n", isalnum('%'));

	printf("%d\n", ft_isalpha('5'));
	printf("%d\n\n", isalpha('5'));

	printf("%d\n", ft_isalpha('a'));
	printf("%d\n\n", isalpha('a'));

	printf("%d\n", ft_isdigit('5'));
	printf("%d\n\n", isdigit('5'));

	printf("%d\n", ft_isdigit('a'));
	printf("%d\n\n", isdigit('a'));
}