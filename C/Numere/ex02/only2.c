/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 15:17:32 by                   #+#    #+#             */
/*   Updated: 2016/09/08 15:30:39 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		len(int n)
{
	int i;
	int m;

	m = n;
	i = 0;
	while (m)
	{
		m /= 10;
		i++;
	}
	return (0);
}

int		only2(int n) 
{
	int *nb;
	int i;

	nb = malloc(sizeof(int) * len(n));
	i = 0;
	while (n)
	{
		nb[i] = n % 10;
		n /= 10;
		i++;
	}
	while(i)
	{
		if (nb[i] != 2)
			printf("%d", nb[i]);
		i--;
	}
	return (0);
}

int		main()
{
	int l;

	l = 220567;
	only2(l);
	return (0);
}
