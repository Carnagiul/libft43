#include "../inc/ft_wstr.h"

int			ft_unix_string_display_ii_is_greek_and_coptic(int wc)
{
	if (wc >= 0x0370 && wc <= 0x03FF)
		return (1);
	return (0);
}

void		ft_unix_string_display_ii_char_greek_and_coptic(void)
{
	int		wc;
	int		e;
	char 	str[] = "Affichage des characteres greek and coptic UTF-8 (PLAGE 0x0370 >> 0x03FF)\n\0";

	e = '\t';
	wc = 0x0370;
	write(1, str, strlen(str));
	while (ft_unix_string_display_ii_is_greek_and_coptic(wc))
	{
		ft_unix_string_display_ii(wc);
		write(1, &e, 1);
		wc++;
	}
	e = '\n';
	write(1, &e, 1);
}