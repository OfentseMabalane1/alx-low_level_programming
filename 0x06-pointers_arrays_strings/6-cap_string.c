#include "main.h"

/**
 * cap_string - capitalizes every first letter of a word in a string.
 * separators of words are:  space, tabulation,
 * new line, ,, ;, , !, ?, ", (, ), {, and }.
 * @s: pointer to string.
 *
 * Return: pointer to s.
 */

char *cap_string(char *s)
{
	int words;

/*  scan through string */
	words = 0;
	while (s[words] != '\0')
	{/* if next character after count is a char , capitalise it */
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[words] == ' ' || s[words] == '\t' || s[words] == '\n'
		    || s[words] == ',' || s[words] == ';' || s[words] == '.'
		    || s[words] == '.' || s[words] == '!' || s[words] == '?'
		    || s[words] == '"' || s[words] == '(' || s[words] == ')'
		    || s[words] == '{' || s[words] == '}')
		{
			if (s[words + 1] >= 97 && s[words + 1] <= 122)
			{
				s[words + 1] = s[words + 1] - 32;
			}
		}
		words++;
	}
	return (s);
}
