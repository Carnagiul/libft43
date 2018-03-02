#include "../inc/ft_wstr.h"

int			ft_unix_string_display_ii(int wc)
{
	int		c, d;

	c = (wc >> 6) + 0XC0;
	d = (wc & 0x3F) + 0X80;
	write(1, &c, 1);
	write(1, &d, 1);
	return (2);
}

int			ft_unix_char_is_display_ii(int wc)
{
	if (wc >= 0x80 && wc <= 0x07FF)
		return (1);
	return (0);
}

int			ft_unix_string_display_iv(int wc)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = (wc >> 18) + 0xF0;
	b = ((wc >> 12) & 0x3F) + 0X80;
	c = ((wc >> 6) & 0x3F) + 0X80;
	d = (wc & 0x3F) + 0X80;
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, &d, 1);
	return (4);
}

int			ft_unix_string_display(wchar_t *str)
{
	int		i;
	int		e;

	for (i = 0; i < 0x1003FF; i++)
	{
		e = '\t';

		if (i < 128)
		{
			write(1, &i, 1);
			write(1, &e, 1);
		}
		else
		{
			if (ft_unix_char_is_display_ii(i) == 1)
			{
				ft_unix_string_display_ii(i);
				write(1, &e, 1);
			}
		}
	}
	return (i);
}