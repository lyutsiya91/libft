#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s) + 1;
	s += i;
	while (i)
	{
		if (*s == c)
			return ((char *)s);
		s--;
		i--;
	}
	return ((void *)0);
}
