#include "../inc/ft_wstr.h"

int			ft_unix_string_display_iii_is_arabic_extended_a(int wc)
{
	if (wc >= 0x08A0 && wc <= 0x08FF)
		return (1);
	return (0);
}

void		ft_unix_string_display_iii_char_arabic_extended_a(void)
{
	int		wc;
	int		e;
	char 	str[] = "Affichage des characteres arabic extended a UTF-8 (PLAGE 0x08A0 >> 0x08FF)\n\0";

	e = '\t';
	wc = 0x08A0;
	write(1, str, strlen(str));
	while (ft_unix_string_display_iii_is_arabic_extended_a(wc))
	{
		ft_unix_string_display_iii(wc);
		write(1, &e, 1);
		wc++;
	}
	e = '\n';
	write(1, &e, 1);
}