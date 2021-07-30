/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   esfera.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redos-sa <redos-sa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 23:04:56 by redos-sa          #+#    #+#             */
/*   Updated: 2021/07/10 23:21:34 by redos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	const double	pi = 3.14159;
	double			radius;

	scanf("%lf", &radius);
	printf("VOLUME = %.3lf\n", (4 / 3.0) * pi * (radius * radius * radius));
	return (0);
}
