/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: legrivel <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/11 16:32:52 by legrivel     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/11 23:22:23 by legrivel    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_ls.h"
#include <stdio.h>

static void	free_stuff(char *options, t_arg *files)
{
	size_t	i;

	if (options != NULL)
		free(options);
	i = 0;
	// while (files[i])
	// 	ft_strdel(&files[i++]);
	free(files);
}

int			main(int argc, char **argv)
{
	t_arg	*files;
	char	*options;

	if ((options = get_options(argc, &argv[1])) == NULL)
		return (-1);
	if (get_all_files(argc, argv, options, &files) == -1)
		return (-1);
	// ft_puttab(files);
	free_stuff(options, files);
	return (0);
}
