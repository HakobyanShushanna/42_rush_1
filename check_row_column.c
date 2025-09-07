/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_row_column.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhakoby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 12:58:48 by shhakoby          #+#    #+#             */
/*   Updated: 2025/09/07 16:01:24 by shhakoby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max_count(int *arr, int size)
{
	int	max;
	int	i;
	int	ind;

	max = arr[0];
	i = 1;
	ind = 1;
	while (ind < size)
	{
		if (max < arr[ind])
		{
			max = arr[ind];
			i++;
		}
		ind++;
	}
	return (i);
}

int	reverse_max_count(int *arr, int size)
{
	int	max;
	int	i;
	int	ind;

	ind = size - 1;
	max = arr[ind];
	i = 1;
	while (ind >= 0)
	{
		if (arr[ind] > max)
		{
			max = arr[ind];
			i++;
		}
		ind--;
	}
	return (i);
}

int	check_line(int left, int right, int *arr, int size)
{
	int	l_n;
	int	r_n;

	l_n = max_count(arr, size);
	r_n = reverse_max_count(arr, size);
	return ((l_n == left) && (r_n == right));
}
