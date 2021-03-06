/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rec.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 15:24:26 by                   #+#    #+#             */
/*   Updated: 2016/09/19 15:55:14 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	recurs(int n)
{
	if (n - 4)
	{
		switch (n % 10)
		{
			case 0: recurs(n / 10); break;
			case 4: recurs(n / 10); break;
			default: recurs(n * 2);
		}
		printf(" -> %d", n);
	}
}

int		main()
{
	int n;

	n = 3;
	printf("4");
	recurs(n);
	printf("\n");
	return (0);
}
