/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosibind <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 16:39:07 by bosibind          #+#    #+#             */
/*   Updated: 2020/07/12 17:13:26 by bosibind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_ultimate_div_mod()
{
	int *i;
	int *j;

	*i = *a;
	*a = *i / *b;
	*j = *b;
	*b = *i / *j;
}	
