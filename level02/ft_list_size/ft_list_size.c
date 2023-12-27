#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	struct s_list *next;
	void *data;
}	t_list;

int	 ft_list_size(t_list *begin_list)
{
	int size = 0;
	while(begin_list)
	{
		size++;
		begin_list = begin_list->next;
	}
	return size;
}

//call this function on sortlist level03
   // int size = ft_list_size(head);
   // printf("Size of the list: %d\n", size);
