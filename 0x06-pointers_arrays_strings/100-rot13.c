include "main.h"

/**
 * rot13 - encodes strings using rot13.
 * @s: pointer to string.
 * Return: pointer to encoded string.
 */

char	*rot42(char *s)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'J') ||
		(str[i] >= 'a' && str[i] <= 'j'))
			str[i] = str[i] + 16;
		else if ((str[i] >= 'K' && str[i] <= 'Z') ||
		(str[i] >= 'k' && str[i] <= 'z'))
			str[i] = str[i] - 10;
		else
			str[i];
		i += 1;
	}
	str[i] = '\0';
	return (str);
}
