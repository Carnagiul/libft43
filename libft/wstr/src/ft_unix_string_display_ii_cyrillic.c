#include "../inc/ft_wstr.h"

int			ft_unix_string_display_ii_is_cyrillic(int wc)
{
	if (wc >= 0x0400 && wc <= 0x04FF)
		return (1);
	return (0);
}

void		ft_unix_string_display_ii_char_cyrillic(void)
{
	int		wc;
	int		e;
	char 	str[] = "Affichage des characteres cyrillic UTF-8 (PLAGE 0x0400 >> 0x04FF)\n\0";

	e = '\t';
	wc = 0x0400;
	write(1, str, strlen(str));
	while (ft_unix_string_display_ii_is_cyrillic(wc))
	{
		ft_unix_string_display_ii(wc);
		write(1, &e, 1);
		wc++;
	}
	e = '\n';
	write(1, &e, 1);
}