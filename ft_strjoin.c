#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i, n, len1, len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (str != ((void *)0))
	{
		i = 0;
		while (i < len1)
		{
			str[i] = s1[i];
			i++;
		}
		n = 0;
		while (n < len2)	
		{
			str[i] = s2[n];
			i++;
			n++;
		}
		str[i] = '\0';
		return (str);
	}
	else
		return ((void *)0);
}
