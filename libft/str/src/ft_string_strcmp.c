int			ft_string_strcmp(char *one, char *two)
{
	int 	i;

	i = 0;
	while (one[i] != 0 && two[i] != 0)
	{
		if (one[i] != two[i])
			return (-1);
	}
	return (0);
}