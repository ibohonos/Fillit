/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_fig.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 16:31:29 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/22 21:53:03 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_map	*ft_place_fig(t_map *map, t_tetri *tetri, int x, int y)
// {
// 	int		i;
// 	int		j;
//
// 	if (tetri == NULL)
// 		return (map);
// 	i = 0;
// 	while (i < tetri->h)
// 	{
// 		j = 0;
// 		if (i != 0)
// 			x = 0;
// 		while (j < tetri->w)
// 		{
// 			if (map->map[y][x] == '\0')
// 			{
// 				y++;
// 				x = 0;
// 			}
// 			if (map->map[y][x] != '.')
// 				x++;
// 			if (map->map[y][x] == '\0')
// 			{
// 				x = 0;
// 				y++;
// 			}
// 			if (tetri->area[i][j] == '#' && map->map[y][x] == '.')
// 				map->map[y][x] = tetri->letter;
// 			else if (tetri->area[i][j] == '.')
// 				map->map[y][x] = '.';
// 			j++;
// 			x++;
// 		}
// 		i++;
// 		y++;
// 	}
// 	// x = tetri->w;
// 	// y = tetri->h;
// 	y = 0;
// 	// ft_putnbr(y);
// 	// ft_putchar('\n');
// 	return (ft_place_fig(map, tetri->next, x, y));
// 	// return (map);
// }

{
	int i;
	int j;

	if (tetri == NULL)
		return (map);
	i = 0;
	while (i <= map->size - tetri->h)
	{
		j = 0;
		while (j <= map->size - tetri->w)
		{

		}
	}
	return (ft_place_fig(map, tetri->next, x, y));
}





// первые k элементов вектора a[] - это уже найденное частичное решение
// n - сколько всего элементов a[] нужно найти
// void backtrack (int a[], int k, int n)
// {
// 	int cands[MAX_CANDS];               // массив кандидатов
//
// 	if (is_a_solution(a, k, n))
// 		process_solution(a, k, n);      // печатает найденные решения
// 	else
// 	{
// 		int ncand = construct_candidates(a, k, n, cands);
// 		for (int i = 0; i < ncand; ++i)
// 		{
// 			a[k + 1] = cands[i];
// 			backtrack (a, k + 1, n);
// 		}
// 	}
// }
//
//
// int z = 0;
//
// char check(int *A, int n)
// {
// 	int i, j;
// 	for (i = 0; i < n; i++)
// 		for (j = 0; j < n; j++)
// 		{
// 			if (
// 				(A[i] == A[j]) &&
// 				(i != j) &&
// 				(A[i] != 0) &&
// 				(A[j] != 0)
// 			)
// 				return 0;
// 			if (
// 				((A[i] + i) == (A[j] + j)) &&
// 				(i != j) &&
// 				(A[i] != 0) &&
// 				(A[j] != 0)
// 			)
// 				return 0;
// 			if (
// 				((A[i] - i) == (A[j] - j)) &&
// 				(i != j) &&
// 				(A[i] != 0) &&
// 				(A[j] != 0)
// 			)
// 				return 0;
// 		}
// 	return 1;
// }
//
// void print_queen(int *A, int n)
// {
// 	fout<<"solutions:"<<(z + 1)<<endl;
// 	int i, j;
// 	for (i = 0; i < n; i++)
// 	{
// 		for (j = 0; j < n; j++)
// 			fout<<"--";
// 			fout<<"-\n";
// 		for (j = 1; j < A[i]; j++)
// 			fout<<"| ";
// 		fout<<"|f";
// 		for (j = A[i]; j < n; j++)
// 			fout<<"| ";
// 		fout<<"|\n";
// 	}
// 	for (j = 0; j < n; j++)
// 		fout<<"--";
// 		fout<<"-\n\n";
// 	z = z + 1;
// }
//
// void build(int *A, int n)
// {
// 	int *B;
// 	int i, k;
//
// 	for (k = 0; (A[k] != 0) && (k < n); k++);
// 		if (k>=n)
// 		{
// 			print_queen(A,n);
// 			return ;
// 		}
// 	B = (int *)malloc(n * sizeof(int));
// 	for (i = 0; i < k; i++)
// 		B[i] = A[i];
// 	for (i = k; i < n; i++)
// 		B[i] = 0;
// 	for (i = 1; i <= n; i++)
// 	{
// 		B[k] = i;
// 		if (check(B, n))
// 			build(B, n);
// 	}
// 	free(B);
// }
//
// int main()
// {
// 	int i, n;
// 	int *A;
//
// 	fin>>n;
// 	A = (int *)malloc(n * sizeof(int));
// 	for (i = 0; i < n; i++)
// 		A[i] = 0;
// 	build(A, n);
// 	fout<<"Variants:\n"<<z<<endl;
// 	free(A);
// 	return 0;
// 	getch();
// }
