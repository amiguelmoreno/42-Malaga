#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		first;
	int		second;
	char	oper;
	int		res;

	first = atoi(argv[1]);
	second = atoi(argv[3]);
	oper = argv[2][0];
	if (argc == 4)
	{
		if (oper == '+')
			res = first + second;
		else if (oper == '-')
			res = first - second;
		else if (oper == '*')
			res = first * second;
		else if (oper == '/')
			res = first / second;
		else if (oper == '%')
			res = first % second;
		printf("%d\n", res);
	}
	else
		write(1, "\n", 1);
	return (0);
}
