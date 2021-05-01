#include "libft.h"
#include <stdio.h>

int main(void)
{
	char	str23[11] = "1234567890";
	char	str24[11] = "1234567890";
	char	str25[11] = "1234567890";
	char	str26[11] = "1234567890";

	memmove(&str23[3], &str23[2], 3);
	printf("Memmove return: %s\n", str23);
	ft_memmove(&str24[3], &str24[2], 3);
	printf("ft_memmove return: %s\n", str24);
	if (strcmp(str23, str24) == 0)
	{
		printf("Result: %s\n", "OK");
	}
	else
	{
		printf("Result: %s\n", "FAIL");
	}
	printf("Initial: %s\n", str25);
	memmove(&str25[2], &str25[3], 3);
	printf("Memmove return: %s\n", str25);
	ft_memmove(&str26[2], &str26[3], 3);
	printf("ft_memmove return: %s\n", str26);
	if (strcmp(str25, str26) == 0)
	{
		printf("Result: %s\n", "OK");
	}
	else
	{
		printf("Result: %s\n", "FAIL");
	}
}