/**
 * _strlen_recursion - determine the length of string
 *
 * @s: string to determine the length
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
