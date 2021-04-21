#include "libft.h"

char	*ft_strnstr (const char *haystack, const char *needle, size_t len)
{
	size_t	n;

	n = ft_strlen(needle);
	if (!needle)
		return ((char *)haystack);
	while (haystack && len)
	{
		if (ft_strncmp(haystack, needle, n) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return ((void *)0);
}
