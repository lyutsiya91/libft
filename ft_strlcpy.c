#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	if (dstsize > 0)
	{
		ft_memcpy(dst, src, (dstsize - 1));
		dst[dstsize] = '\0';
	}
	return (ft_strlen(src));
}
