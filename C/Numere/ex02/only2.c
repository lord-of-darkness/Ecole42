/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 15:17:32 by                   #+#    #+#             */
/*   Updated: 2016/09/09 11:47:24 by                  ###   ########.fr       */
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
		++i;
	}
	return (i);
}

int		only2(int n) 
{
	int *nb;
	int l;

	nb = malloc(sizeof(int) * len(n) + 1);
	l = 0;
	printf("%d \n", len(n));
	while (n)
	{
		nb[l] = n % 10;
		n /= 10;
		++l;
	}
	printf("%d \n", l);
	while(nb[l])
	{
		if (nb[l] != 2)
			printf("%d", nb[l]);
		l++;
	}
	printf("\n");
	return (0);
}

int		main()
{
	int l;

	l = 32245;
	only2(l);
	return (0);
}
