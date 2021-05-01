#include "libft.h"
#include <stdio.h>

int main(void)
{
	char	str70[11] = "1234567890";
	char	str71[11] = "123456ab90";

	int intg3 = strncmp(str70, str71, 10);
	printf("Strncmp return: %d\n", intg3);
	int intg4 = ft_strncmp(str70, str71, 10);
	printf("ft_strncmp return: %d\n", intg4);

	intg3 = strncmp(str70, str71, 3);
	printf("Strncmp return: %d\n", intg3);
	intg4 = ft_strncmp(str71, str71, 3);
	printf("ft_strncmp return: %d\n", intg4);

	char *s1 = "\252";
	char *s2 = "\0";
	intg3 = strncmp(s1, s2, 3);
	printf("Strncmp return: %d\n", intg3);
	intg4 = ft_strncmp(s1, s2, 3);
	printf("ft_strncmp return: %d\n", intg4);
}