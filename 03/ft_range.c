#include <stdlib.h>


int	*ft_range(int start, int end)
{
	int i;
	int size;
	int *res;
	
	size = (end - start) + 1;
	res = (int*)malloc(sizeof(int) * size);
	i = 0;
	while(i < size)
	{
		res[i] = start + i;
		i++;
	}
	return (res);
}
