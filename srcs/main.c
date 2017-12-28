/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: legrivel <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/23 23:34:58 by legrivel     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/26 22:40:03 by legrivel    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_ls.h"

int		main(int argc, char **argv)
{
	t_flist	*list;
	char	*options;

	if ((options = get_options(argc, &(argv[1]))) == NULL)
		return (-1);
	if ((list = get_args_list(argc, &(argv[1]))) == NULL)
		return (-1);
	if (browse_flist_path(&list, options, "", read_dir) == -1)
	{
		printf("Error !\n");
		return (-1);
	}
	// print_result(list);
	// browse_flist(&list, options, free_args);
	free(options);
	return (0);
}
