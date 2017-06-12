/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdurot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 16:54:52 by qdurot            #+#    #+#             */
/*   Updated: 2017/03/23 19:15:33 by qdurot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_low(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		ft_char_is_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') && (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

int		ft_char_is_alphanum(char c)
{
	if ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z') ||
		(c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = (str[i] + 32);
		else
			i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_strlowcase(str);
	if (ft_char_is_low(str[0]))
	{
		str[0] = str[0] - 32;
		i++;
	}
	while (str[i])
	{
		if (ft_char_is_low(str[i]) && !(ft_char_is_alphanum(str[i - 1])))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
