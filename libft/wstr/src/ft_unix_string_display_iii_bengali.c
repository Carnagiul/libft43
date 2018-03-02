#include "../inc/ft_wstr.h"

int			ft_unix_string_display_iii_is_bengali(int wc)
{
	if (wc >= 0x0980 && wc <= 0x09FF)
		return (1);
	return (0);
}

void		ft_unix_string_display_iii_char_bengali(void)
{
	int		wc;
	int		e;
	char 	str[] = "Affichage des characteres arabic extended a UTF-8 (PLAGE 0x0980 >> 0x09FF)\n\0";

	e = '\t';
	wc = 0x0980;
	write(1, str, strlen(str));
	while (ft_unix_string_display_iii_is_bengali(wc))
	{
		ft_unix_string_display_iii(wc);
		write(1, &e, 1);
		wc++;
	}
	e = '\n';
	write(1, &e, 1);
}