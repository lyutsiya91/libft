#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (start >= ft_strlen(s))
		return ((void *)0);
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (str != ((void *)0))
	{
		i = 0;
		while (i < len)
		{
			str[i] = s[start];
			i++;
			start++;
		}
		str[i] = '\0';
		return (str);
	}
	else
		return ((void *)0);
}
