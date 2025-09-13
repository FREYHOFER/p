/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfreyhof <pfreyhof@42.student.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 20:21:15 by pfreyhof          #+#    #+#             */
/*   Updated: 2025/09/13 02:01:14 by pfreyhof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	printgrid(char grid[][6])
{
	int	row;
	int	column;
	char	crow;
	char	ccolumn;

	row = 0;
	column = 0;
	crow = '0';
	ccolumn = '0';
	while ( row < 6)
	{
		while (column < 6)
		{
			write(1, &grid[row][column], 1);
			write(1, " ", 1);
			crow = crow + row;
			ccolumn = ccolumn + column;
			column++;
		}
		write(1, "\n", 1);
		row++;
		column = 0;
	}
}

int	main(int argc, char *argv[])
{
	//char	mygrid[6][6] = {"000000", "000000", "000000", "000000", "000000", "000000"};
	char	cluegrid[6][6] = {"000000", "000000", "000000", "000000", "000000", "000000"};
	int	myrow;
	int	mycolumn;
	int	solved;
	int	i;
	int	j;
	
	solved = 0;
	myrow = 0;
	mycolumn = 0;

	if (argc != 2)
		write(1, "Error\n", 6);

	i = 0;	
	while (argv[1][i] != '\0')
	{
		j = 1;
		while (i < 7)
		{
			if (argv[1][i] > '0' && '9' > argv[1][i])
			{
				cluegrid[0][j] = argv[1][i];
				printgrid(cluegrid);
				j++;
			}
			else if (argv[1][i] != ' ')
			{
				write(1, "Error\n", 6);
				return (1);
			}
			i++;
		}	
		j = 1;
		while (i < 15)
		{
			if (argv[1][i] > '0' && '9' > argv[1][i])
			{
				cluegrid[5][j] = argv[1][i];
				printgrid(cluegrid);
				j++;
			}
			else if (argv[1][i] != ' ')
			{
				write(1, "Error\n", 6);
				return (1);
			}
			i++;
		}	
		j = 1;
		while (i < 23)
		{
			if (argv[1][i] > '0' && '9' > argv[1][i])
			{
				cluegrid[j][0] = argv[1][i];
				printgrid(cluegrid);
				j++;
			}
			else if (argv[1][i] != ' ')
			{
				write(1, "Error\n", 6);
				return (1);
			}
			i++;
		}	
		j = 1;
		while (i < 31)
		{
			if (argv[1][i] > '0' && '9' > argv[1][i])
			{
				cluegrid[j][5] = argv[1][i];
				printgrid(cluegrid);
				j++;
			}
			else if (argv[1][i] != ' ')
			{
				write(1, "Error\n", 6);
				return (1);
			}
			i++;
		}
	}
//----------------------------------------------------------------------------------
/*	while (myrow < 6)
	{
		while (mycolumn < 6)
		{
			printgrid(mygrid);
			write(1, "------\n", 8);
			mycolumn++;
		}
		myrow++;
		mycolumn = 0;
	}*/
}
