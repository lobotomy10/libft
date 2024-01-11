
#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// int main(){
// 	printf("%lu", ft_strlen("test"));
// 	printf("%lu", strlen("  "));
// 	printf("%lu", strlen("\t"));
// 	printf("%lu", strlen(" "));
// 	return (0);