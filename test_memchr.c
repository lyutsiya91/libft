#include "libft.h"
#include <stdio.h>

int main(void)
{
	char	*str27;
	char	str28[11] = "abcdefghij";
	char	*str29;
	char	str30[11] = "abcdefghij";

	str27 = memchr(str28, 'e', 8);
	printf("Memchr return: %s\n", str27);
	str29 = ft_memchr(str30, 'e', 8);
	printf("ft_memchr return: %s\n", str29);
	if (strcmp(str27, str29) == 0)
	{
		printf("Result: %s\n", "OK");
	}
	else
	{
		printf("Result: %s\n", "FAIL");
	}

	char			*src = "/|\x12\xff\x09\x42\042\42|\\";
	int				size = 10;

	if (memchr(src, '\x42', size) == ft_memchr(src, '\x42', size))
		printf("Result: %s\n", "OK");

	char			*src1 = "/|\x12\xff\x09\x42\2002\42|\\";
	int				size1 = 10;

	if (memchr(src1, '\200', size1) == ft_memchr(src1, '\200', size1))
		printf("Result: %s\n", "OK");

	char			*src2 = "/|\x12\xff\x09\x42\042\42|\\";
	int				size2 = 2;

	if (memchr(src2, '\x42', size2) == ft_memchr(src2, '\x42', size2))
		printf("Result: %s\n", "OK");

	char			*src3 = "/|\x12\xff\x09\x42\042\42|\\";
	int				size3 = 10;

	if (memchr(src3, '\xde', size3) == ft_memchr(src3, '\xde', size3))
		printf("Result: %s\n", "OK");

	char	src4[] = "iawhf\200wf208awfh\xakufi21f4\x42w7fwa1f";

	if (memchr(src4, '\x42', sizeof(src4)) == ft_memchr(src4, '\x42', sizeof(src4)))
		printf("Result: %s\n", "OK");
}