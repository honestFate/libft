#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	long long	x;

	x = n;
	if (x < 0)
	{
		x = -x;
		write(fd, "-", 1);
	}
	if (x / 10)
		ft_putnbr_fd(x / 10, fd);
	x %= 10;
	x += '0';
	write(fd, &x, 1);
}