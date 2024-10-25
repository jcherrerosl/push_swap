#include "push_swap.h"

void	print_error(char *error_msg)
{
	ft_putendl_fd(error_msg, 2);
}

void    check_memory(void *ptr)
{
    if (!ptr)
    {
        print_error("Error: fallo en la memoria");
        exit(EXIT_FAILURE);
    }
}

static void	print_list(t_list **stack_a)
{
	t_list	*aux;

	aux = *stack_a;
	while (aux != NULL)
	{
		ft_putendl_fd((char *)aux->content, 1);
		aux = aux->next;
	}
}