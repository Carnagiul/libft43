#include "../inc/ft_wstr.h"

int			ft_unix_string_display_ii_is_ipa_permissions(int wc)
{
	if (wc >= 0x0250 && wc <= 0x02AF)
		return (1);
	return (0);
}

void		ft_unix_string_display_ii_char_ipa_permissions(void)
{
	int		wc;
	int		e;
	char 	str[] = "Affichage des characteres ipa permissions UTF-8 (PLAGE 0x0250 >> 0x02AF)\n\0";

	e = '\t';
	wc = 0x0250;
	write(1, str, strlen(str));
	while (ft_unix_string_display_ii_is_ipa_permissions(wc))
	{
		ft_unix_string_display_ii(wc);
		write(1, &e, 1);
		wc++;
	}
	e = '\n';
	write(1, &e, 1);
}