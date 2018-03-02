#include "../inc/ft_wstr.h"

int			ft_unix_string_display_ii_is_nko(int wc)
{
	if (wc >= 0x07C0 && wc <= 0x07FF)
		return (1);
	return (0);
}

void		ft_unix_string_display_ii_char_nko(void)
{
	int		wc;
	int		e;
	char 	str[] = "Affichage des characteres nko UTF-8 (PLAGE 0x0780 >> 0x07FF)\n\0";

	e = '\t';
	wc = 0x07C0;
	write(1, str, strlen(str));
	while (ft_unix_string_display_ii_is_nko(wc))
	{
		ft_unix_string_display_ii(wc);
		write(1, &e, 1);
		wc++;
	}
	e = '\n';
	write(1, &e, 1);
}