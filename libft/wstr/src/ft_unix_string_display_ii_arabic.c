#include "../inc/ft_wstr.h"

int			ft_unix_string_display_ii_is_arabic(int wc)
{
	if (wc >= 0x0600 && wc <= 0x06FF)
		return (1);
	return (0);
}

void		ft_unix_string_display_ii_char_arabic(void)
{
	int		wc;
	int		e;
	char 	str[] = "Affichage des characteres arabic UTF-8 (PLAGE 0x0600 >> 0x06FF)\n\0";

	e = '\t';
	wc = 0x0600;
	write(1, str, strlen(str));
	while (ft_unix_string_display_ii_is_arabic(wc))
	{
		ft_unix_string_display_ii(wc);
		write(1, &e, 1);
		wc++;
	}
	e = '\n';
	write(1, &e, 1);
}