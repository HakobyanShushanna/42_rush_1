/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_row_column.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhakoby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 12:58:48 by shhakoby          #+#    #+#             */
/*   Updated: 2025/09/07 14:02:56 by shhakoby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	num_row_column(int *arr)
{
	int	max;
	int	i;

	max = *arr;
	i = 1;
	while (*arr)
	{
		if (max < *arr)
		{
			max = *arr;
			i++;
		}
		arr++;
	}
	return (i);
}

int	reverse_num_row_column(int *arr)
{
	int	max;
	int	i;
	int	*first;

	first = arr;
	while (*arr)
		arr++;
	arr--;
	max = *arr;
	i = 0;
	while (arr != first)
	{
		arr--;
		if ((*arr) > max)
		{
			max = *arr;
			i++;
		}
	}
	return (i);
}

int	check_row_column(int left, int right, int *arr)
{
	int	l_n;
	int	r_n;

	l_n = num_row_column(&arr[0]);
	r_n = reverse_num_row_column(&arr[0]);
	return ((l_n == left) && (r_n == right));
}
