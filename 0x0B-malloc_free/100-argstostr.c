#include "main.h"

/**
 * *argstostr - a function that concatenate all arguements
 * @ac:parameter
 * @av:parameter
 * Return:a pointer or null
 */

char *argstostr(int ac, char **av)
{
	int arg_index;
	int char_index;
	int total_length = 0;
	int concat_index = 0;
	char *concatenated;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg_index = 0; arg_index < ac; arg_index++)
	{
		char *arg = av[arg_index];

		if (arg == NULL)
			return (NULL);
		for (char_index = 0; arg[char_index] != '\0'; char_index++)
			total_length++;
		total_length++;
	}
	concatenated = (char *)malloc((total_length + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);
	for (arg_index = 0; arg_index < ac; arg_index++)
	{
		char *arg = av[arg_index];

		if (arg == NULL)
			return (NULL);
		for (char_index = 0; arg[char_index] != '\0'; char_index++)
			concatenated[concat_index++] = arg[char_index];
		concatenated[concat_index++] = '\n';
	}
	concatenated[concat_index] = '\0';

	return (concatenated);
}
