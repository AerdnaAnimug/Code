void	input_array(char **argv, int *error, int *input)
{
	int i;
	int j;
	
	i = 0;
	while (argv[1][i] != 0)
		i++;
	if (i != 31)
		*error = 1;
	i = 0;
	j = 0;
	while (i <= 30)
	{
		if (argv[1][i] > '0' && argv[1][i] < '5')
		{
			input[j] = argv[1][i] - 48;
			j ++;
		}
    	else 
			*error = 1;
		i = i + 2;
	}
	i = 1;
	while (i <= 30)
	{
	if (argv[1][i] != ' ')
		*error = 1;
		i = i + 2;
	}
	return;
}

void free_memory(int **frau)
{
	int	i;

	i = 0;

	while (i < 4)
	{
		free(frau[i]);
		i++;
	}
	free (frau);
}
