#include "libft.h"
#include <stdio.h>

int main(void)
{
	char src[] = "1234567890";
    char srb[] = "1234567890";
    bzero (src, 5);
    printf("bzero:      ");
    for (int i = 0; i < 10; i++)
	{
	    printf("%c", src[i]);
	}
	ft_bzero (srb, 5);
	printf("\nft_bzero:   ");
	for (int i = 0; i < 10; i++)
	{
	    printf("%c", srb[i]);
	}
	printf("\n");
}