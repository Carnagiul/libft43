#include "../inc/ft_wstr.h"

int			ft_unix_string_display_iii_is_devanagari(int wc)
{
	if (wc >= 0x0900 && wc <= 0x097F)
		return (1);
	return (0);
}

void		ft_unix_string_display_iii_char_devanagari(void)
{
	int		wc;
	int		e;
	char 	str[] = "Affichage des characteres arabic extended a UTF-8 (PLAGE 0x0900 >> 0x097F)\n\0";

	e = '\t';
	wc = 0x0900;
	write(1, str, strlen(str));
	while (ft_unix_string_display_iii_is_devanagari(wc))
	{
		ft_unix_string_display_iii(wc);
		write(1, &e, 1);
		wc++;
	}
	e = '\n';
	write(1, &e, 1);
}