/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_recovery.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:32:41 by agengemb          #+#    #+#             */
/*   Updated: 2022/08/05 20:03:58 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

int	int_recovery(char c, va_list *it)
{
	char	*s;
	int	nb_char;

	if (c == 'u')
		s = ft_utoa((va_arg(*it, unsigned int)));
	else
		s = ft_itoa(va_arg(*it, int));
	ft_putstr_fd(s, 1);
	nb_char = ft_strlen(s);
	free(s);
	return (nb_char);
}
