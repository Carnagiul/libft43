#include "../inc/ft_wstr.h"

int			ft_unix_string_display_ii_is_armenian(int wc)
{
	if (wc >= 0x0530 && wc <= 0x058F)
		return (1);
	return (0);
}

void		ft_unix_string_display_ii_char_armenian(void)
{
	int		wc;
	int		e;
	char 	str[] = "Affichage des characteres armenian UTF-8 (PLAGE 0x0530 >> 0x058F)\n\0";

	e = '\t';
	wc = 0x0530;
	write(1, str, strlen(str));
	while (ft_unix_string_display_ii_is_armenian(wc))
	{
		ft_unix_string_display_ii(wc);
		write(1, &e, 1);
		wc++;
	}
	e = '\n';
	write(1, &e, 1);
}