int _putchar(char c);
/**
 * main - print the name of file
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; __FILE__[i]; i++)
	{
		_putchar(__FILE__[i]);
	}
	_putchar('\n');
	return (0);
}
