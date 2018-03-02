int			ft_string_strncmp(char *one, char *two, int n)
{
	int 	i;

	i = 0;
	while (one[i] != 0 && two[i] != 0 && n > i)
	{
		if (one[i] != two[i])
			return (-1);
	}
	return (0);
}