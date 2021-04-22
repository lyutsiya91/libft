#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (str != ((void *)0))
	{
		ft_strlcpy(s1, s2, len1 + len2);
		return (str);
	}
	else
		return ((void *)0);
}
