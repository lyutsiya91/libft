#include "libft.h"
#include <stdio.h>

int main(void)
{
	char	src[] = "test basic du memccpy !";
	char	buff1[22];
	char	buff2[22];

	memccpy(buff1, src, 'm', 6);
	ft_memccpy(buff2, src, 'm', 6);
	if (!memcmp(buff1, buff2, 6))
		printf("Success\n");
	else
		printf("Fail\n");

	char	buff3[] = "abcdefghijklmnopqrstuvwxyz";
	char	buff4[] = "abcdefghijklmnopqrstuvwxyz";
	char	*src1 = "string with\200inside !";

	memccpy(buff3, src1, '\200', 21);
	ft_memccpy(buff4, src1, '\200', 21);

	if (!memcmp(buff3, buff4, 21))
		printf("Success\n");
	else
		printf("Fail\n");

	char	buff5[] = "abcdefghijklmnopqrstuvwxyz";
	char	buff6[] = "abcdefghijklmnopqrstuvwxyz";
	char	*src2 = "string with\200inside !";

	memccpy(buff5, src2, 0600, 21);
	ft_memccpy(buff6, src2, 0600, 21);

	if (!memcmp(buff5, buff6, 21))
		printf("Success\n");
	else
		printf("Fail\n");

	char	src3[] = "test basic du memccpy !";
	char	buff7[22];

	memset(buff7, 0, sizeof(buff7));

	char	*r1 = memccpy(buff7, src3, 'm', 22);
	char	*r2 = ft_memccpy(buff7, src3, 'm', 22);

	if (!memcmp(r1, r2, 22))
		printf("Success\n");
	else
		printf("Fail\n");

	char	*r3 = memccpy("", src3, 'm', 0);
	char	*r4 = ft_memccpy("", src3, 'm', 0);

	printf("%s", r3);
	printf("%s", r4);

	char	src4[] = "test basic du memccpy !";
	char	buff8[22];
	char	buff9[22];

	char	*r5 = memccpy(buff8, src4, 'z', 22);
	char	*r6 = ft_memccpy(buff9, src4, 'z', 22);
	if (r5 == r6)
		printf("Success\n");
	else
		printf("Fail\n");
}