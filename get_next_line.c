

#include "get_next_line.h"

static char	*ft_return(int i, char *result)
{
	if (i == 0)
		return (0);
	return (result);
}

static char	*ft_return_ret(char *result)
{
	if (result)
		free(result);
	return (0);
}

static char	*ft_join(char *result, char buf[BUFFER_SIZE])
{
	char	*temp;

	temp = ft_strjoin(result, buf);
	result = ft_strdup(temp);
	free(temp);
	return (result);
}

static void	ft_init(int *i, char buf[BUFFER_SIZE])
{
	buf[1] = '\0';
	i = 0;
}

char	*get_next_line(int fd)
{
	int		i;
	int		retour;
	char	buf[BUFFER_SIZE + 1];
	char	*result;

	result = NULL;
	ft_init(&i, buf);
	retour = read(fd, buf, 1);
	while (retour)
	{
		if (retour == -1)
			return (ft_return_ret(result));
		if (!result)
		{
			result = ft_calloc(1, sizeof(char));
			if (!result)
				return (0);
		}
		result = ft_join(result, buf);
		i++;
		retour = read(fd, buf, 1);
	}
	return (ft_return(i, result));
}

/* int		main(int ac, char **av)
{
	int		fd;
	char	*line = NULL;

	fd = open (av[1], O_RDONLY);
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s\n", line);
		free (line);
	}
	close (fd);
	return (fd == -1 ? EXIT_FAILURE : EXIT_SUCCESS);
} */