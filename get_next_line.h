/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji <araji@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:12:00 by araji             #+#    #+#             */
/*   Updated: 2024/12/05 13:30:58 by araji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <string.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct node
{
	char		*str;
	int			len;
	struct node	*next;
}	t_list;

int		get_line_len(t_list *tmp);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(char *content);
void	extract(t_list *lst, char **line);
char	*get_next_line(int fd);
int		found_newline(t_list *node);
void	lst_add_back(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst);
void	create_t_list(t_list **lst, int fd);
void	clean(t_list **lst);

#endif