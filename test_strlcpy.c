#include "libft.h"
#include <stdio.h>
#define		STRING_1	"the cake is a lie !\0I'm hidden lol\r\n"
#define		STRING_4	"phrase differente pour le test"
#define		STRING_2	"there is no stars in the sky"
#define		STRING_3	"test basic !"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return ((void *)0);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = ft_strlen(src);
	if (dstsize > 0)
	{
		if (len > (dstsize - 1))
			len = dstsize - 1;
		ft_memcpy(dst, src, len);
		while (dst[len] != '\0')
		{
			dst[len] = '\0';
			len++;
		}
	}
	return (len);
}

int main(void)
{
	char	str39[11] = "abc";
	char	str40[11] = "def";
	char	str41[11] = "def";

	size_t x = strlcpy(str40, str39, 3);
	printf("Strlcpy return: %s %d\n", str40, (int)x);
	size_t y = ft_strlcpy(str41, str39, 3);
	printf("ft_strlcpy return: %s %d\n", str41, (int)y);
}