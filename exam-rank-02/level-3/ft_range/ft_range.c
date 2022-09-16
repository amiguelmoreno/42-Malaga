
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*ret;
	int	i;

	if (start > end)
		ret = (int *)malloc(sizeof(int) * (start - end) + 1);
	else
		ret = (int *)malloc(sizeof(int) * (end - start) + 1);
	i = 0;
	if (ret)
	{
		while (start != end)
		{
			ret[i] = start;
			if (start < end)
				start++;
			if (start > end)
				start--;
			i++;
		}
		ret[i] = end;
		return (ret);
	}
	return (0);
}

int	main(void)
{
	int	*lst;

	lst = ft_range(12, -3);
	printf("%p\n", lst);
	printf("%d\n", lst[0]);
	printf("%d\n", lst[15]);
}
