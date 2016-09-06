/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revcast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 21:39:39 by                   #+#    #+#             */
/*   Updated: 2016/09/05 22:02:31 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	ft_revcast(int n)
{
	int		a;
	int		i;
	char	*str;

	i = 0;
	a = n;
	while(a)
	{
		a /= 10;
		i++;
	}
	str = (char*)malloc(sizeof(int) * i + 1);
	str[i + 1] =(char*)("\0");
	while (n)
	{
		str[i] = (char*)(n % 10);
		n /= 10;
	}
	return (str[i]);
}

int		main()
{
	int	i;

	i = 200;
	printf(" %s \n",ft_revcast(i));
	return (0);
}
