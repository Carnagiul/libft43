#ifndef FT_WSTR_H
# define FT_WSTR_H

# include <wchar.h>
# include <unistd.h>
# include <string.h>

typedef struct	s_unix_lib
{
	int				(*cmp)(wchar_t *one, wchar_t *two);
	int				(*equ)(wchar_t *one, wchar_t *two);
	int				(*ncmp)(wchar_t *one, wchar_t *two, int len);
	int				(*nequ)(wchar_t *one, wchar_t *two, int len);
}				t_unix_lib;


typedef struct	s_unix_char_display
{
	int			min;
	int			max;
	int			size;
}				t_unix_char_display;

t_unix_lib				unix(void);
int						ft_unix_string_cmp(wchar_t *one, wchar_t *two);
int						ft_unix_string_equ(wchar_t *one, wchar_t *two);
int						ft_unix_string_ncmp(wchar_t *one, wchar_t *two, int len);
int						ft_unix_string_nequ(wchar_t *one, wchar_t *two, int len);

int						ft_unix_string_display(wchar_t *str);
int						ft_unix_string_display_ii(int wc);
void 					ft_unix_string_display_put(void);
#endif