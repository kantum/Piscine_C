/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdurot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 11:17:22 by qdurot            #+#    #+#             */
/*   Updated: 2017/03/23 19:21:43 by qdurot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int i;
	int lowercase;

	i = 0;
	lowercase = 1;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			lowercase = 1;
		else
			return (0);
		i++;
	}
	return (lowercase);
}
