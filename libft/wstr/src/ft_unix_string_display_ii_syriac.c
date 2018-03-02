#include "../inc/ft_wstr.h"

int			ft_unix_string_display_ii_is_syriac(int wc)
{
	if (wc >= 0x0700 && wc <= 0x074F)
		return (1);
	return (0);
}

void		ft_unix_string_display_ii_char_syriac(void)
{
	int		wc;
	int		e;
	char 	str[] = "Affichage des characteres syriac UTF-8 (PLAGE 0x0700 >> 0x074F)\n\0";

	e = '\t';
	wc = 0x0700;
	write(1, str, strlen(str));
	while (ft_unix_string_display_ii_is_syriac(wc))
	{
		ft_unix_string_display_ii(wc);
		write(1, &e, 1);
		wc++;
	}
	e = '\n';
	write(1, &e, 1);
}