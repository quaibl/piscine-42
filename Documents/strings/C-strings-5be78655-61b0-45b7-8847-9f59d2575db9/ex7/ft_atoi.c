int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

/*#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Usage: %s \"string\"\n", argv[0]);
		return (1);
	}

	printf("Input : \"%s\"\n", argv[1]);
	printf("Output: %d\n", ft_atoi(argv[1]));

	return (0);
}*/
