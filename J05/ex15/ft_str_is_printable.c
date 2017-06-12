/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdurot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 19:25:43 by qdurot            #+#    #+#             */
/*   Updated: 2017/03/23 19:26:44 by qdurot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int i;
	int printable;

	i = 0;
	printable = 1;
	while (str[i])
	{
		if (str[i] >= ' ' && str[i] < 127)
			printable = 1;
		else
			return (0);
		i++;
	}
	return (printable);
}
