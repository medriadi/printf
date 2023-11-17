#include "main.h"

/**
* get_precision - Extracts precision from the format string.
* @p: The format string.
* @params: The parameters struct.
* @ap: The argument pointer.
*
* Return: A new pointer after processing the precision specifier.
*/
char *get_precision(char *p, params_t *params, va_list ap)
{
	int d = 0;

	if (*p != '.')
		return (p);

	p++;

	if (*p == '*')
	{
		d = va_arg(ap, int);
		if (d < 0)
		{
			params->precision = -1;
		}
		else
		{
			params->precision = d;
		}
		p++;
	}
	else
	{
		while (_isdigit(*p))
			d = d * 10 + (*p++ - '0');
		params->precision = d;
	}

	return (p);
}
