/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combination.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 13:54:23 by                   #+#    #+#             */
/*   Updated: 2016/09/13 10:36:21 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		factorial(int n)
{
	if (n == 1)
		return (1);
	return (factorial(n - 1) * n);
}

int		comb(int N, int M)
{
	int m;

	m = factorial(N) / (factorial(M) * factorial(N - M));
	return (m);
}

int		main(int argc, char **argv)
{
	int l;
	int m;

	l = 100;
	m = 6;
	printf(" %d \n", comb(l, m));
	return (0);
}
