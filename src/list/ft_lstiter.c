/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrouwer <vbrouwer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:35:06 by vbrouwer          #+#    #+#             */
/*   Updated: 2023/08/11 11:37:25 by vbrouwer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	current = lst;
	if (!f)
		return ;
	while (current)
	{
		f(current->content);
		current = current->next;
	}
}

// void func(void *ptr) {
// 	int *p;

// 	p = (int *)ptr;
// 	// int i = *(int *)(ptr);
// 	int i = 1;
// 	*p = (void*)i;
// 	// printf("hallo dit is %d\n", i);
// }
// void func2(void *ptr) {
// 	int i = *(int *)(ptr);
// 	// int i = 1;
// 	// ptr = (void *)&i;
// 	printf("hallo dit is %d\n", i);
// }

// int main(){
// 	int i = 0;
// 	t_list *lst = NULL;
// 	while (i < 10) {
// 		int *j = malloc(sizeof(int));

// 		*j = i;
// 		t_list *node = ft_lstnew(j);
// 		ft_lstadd_back(&lst, node);
// 		i++;
// 	}

// 	ft_lstiter(lst, func);
// 	ft_lstiter(lst, func2);

// 	return 0;
// }
