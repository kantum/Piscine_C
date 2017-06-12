/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdurot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 17:44:52 by qdurot            #+#    #+#             */
/*   Updated: 2017/03/20 17:44:54 by qdurot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

int			main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (argc > i)
	{
		while (argv[argc - 1][j])
		{
			ft_putchar(argv[argc - 1][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		argc--;
	}
}
