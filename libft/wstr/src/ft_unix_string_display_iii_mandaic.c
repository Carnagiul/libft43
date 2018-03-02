#include "../inc/ft_wstr.h"

int			ft_unix_string_display_iii_is_mandaic(int wc)
{
	if (wc >= 0x0840 && wc <= 0x085F)
		return (1);
	return (0);
}

void		ft_unix_string_display_iii_char_mandaic(void)
{
	int		wc;
	int		e;
	char 	str[] = "Affichage des characteres mandaic UTF-8 (PLAGE 0x0840 >> 0x085F)\n\0";

	e = '\t';
	wc = 0x0840;
	write(1, str, strlen(str));
	while (ft_unix_string_display_iii_is_mandaic(wc))
	{
		ft_unix_string_display_iii(wc);
		write(1, &e, 1);
		wc++;
	}
	e = '\n';
	write(1, &e, 1);
}