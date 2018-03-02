#include "../inc/ft_wstr.h"

int			ft_unix_string_display_ii_is_hebrew(int wc)
{
	if (wc >= 0x0590 && wc <= 0x05FF)
		return (1);
	return (0);
}

void		ft_unix_string_display_ii_char_hebrew(void)
{
	int		wc;
	int		e;
	char 	str[] = "Affichage des characteres hebrew UTF-8 (PLAGE 0x0590 >> 0x05FF)\n\0";

	e = '\t';
	wc = 0x0590;
	write(1, str, strlen(str));
	while (ft_unix_string_display_ii_is_hebrew(wc))
	{
		ft_unix_string_display_ii(wc);
		write(1, &e, 1);
		wc++;
	}
	e = '\n';
	write(1, &e, 1);
}