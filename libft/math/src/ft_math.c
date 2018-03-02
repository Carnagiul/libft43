#include "../inc/ft_math.h"

t_math_lib		math(void)
{
	t_math_lib	lib;

	lib.abs = &ft_math_abs;
	lib.abs_l = &ft_math_abs_l;
	lib.abs_ll = &ft_math_abs_ll;
	lib.factorial = &ft_math_factorial;
	lib.factorial_l = &ft_math_factorial_l;
	lib.factorial_ll = &ft_math_factorial_ll;
	return (lib);
}