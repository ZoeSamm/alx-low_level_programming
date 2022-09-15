*/
void print_most_numbers(void)
{
	int ;
	int ch;

	for (i = 48; i < 58; i++)
	for (ch = 48; ch < 58; ch++)
	{
		if (i != 50 && i != 52)
		_putchar(i);
		if (ch != 50 && ch != 52)
		{
			_putchar(ch);
		}

	}
	_putchar('\n');
}
