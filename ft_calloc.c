#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	*str;

	if (count != 0)
		str = (size_t *)malloc(size * count);
	else
		str = (size_t *)malloc(size);
	if (str != ((void *)0))
	{
		if (count != 0)
			ft_bzero(str, count);
		else
			ft_bzero(str, 1);
		return (str);
	}
	else
		return ((void *)0);
}
