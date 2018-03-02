#include "../inc/ft_wstr.h"

int			ft_unix_string_display_ii_is_spacing_modifier_letters(int wc)
{
	if (wc >= 0x02B0 && wc <= 0x02FF)
		return (1);
	return (0);
}

void		ft_unix_string_display_ii_char_spacing_modifier_letters(void)
{
	int		wc;
	int		e;
	char 	str[] = "Affichage des characteres spacing modifier letters UTF-8 (PLAGE 0x02B0 >> 0x02FF)\n\0";

	e = '\t';
	wc = 0x02B0;
	write(1, str, strlen(str));
	while (ft_unix_string_display_ii_is_spacing_modifier_letters(wc))
	{
		ft_unix_string_display_ii(wc);
		write(1, &e, 1);
		wc++;
	}
	e = '\n';
	write(1, &e, 1);
}
