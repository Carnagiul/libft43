#include <stdio.h>
#include <stdlib.h>
#include "libft/math/inc/ft_math.h"

static t_math_lib		math(void)
{
	static t_math_lib lib;

	lib.abs = &ft_math_abs;
	lib.abs_l = &ft_math_abs_l;
	lib.abs_ll = &ft_math_abs_ll;
	lib.factorial = &ft_math_factorial;
	lib.factorial_l = &ft_math_factorial_l;
	lib.factorial_ll = &ft_math_factorial_ll;
	return (lib);
}

int main(void)
{
	printf("%lld\n", math().factorial_ll(20));
	printf("Generation de la libft\n");
	printf("Generation de la libft termine\n");
	return (0);
}
