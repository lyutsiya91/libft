#include "libft.h"

static int ft_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			count++;
		}
		else
			i++;
	}
	return (count);
}

static int ft_wordlen(char const *s, char c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while (ptr[i] && ptr[i] != c)
		i++;
	return (i);
}

static void ft_free(char **arr, int n)
{
	while (n)
	{
		free (arr[n]);
		n--;
	}
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		icol;
	int		istr;

	arr = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!arr || !s)
		return ((void *)0);
	istr = 0;
	i = 0;
	while (istr < ft_count(s, c))
	{
		while (s[i] == c)
			i++;
		arr[istr] = (char *)malloc(sizeof(char) * (ft_wordlen(&s[i], c) + 1));
		if (!arr[istr])
		{
			ft_free(arr, istr);
			return ((void *)0);
		}
		icol = 0;
		while (s[i] && s[i] != c)
			arr[istr][icol++] = s[i++];
		arr[istr][icol] = '\0';
		istr++;
	}
	arr[istr] = ((void *)0);
	return (arr);
}
