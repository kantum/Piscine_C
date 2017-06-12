/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdurot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 11:14:03 by qdurot            #+#    #+#             */
/*   Updated: 2017/03/14 11:14:05 by qdurot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_iterative_factorial(int nb)
{
	int	i;
	int result;

	i = 1;
	result = 1;
	if ((nb > 12 || nb < 0))
		return (0);
	while (i <= nb)
	{
		result = i * result;
		i++;
	}
	return (result);
}
