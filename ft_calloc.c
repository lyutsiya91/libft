#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	*str;

	str = (size_t *)malloc(size * count);
	if (str != ((void *)0))
	{
		ft_bzero(str, count);
		return (str);
	}
	else
		return ((void *)0);
}
