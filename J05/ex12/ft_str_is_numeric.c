/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdurot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 11:17:15 by qdurot            #+#    #+#             */
/*   Updated: 2017/03/23 19:21:05 by qdurot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int i;
	int numeric;

	i = 0;
	numeric = 1;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			numeric = 1;
		else
			return (0);
		i++;
	}
	return (numeric);
}
