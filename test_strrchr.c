#include "libft.h"
#include <stdio.h>
#define		STRING_1	"the cake is a lie !\0I'm hidden lol\r\n"
#define		STRING_4	"phrase differente pour le test"
#define		STRING_2	"there is no stars in the sky"
#define		STRING_3	"test basic !"

int main(void)
{
	char	str54[11] = "1234567890";
	char	*str55;
	char	*str56;

	str55 = strrchr(str54, '4');
	printf("Strchr return: %s\n", str55);
	str56 = ft_strrchr(str54, '4');
	printf("ft_strchr return: %s\n", str56);

	char	*src = STRING_1;
	char	*d1 = strrchr(src, '!');
	char	*d2 = ft_strrchr(src, '!');
	printf("%s\n", d1);
	printf("%s\n", d2);

	char	*src1 = STRING_1;
	char	*d3 = strrchr(src1, 'x');
	char	*d4 = ft_strrchr(src1, 'x');
	printf("%s\n", d3);
	printf("%s\n", d4);

	char	*src3 = "AA\0B";
	char	*d7 = strrchr(src3, 'B');
	char	*d8 = ft_strrchr(src3, 'B');
	printf("%s\n", d7);
	printf("%s\n", d8);

	char	*src4 = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	char	*d9 = strrchr(src4, '\0');
	char	*d10 = ft_strrchr(src4, '\0');
	printf("%s\n", d9);
	printf("%s\n", d10);

	char	*src5 = "\0";
	char	*d11 = strrchr(src5, 'a');
	char	*d12 = ft_strrchr(src5, 'a');
	printf("%s\n", d11);
	printf("%s\n", d12);

}