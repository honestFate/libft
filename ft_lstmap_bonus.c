#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*data;
	t_list	*new_list;

	new_list = NULL;
	while (lst)
	{
		data = f(lst->content);
		if (data)
		{
			if (new_list)
				new_list->next = ft_lstnew(data);
			else
				new_list = ft_lstnew(data);
		}
		else
		{
			del(lst->content);
			free(lst->content);
		}
	}
}
