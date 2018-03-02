#include "../inc/ft_wstr.h"

int			ft_unix_string_display_ii_is_thana(int wc)
{
	if (wc >= 0x0780 && wc <= 0x07BF)
		return (1);
	return (0);
}

void		ft_unix_string_display_ii_char_thana(void)
{
	int		wc;
	int		e;
	char 	str[] = "Affichage des characteres thana UTF-8 (PLAGE 0x0780 >> 0x07BF)\n\0";

	e = '\t';
	wc = 0x0780;
	write(1, str, strlen(str));
	while (ft_unix_string_display_ii_is_thana(wc))
	{
		ft_unix_string_display_ii(wc);
		write(1, &e, 1);
		wc++;
	}
	e = '\n';
	write(1, &e, 1);
}