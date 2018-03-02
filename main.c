#include <stdio.h>
#include <stdlib.h>
#include "libft/math/inc/ft_math.h"
#include "libft/wstr/inc/ft_wstr.h"

int main(void)
{
	printf("Generation de la libft\n");
	printf("Generation de la libft termine\n");
	printf("ft_unix_string_cmp == %d\n", unix().cmp(L"êêê", L"êêê"));
	printf("ft_unix_string_equ == %d\n", unix().equ(L"êêê", L"êêê"));

	printf("Debut de l'affichage des characteres UTF-8 encode sur deux octets\n\n");
	ft_unix_string_display_ii_char_latin_i_supplement();
	printf("\n\n");
	ft_unix_string_display_ii_char_latin_extended_a();
	printf("\n\n");
	ft_unix_string_display_ii_char_latin_extended_b();
	printf("\n\n");
	ft_unix_string_display_ii_char_ipa_permissions();
	printf("\n\n");
	ft_unix_string_display_ii_char_spacing_modifier_letters();
	printf("\n\n");
	ft_unix_string_display_ii_char_combining_diacritical_marks();
	printf("\n\n");
	ft_unix_string_display_ii_char_greek_and_coptic();
	printf("\n\n");
	ft_unix_string_display_ii_char_cyrillic();
	printf("\n\n");
	ft_unix_string_display_ii_char_cyrillic_supplement();
	printf("\n\n");
	ft_unix_string_display_ii_char_armenian();
	printf("\n\n");
	ft_unix_string_display_ii_char_hebrew();
	printf("\n\n");
	ft_unix_string_display_ii_char_arabic();
	printf("\n\n");
	ft_unix_string_display_ii_char_syriac();
	printf("\n\n");
	ft_unix_string_display_ii_char_arabic_supplement();
	printf("\n\n");
	ft_unix_string_display_ii_char_thana();
	printf("\n\n");
	ft_unix_string_display_ii_char_nko();
	printf("\n\n");
	printf("Fin de l'affichage des characteres UTF-8 encode sur deux octets\n\n");
	printf("\n\nTest de la boucle while()\n\n");
	ft_unix_string_display(L"");
	return (0);
}
