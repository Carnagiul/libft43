#include "../inc/ft_wstr.h"

int			ft_unix_string_display_ii_is_cyrillic_supplement(int wc)
{
	if (wc >= 0x0500 && wc <= 0x052F)
		return (1);
	return (0);
}

void		ft_unix_string_display_ii_char_cyrillic_supplement(void)
{
	int		wc;
	int		e;
	char 	str[] = "Affichage des characteres cyrillic supplement UTF-8 (PLAGE 0x0500 >> 0x052F)\n\0";

	e = '\t';
	wc = 0x0500;
	write(1, str, strlen(str));
	while (ft_unix_string_display_ii_is_cyrillic_supplement(wc))
	{
		ft_unix_string_display_ii(wc);
		write(1, &e, 1);
		wc++;
	}
	e = '\n';
	write(1, &e, 1);
}