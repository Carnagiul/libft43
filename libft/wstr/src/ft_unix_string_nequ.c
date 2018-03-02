#include "../inc/ft_wstr.h"

int				ft_unix_string_nequ(wchar_t *one, wchar_t *two, int len)
{
	int 		i;

	i = 0;
	while (one[i] == two[i] && one[i] != 0 && two[i] != 0 && i < len)
		i++;
	if (one[i] == two[i])
		return (1);
	return (0);
}