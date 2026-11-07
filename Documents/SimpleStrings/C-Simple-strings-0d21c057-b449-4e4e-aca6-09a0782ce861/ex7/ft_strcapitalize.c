char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& (i == 0
				|| !((str[i - 1] >= 'a' && str[i - 1] <= 'z')
					|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
					|| (str[i - 1] >= '0' && str[i - 1] <= '9'))))
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*#include <stdio.h>

int	main(void)
{
	char str1[] = "hello, how are you doing? 42word:s forty-two; fifty+and+one";
	ft_strcapitalize(str1);
	printf("%s\n", str1);
	char str2[] = ",a!\rx40i[.Y\r LE\u000b2y!p~Q'(^c";
        ft_strcapitalize(str2);
        printf("%s\n", str2);
	char str3[] = ",A!\rX40i[.Y\r Le\u000b2y!P~Q'(^C";
        ft_strcapitalize(str3);
        printf("%s\n", str3);
	char str4[] = ",A!\rX40i[.Y\r Le\u000b2y!P~q'(^c";
        ft_strcapitalize(str4);
        printf("%s\n", str4);

	return (0);
}*/
