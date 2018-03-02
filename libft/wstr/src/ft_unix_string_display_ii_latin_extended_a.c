#include "../inc/ft_wstr.h"

int			ft_unix_string_display_ii_is_latin_extended_a(int wc)
{
	if (wc >= 0x0100 && wc <= 0x017F)
		return (1);
	return (0);
}

void		ft_unix_string_display_ii_char_latin_extended_a(void)
{
	int		wc;
	int		e;
	char 	str[] = "Affichage des characteres latin extended a UTF-8 (PLAGE 0x0100 >> 0x017F)\n\0";

	e = '\t';
	wc = 0x0100;
	write(1, str, strlen(str));
	while (ft_unix_string_display_ii_is_latin_extended_a(wc))
	{
		ft_unix_string_display_ii(wc);
		write(1, &e, 1);
		wc++;
	}
	e = '\n';
	write(1, &e, 1);
}