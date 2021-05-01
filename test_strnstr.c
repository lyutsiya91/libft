#include "libft.h"
#include <stdio.h>

int main(void)
{
	char	str64[11] = "1234567890";
	char	str65[3] = "78";
	char	*str67;

	str67 = ft_strnstr(str64, str65, 8);
	printf("ft_strnstr return: %s\n", str67);

	char	*s1 = "see FF your FF return FF now FF";
	char	*s2 = "FF";
	size_t	max = strlen(s1);

	char	*i1 = strnstr(s1, s2, max);
	char	*i2 = ft_strnstr(s1, s2, max);
	printf("%s\n%s\n", i1, i2);

	char	*s3 = "FF";
	char	*s4 = "see F your F return F now F";
	size_t	max1 = strlen(s4);

	char	*i3 = strnstr(s3, s4, max1);
	char	*i4 = ft_strnstr(s3, s4, max1);
	printf("%s\n%s\n", i3, i4);

	char	*s5 = "MZIRIBMZIRIBMZE123";
	char	*s6 = "MZIRIBMZE";
	size_t	max2 = strlen(s6);

	char	*i5 = strnstr(s5, s6, max2);
	char	*i6 = ft_strnstr(s5, s6, max2);
	printf("%s\n%s\n", i5, i6);

	char *big = "abcdef";
	char *little = "abcdefghijklmnop";
	size_t	max3 = strlen(big);

	char 	*s7 = strnstr(big, little, max3);
	char 	*s8 = ft_strnstr(big, little, max3);
	printf("%s\n%s\n", s7, s8);

	char *	big1 = "123456789";
	char *	little1 = "9";
	size_t	max4 = 8;

	char 	*s9 = strnstr(big1, little1, max4);
	char 	*s10 = ft_strnstr(big1, little1, max4);
	printf("%s\n%s\n", s9, s10);

	char	*s11 = "FF";
	char	*s12 = "see FF your FF return FF now FF";

	char	*i7 = strnstr(s11, s12, 4);
	char	*i8 = ft_strnstr(s11, s12, 4);
	printf("%s\n%s\n", i7, i8);

	char	*s13 = "";
	char	*s14 = "oh no not the empty string !";
	size_t	max5 = strlen(s14);

	char	*i9 = strnstr(s13, s14, max5);
	char	*i10 = ft_strnstr(s13, s14, max5);
	printf("%s\n%s\n", i9, i10);

	char	*s15 = "oh no not the empty string !";
	char	*s16 = "";
	size_t	max6 = strlen(s15);

	char	*i11 = strnstr(s15, s16, max6);
	char	*i12 = ft_strnstr(s15, s16, max6);
	printf("%s\n%s\n", i11, i12);

	char	*s17 = "oh no not the empty string !";
	char	*s18 = "";
	size_t	max7 = 0;

	char	*i13 = strnstr(s17, s18, max7);
	char	*i14 = ft_strnstr(s17, s18, max7);
	printf("%s\n%s\n", i13, i14);

	char	*s19 = "AAAAAAAAAAAAA";
	size_t	max8 = strlen(s19);

	char	*i15 = strnstr(s19, s19, max8);
	char	*i16 = ft_strnstr(s19, s19, max8);
	printf("%s\n%s\n", i15, i16);

	char	*s20 = "A";

	char	*i17 = strnstr(s20, s20, 2);
	char	*i18 = ft_strnstr(s20, s20, 2);
	printf("%s\n%s\n", i17, i18);

	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	char	*i19 = strnstr(haystack, needle, -1);
	char	*i20 = ft_strnstr(haystack, needle, -1);
	printf("%s\n%s\n", i19, i20);

	ft_strnstr("fake", NULL, 3);
}