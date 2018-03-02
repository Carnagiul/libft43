#include "../inc/ft_wstr.h"

int			ft_unix_string_display_ii_is_latin_extended_b(int wc)
{
	if (wc >= 0x0180 && wc <= 0x024F)
		return (1);
	return (0);
}

void		ft_unix_string_display_ii_char_latin_extended_b(void)
{
	int		wc;
	int		e;
	char 	str[] = "Affichage des characteres latin extended b UTF-8 (PLAGE 0x0180 >> 0x024F)\n\0";

	e = '\t';
	wc = 0x0180;
	write(1, str, strlen(str));
	while (ft_unix_string_display_ii_is_latin_extended_b(wc))
	{
		ft_unix_string_display_ii(wc);
		write(1, &e, 1);
		wc++;
	}
	e = '\n';
	write(1, &e, 1);
}