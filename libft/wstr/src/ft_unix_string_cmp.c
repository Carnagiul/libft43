#include "../inc/ft_wstr.h"

int				ft_unix_string_cmp(wchar_t *one, wchar_t *two)
{
	int 		i;

	i = 0;
	while (one[i] == two[i] && one[i] != 0 && two[i] != 0)
		i++;
	return (one[i] - two[i]);
}