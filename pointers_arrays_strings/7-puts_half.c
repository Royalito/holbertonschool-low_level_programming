
/**
 * puts_half - prints second half of a string, followed by a new line
 *
 * @str: string to be selectively printed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int length;
	char *st;
	st = str;
	for (length = 0; *st; st++)
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		if ((length % 2) == 0)
		{
			if (i >= (length / 2))
			{
				_putchar(str[i]);
			}
		}
		else if (i >= (length - ((length - 1) / 2)))
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
