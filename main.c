#include <string.h>
#include "libft.h"
#include <stdio.h>

int	main()
{
	char *str1 = "hello";
	//char *str2 = "hello";

	char *ptr1 = strchr(str1, 'a');
	//char *ptr2 = ft_strchr(str2, 'a');
	printf("original : %c\n", *ptr1);
	//printf("my code : %c\n", *ptr2);

}
