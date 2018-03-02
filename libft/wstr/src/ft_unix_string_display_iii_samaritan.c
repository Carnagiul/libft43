#include "../inc/ft_wstr.h"

int			ft_unix_string_display_iii_is_samaritan(int wc)
{
	if (wc >= 0x0800 && wc <= 0x083F)
		return (1);
	return (0);
}

void		ft_unix_string_display_iii_char_samaritan(void)
{
	int		wc;
	int		e;
	char 	str[] = "Affichage des characteres samaritan UTF-8 (PLAGE 0x0800 >> 0x083F)\n\0";

	e = '\t';
	wc = 0x0800;
	write(1, str, strlen(str));
	while (ft_unix_string_display_iii_is_samaritan(wc))
	{
		ft_unix_string_display_iii(wc);
		write(1, &e, 1);
		wc++;
	}
	e = '\n';
	write(1, &e, 1);
}