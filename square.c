#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_line(int x, char left, char middle, char right)
{
	int	i;

	ft_putchar(left);
	i = 0;
	while (i < x - 2)
	{
		ft_putchar(middle);
		i++;
	}
	if (x > 1)
		ft_putchar(right);
	ft_putchar('\n');
}

void	ft_print_middle(int x)
{
	int	i;

	ft_putchar('|');
	i = 0;
	while (i < x - 2)
	{
		ft_putchar(' ');
		i++;
	}
	if (x > 1)
		ft_putchar('|');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x <= 0 || y <= 0)
		return ;
	ft_print_line(x, 'o', '-', 'o');
	i = 0;
	while (i < y - 2)
	{
		ft_print_middle(x);
		i++;
	}
	if (y > 1)
		ft_print_line(x, 'o', '-', 'o');
}
