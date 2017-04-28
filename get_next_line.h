/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiad <schiad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 17:28:33 by schiad            #+#    #+#             */
/*   Updated: 2016/03/29 16:23:01 by schiad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft/includes/libft.h"
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

# define BUFF_SIZE 10

typedef	struct		s_desc
{
	int				tape_head;
	int				nb_char;
	int				fd;
	char			*line;
	struct s_desc	*next;
}					t_desc;

int					get_next_line(int const fd, char **line);
t_desc				*ft_search_fd(int fd, t_desc *first);
t_desc				*ft_new_fd(int fd, t_desc *first);
int					ft_cache_fd(char **line_return, t_desc *desc);
void				ft_find_line(int *found, int *iter
		, char **tmp, t_desc *desc);

#endif
