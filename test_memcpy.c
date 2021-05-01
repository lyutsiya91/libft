#include "libft.h"
#include <stdio.h>

int main(void)
{
	char	str11[15] = "1234567890";
	char	str12[15] = "0987654321";
	char	str13[15] = "1234567890";
	char	str14[15] = "0987654321";
	char	str15[15] = "1234567890";
	char	str16[15] = "";
	char	str17[15] = "1234567890";
	char	str18[15] = "";

	memcpy(str12, str11, 8);
	printf("Memcpy return: %s\n", str12);
	ft_memcpy(str14, str13, 8);
	printf("ft_memcpy return: %s\n", str14);
	if (strcmp(str12, str14) == 0)
	{
		printf("Result: %s\n", "OK");
	}
	else
	{
		printf("Result: %s\n", "FAIL");
	}
	memcpy(str16, str15, 8);
	printf("Memcpy return: %s\n", str16);
	ft_memcpy(str18, str17, 8);
	printf("ft_memcpy return: %s\n", str18);
	if (strcmp(str16, str18) == 0)
	{
		printf("Result: %s\n", "OK");
	}
	else
	{
		printf("Result: %s\n", "FAIL");
	}

	printf("%s\n", memcpy(NULL, NULL, 3));
	printf("%s", memcpy(str12, str11, 0));
	printf("%s", memcpy(NULL, str11, 3));
	printf("%s\n", memcpy(str11, NULL, 3));
}