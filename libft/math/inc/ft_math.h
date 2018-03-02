#ifndef FT_MATH_H
# define FT_MATH_H

typedef struct	s_math_lib
{
	long long int	(*abs_ll)(long long int);
	long int		(*abs_l)(long int);
	int				(*abs)(int);
	long long int	(*factorial_ll)(long long int);
	long int		(*factorial_l)(long int);
	int				(*factorial)(int);
}				t_math_lib;

t_math_lib		math(void);


long long int	ft_math_abs_ll(long long int nb);
long int		ft_math_abs_l(long int nb);
int				ft_math_abs(int nb);

long long int	ft_math_factorial_ll(long long int nb);
long int		ft_math_factorial_l(long int nb);
int				ft_math_factorial(int nb);

#endif
