/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   area.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redos-sa <redos-sa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 23:30:40 by redos-sa          #+#    #+#             */
/*   Updated: 2021/07/16 01:15:57 by redos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	double			a;
	double			b;
	double			c;
	const double	pi = 3.14159;

	scanf("%lf %lf %lf", &a, &b, &c);
	printf("TRIANGULO: %.3lf\n", a * c / 2);
	printf("CIRCULO: %.3lf\n", (c * c) * pi);
	printf("TRAPEZIO: %.3lf\n", (a + b) / 2 * c);
	printf("QUADRADO: %.3lf\n", b * b);
	printf("RETANGULO: %.3lf\n", a * b);
	return (0);
}
