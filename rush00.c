/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvedishc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 12:06:31 by tvedishc          #+#    #+#             */
/*   Updated: 2023/08/13 22:20:30 by jtanskan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_puttext(int col, int row, int x, int y)
{
	if ((row == 0 && col == 0) || (row == 0 && col == x - 1))
		ft_putchar('o');
	else if ((row == y - 1 && col == 0) || (row == y - 1 && col == x - 1))
		ft_putchar('o');
	else if (row == 0 || row == y - 1)
		ft_putchar('-');
	else if (col == 0 || col == x -1)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 0;
	if (x > 0 && y > 0)
	{
		while (row < y)
		{
			col = 0;
			while (col < x)
			{
				ft_puttext(col, row, x, y);
				col++;
			}
			ft_putchar('\n');
			row++;
		}
	}
}
