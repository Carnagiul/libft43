#include "../inc/ft_wstr.h"

int			ft_unix_string_display_iii_is_gurmukhi(int wc)
{
	if (wc >= 0x0A00 && wc <= 0x0A7F)
		return (1);
	return (0);
}

void		ft_unix_string_display_iii_char_gurmukhi(void)
{
	int		wc;
	int		e;
	char 	str[] = "Affichage des characteres arabic extended a UTF-8 (PLAGE 0x0A00 >> 0x0A7F)\n\0";

	e = '\t';
	wc = 0x0A00;
	write(1, str, strlen(str));
	while (ft_unix_string_display_iii_is_gurmukhi(wc))
	{
		ft_unix_string_display_iii(wc);
		write(1, &e, 1);
		wc++;
	}
	e = '\n';
	write(1, &e, 1);
}