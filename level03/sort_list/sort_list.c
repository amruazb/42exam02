#include "list.h"
#include <stdlib.h>
#include <stdio.h>



void swap_nodes(t_list *a, t_list *b)
{
	int temp = a->data;
	a->data = b->data;
	b->data = temp;
}

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list *tmp = lst;
	while (lst->next != NULL)
	{
		if((*cmp)(lst->data, lst->next->data) == 0)
		{
			swap_nodes(lst, lst->next);
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	return tmp;
}

//int main only for testing purpose

/* int ascending(int a, int b)
{
	return a > b;
} */

/* void print_list(t_list *lst)
{
	while(lst)
	{
		printf("%d ", lst->data);
		lst = lst->next;
	}
	printf("\n");
} */

/* int main()
{
	t_list *head = malloc(sizeof(struct s_list));
	head->data = 38;
	head->next = malloc(sizeof(struct s_list));
	head->next->data = 45;
	head->next->next = malloc(sizeof(struct s_list));
	head->next->next->data = 21;
	head->next->next->next = malloc(sizeof(struct s_list));
	head->next->next->next->data = 76;
	head->next->next->next->next = NULL;

	printf("original list: ");
	print_list(head);

	t_list *sortedList = sort_list(head, ascending);

	printf("Sorted list: ");
	print_list(sortedList);

	while(head != NULL)
	{
		t_list *temp = head;
		head = head->next;
		free(temp);
	}
} */


