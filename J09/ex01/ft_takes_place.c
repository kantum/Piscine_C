/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdurot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 19:29:47 by qdurot            #+#    #+#             */
/*   Updated: 2017/03/16 19:42:41 by qdurot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_pm(int hour)
{
	if (hour == 12)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%d %s AND %d %s\n", 12, "P.M", 1, "P.M.");
	}
	if (hour > 12 && hour < 24)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%d %s AND %d %s\n", (hour - 12), "P.M", (hour - 11), "P.M.");
	}
	if (hour == 24)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%d %s AND %d %s\n", (hour - 12), "A.M", 01, "A.M.");
	}
}

void	ft_am(int hour)
{
	if (hour == 00)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%d %s AND %d %s\n", 12, "A.M.", 01, "A.M.");
	}
	if (hour > 00 && hour < 11)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%d %s AND %d %s\n", hour, "A.M.", (hour + 1), "A.M.");
	}
	if (hour == 11)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%d %s AND %d %s\n", hour, "A.M.", 12, "P.M");
	}
}

void	ft_takes_place(int hour)
{
	if (hour >= 12)
		ft_pm(hour);
	else
		ft_am(hour);
}
