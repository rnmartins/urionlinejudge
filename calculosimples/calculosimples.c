/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculosimples.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redos-sa <redos-sa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 23:01:16 by redos-sa          #+#    #+#             */
/*   Updated: 2021/07/10 23:02:14 by redos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int		code;
	int		part;
	double	price;
	double	total;

	scanf("%d %d %lf", &code, &part, &price);
	total = part * price;
	scanf("%d %d %lf", &code, &part, &price);
	total = total + (part * price);
	printf("VALOR A PAGAR: R$ %.2lf\n", total);
	return (0);
}
