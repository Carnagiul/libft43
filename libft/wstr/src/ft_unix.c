#include "../inc/ft_wstr.h"

t_unix_lib		unix(void)
{
	t_unix_lib	lib;

	lib.cmp = &ft_unix_string_cmp;
	lib.equ = &ft_unix_string_equ;
	lib.ncmp = &ft_unix_string_ncmp;
	lib.nequ = &ft_unix_string_nequ;
	return (lib);
}