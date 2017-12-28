/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: legrivel <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/24 01:18:53 by legrivel     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/27 00:41:32 by legrivel    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_ls.h"

static void	enoent_error(void)
{
	ft_putstr_fd("The file doesn't exist\n", 2);
}

static int	print_files(t_flist **list, char *options)
{
	options = NULL;
	if ((*list)->file->is_arg && !(*list)->file->exist)
		enoent_error();
	else
	{
		ft_putstr((*list)->file->filename);
		ft_putchar('\n');
	}
	return (0);
}

void		sort_print(t_flist **list_start, char *options)
{
	if (*list_start != NULL)
	{
		ft_putstr((*list_start)->file->path);
		ft_putchar('\n');
	}
	browse_flist(list_start, options, print_files);
}
