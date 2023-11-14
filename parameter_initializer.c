#include "main.h"

/**
 * init_params - Initializes and clears the fields of the parameters struct
 * @params: The parameters struct to be initialized
 * @ap: The argument pointer (not used in this function)
 *
 * This function resets all the fields of the parameters struct
 * to their default values and ensures a clean state for further processing.
 *
 * Return: void
 */
void init_params(params_t *params, va_list ap)
{
	params->unsign = 0;

	params->plus_flag = 0;
	params->space_flag = 0;
	params->hashtag_flag = 0;
	params->zero_flag = 0;
	params->minus_flag = 0;

	params->width = 0;
	params->precision = UINT_MAX;

	params->h_modifier = 0;
	params->l_modifier = 0;
	(void)ap;
}
