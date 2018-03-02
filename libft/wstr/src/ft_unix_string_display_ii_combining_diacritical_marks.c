#include "../inc/ft_wstr.h"

int			ft_unix_string_display_ii_is_combining_diacritical_marks(int wc)
{
	if (wc >= 0x0300 && wc <= 0x036F)
		return (1);
	return (0);
}

void		ft_unix_string_display_ii_char_combining_diacritical_marks(void)
{
	int		wc;
	int		e;
	char 	str[] = "Affichage des characteres combining diacritical marks UTF-8 (PLAGE 0x0300 >> 0x036F)\n\0";

	e = '\t';
	wc = 0x0300;
	write(1, str, strlen(str));
	while (ft_unix_string_display_ii_is_combining_diacritical_marks(wc))
	{
		ft_unix_string_display_ii(wc);
		write(1, &e, 1);
		wc++;
	}
	e = '\n';
	write(1, &e, 1);
}