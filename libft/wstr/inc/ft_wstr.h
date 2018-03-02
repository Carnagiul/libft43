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


t_unix_lib				unix(void);
int						ft_unix_string_cmp(wchar_t *one, wchar_t *two);
int						ft_unix_string_equ(wchar_t *one, wchar_t *two);
int						ft_unix_string_ncmp(wchar_t *one, wchar_t *two, int len);
int						ft_unix_string_nequ(wchar_t *one, wchar_t *two, int len);

int						ft_unix_string_display(wchar_t *str);
int						ft_unix_string_display_ii(int wc);

/*
**
**			ft_unix_string_display_ii_latin_extended_a.c
**
*/
int			ft_unix_string_display_ii_is_latin_extended_a(int wc);
void		ft_unix_string_display_ii_char_latin_extended_a(void);

/*
**
**			ft_unix_string_display_ii_latin_i_supplement.c
**
*/
int			ft_unix_string_display_ii_is_latin_i_supplement(int wc);
void		ft_unix_string_display_ii_char_latin_i_supplement(void);

/*
**
**			ft_unix_string_display_ii_latin_extended_b.c
**
*/
void		ft_unix_string_display_ii_char_latin_extended_b(void);
int			ft_unix_string_display_ii_is_latin_extended_b(int wc);


/*
**
**			ft_unix_string_display_ii_ipa_permissions_b.c
**
*/
int			ft_unix_string_display_ii_is_ipa_permissions(int wc);
void		ft_unix_string_display_ii_char_ipa_permissions(void);


/*
**
**			ft_unix_string_display_ii_spacing_modifier_letters.c
**
*/
int			ft_unix_string_display_ii_is_spacing_modifier_letters(int wc);
void		ft_unix_string_display_ii_char_spacing_modifier_letters(void);


/*
**
**			ft_unix_string_display_ii_combining_diacritical_marks.c
**
*/
void		ft_unix_string_display_ii_char_combining_diacritical_marks(void);
int			ft_unix_string_display_ii_is_combining_diacritical_marks(int wc);


/*
**
**			ft_unix_string_display_ii_greek_and_coptic.c
**
*/
void		ft_unix_string_display_ii_char_greek_and_coptic(void);
int			ft_unix_string_display_ii_is_greek_and_coptic(int wc);

/*
**
**			ft_unix_string_display_ii_cyrillic.c
**
*/
void		ft_unix_string_display_ii_char_cyrillic(void);
int			ft_unix_string_display_ii_is_cyrillic(int wc);

/*
**
**			ft_unix_string_display_ii_cyrillic_supplement.c
**
*/
void		ft_unix_string_display_ii_char_cyrillic_supplement(void);
int			ft_unix_string_display_ii_is_cyrillic_supplement(int wc);

/*
**
**			ft_unix_string_display_ii_armenian.c
**
*/
void		ft_unix_string_display_ii_char_armenian(void);
int			ft_unix_string_display_ii_is_armenian(int wc);

/*
**
**			ft_unix_string_display_ii_hebrew.c
**
*/
void		ft_unix_string_display_ii_char_hebrew(void);
int			ft_unix_string_display_ii_is_hebrew(int wc);

/*
**
**			ft_unix_string_display_ii_arabic.c
**
*/
void		ft_unix_string_display_ii_char_arabic(void);
int			ft_unix_string_display_ii_is_arabic(int wc);

/*
**
**			ft_unix_string_display_ii_syriac.c
**
*/
void		ft_unix_string_display_ii_char_syriac(void);
int			ft_unix_string_display_ii_is_syriac(int wc);

/*
**
**			ft_unix_string_display_ii_syriac.c
**
*/
void		ft_unix_string_display_ii_char_arabic_supplement(void);
int			ft_unix_string_display_ii_is_arabic_supplement(int wc);

/*
**
**			ft_unix_string_display_ii_thana.c
**
*/
void		ft_unix_string_display_ii_char_thana(void);
int			ft_unix_string_display_ii_is_thana(int wc);

/*
**
**			ft_unix_string_display_ii_nko.c
**
*/
void		ft_unix_string_display_ii_char_nko(void);
int			ft_unix_string_display_ii_is_nko(int wc);



#endif