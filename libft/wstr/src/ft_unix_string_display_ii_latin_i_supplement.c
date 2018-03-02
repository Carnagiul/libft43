#include "../inc/ft_wstr.h"

int			ft_unix_string_display_ii_is_latin_i_supplement(int wc)
{
	if (wc >= 0x80 && wc <= 0x00FF)
		return (1);
	return (0);
}

void		ft_unix_string_display_ii_char_latin_i_supplement(void)
{
	int		wc;
	int		e;
	char 	str[] = "Affichage des characteres latin 1 supplement UTF-8 (PLAGE 0x80 >> 0x00FF)\n\0";

	e = '\t';
	wc = 0x80;
	write(1, str, strlen(str));
	while (ft_unix_string_display_ii_is_latin_i_supplement(wc))
	{
		ft_unix_string_display_ii(wc);
		write(1, &e, 1);
		wc++;
	}
	e = '\n';
	write(1, &e, 1);
}