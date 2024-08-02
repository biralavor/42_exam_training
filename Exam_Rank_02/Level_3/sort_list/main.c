/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:17:45 by umeneses          #+#    #+#             */
/*   Updated: 2024/08/02 15:18:13 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "sort_list.c"
#include <stdio.h>
#include <stdlib.h>

int	cmp(int a, int b)
{
	return (a <= b);
}

t_list	*ft_lst_init(int data)
{
	t_list	*lst = (t_list*)malloc(sizeof(t_list));
	if (NULL == lst)
		return (NULL);
	lst->next = NULL;
	lst->data = data;
	return(lst);
}

t_list	*ft_lst_add(t_list *start, int data)
{
	t_list	*ready;

	ready = start;
	while(start->next != NULL)
		start = start->next;
	start->next = ft_lst_init(data);
	return(ready);
}

int	main(void)
{
	t_list	*lst = (t_list*)malloc(sizeof(t_list));

	if (NULL == lst)
		return (0);
	lst = NULL;
	lst = ft_lst_init(42);
	lst = ft_lst_add(lst, 15);
	lst = ft_lst_add(lst, 99);
	lst = ft_lst_add(lst, 21);

	int		idx = 0;
	t_list	*tmp = lst;
	while(lst && idx < 4)
	{
		printf("lst[%d]->data = %d\n", idx, lst->data);
		lst = lst->next;
		idx++;
	}
	printf("----------------\n");
	tmp = sort_list(lst, cmp);
	idx = 0;
	while(tmp && idx < 4)
	{
		printf("tmp[%d]->data = %d\n", idx, tmp->data);
		tmp = tmp->next;
		idx++;
	}
	return(0);
}
