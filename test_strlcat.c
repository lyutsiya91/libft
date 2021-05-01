#include "libft.h"
#include <stdio.h>
#define		STRING_1	"the cake is a lie !\0I'm hidden lol\r\n"
#define		STRING_4	"phrase differente pour le test"
#define		STRING_2	"there is no stars in the sky"
#define		STRING_3	"test basic !"

int main(void)
{
	char	str51[6] = "abcd";
	char	str52[11] = "12345";
	char	str53[11] = "12345";

	strlcat(str52, str51, 11);
	printf("Strlcat return: %s\n", str52);
	ft_strlcat(str53, str51, 11);
	printf("ft_strlcat return: %s\n", str53);

	char	*str = STRING_1;
	char	buff1[100] = STRING_2;
	char	buff2[100] = STRING_2;
	size_t	max = strlen(STRING_1) + 4;

	size_t x = strlcat(buff1, str, max);
	size_t y = ft_strlcat(buff2, str, max);
	printf("%s %d\n", buff1, (int)x);
	printf("%s %d\n", buff2, (int)y);

	char	s1[4] = "";
	char	s2[4] = "";
	size_t r1 = strlcat(s1, "thx to ntoniolo for this test !", 4);
	size_t r2 = ft_strlcat(s2, "thx to ntoniolo for this test !", 4);
	printf("%s %d\n", s1, (int)r1);
	printf("%s %d\n", s2, (int)r2);

	size_t	max1 = strlen(STRING_1) + strlen(STRING_2);

	size_t x1 =	strlcat(buff1, str, max1);
	size_t y1 =	ft_strlcat(buff2, str, max1);
	printf("%s %d\n", buff1, (int)x1);
	printf("%s %d\n", buff2, (int)y1);
}

