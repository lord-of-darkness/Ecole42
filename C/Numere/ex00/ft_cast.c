/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 21:01:44 by                   #+#    #+#             */
/*   Updated: 2016/09/05 21:34:45 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_cast(char *str)
{
	int			i;
	long long	number;
	short		neg;

	while (*str == ' ')
		++str;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = 1;
		else
			neg = 0;
		++str;
	}
	i = -1;
	number = 0;
	while (*(str + ++i) > '0' && *(str + i) < '9')
		number = number * 10 + (*(str + i) - 48);
	if (number < -2147483648 || number > 2147483647)
		return (0);
	if (neg)
		return (int)(-number);
	else
		return (int)(number);
}

int		main(int argc, char **argv)
{
	printf(" %d \n",ft_cast(argv[1]));
	return (0);
}
