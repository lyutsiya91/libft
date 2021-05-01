#include "libft.h"
#include <stdio.h>

int main(void)
{
	char	str[8] = "abcdefg";
	char	str2[8] = "abcdefg";
	char	str3[8] = "zyxwvut";
	char	str4[8] = "zyxwvut";
	char	str5[8] = "1234567";
	char	str6[8] = "1234567";

	memset(str, 97, 7);
	printf("Memset return: %s\n", str);
	ft_memset(str2, 97, 7);
	printf("ft_memset return: %s\n", str2);
	
	memset(str3, 126, 3);
	printf("Memset return: %s\n", str3);
	ft_memset(str4, 126, 3);
	printf("ft_memset return: %s\n", str4);
	
	memset(str5, 16, 0);
	printf("Memset return: %s\n", str5);
	ft_memset(str6, 16, 0);
	printf("ft_memset return: %s\n", str6);
}