/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdurot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 11:17:26 by qdurot            #+#    #+#             */
/*   Updated: 2017/03/23 19:22:57 by qdurot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int i;
	int uppercase;

	i = 0;
	uppercase = 1;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			uppercase = 1;
		else
			return (0);
		i++;
	}
	return (uppercase);
}
