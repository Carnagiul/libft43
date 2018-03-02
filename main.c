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

	ft_unix_string_display_put();
	return (0);
}
