#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 1
# include "libft.h"

typedef struct		s_arr
{
	int				fd;
	char			*rest;
	struct s_arr	*next;
}					t_arr;

int					get_line(const int fd, char **line, char *rest);
int					get_next_line(const int fd, char **line);
char				*checkrest(char **p_n, char *rest);
t_arr				*newlist(const int fd);
#endif