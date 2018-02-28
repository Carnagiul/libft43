#include "../inc/ft_math.h"

int	ft_math_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	return (nb * (ft_math_factorial(nb - 1)));
}

long int	ft_math_factorial_l(long int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	return (nb * (ft_math_factorial_l(nb - 1)));
}

long long int	ft_math_factorial_ll(long long int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	return (nb * (ft_math_factorial_ll(nb - 1)));
}
