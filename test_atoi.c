#include "libft.h"
#include <stdio.h>

int main(void)
{
	char n[40] = " +-4445";
	printf("%d\n", atoi(n));
	printf("%d\n",ft_atoi(n));

	char k[40] = "-2147483648";
	printf("%d\n", atoi(k));
	printf("%d\n",ft_atoi(k));

	char j[40] = " 	 	+4567ads";
	printf("%d\n", atoi(j));
	printf("%d\n",ft_atoi(j));

	char a[40] = " 	 	-4567.678";
	printf("%d\n", atoi(a));
	printf("%d\n",ft_atoi(a));

	char b[40] = " 	 	abc56";
	printf("%d\n", atoi(b));
	printf("%d\n",ft_atoi(b));
}