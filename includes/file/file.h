/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:53:27 by nkawaguc          #+#    #+#             */
/*   Updated: 2026/11/07 14:11:45 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_H
# define FILE_H

# include <stdbool.h>
# include <stddef.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <time.h>

/* 
Ref: https://pubs.opengroup.org/onlinepubs/
9799919799/basedefs/V1_chap03.html#tag_03_139
*/
typedef enum e_filetype
{
	FILE_UNKNOWN, // Unknown file type
	FILE_FIFO, // FIFO (named pipe)
	FILE_CHRDEV, // Character device
	FILE_DIRECTORY, // Directory
	FILE_BLKDEV, // Block device
	FILE_REGULAR, // Regular file
	FILE_SYMLINK, // Symbolic link
	FILE_SOCKET, // Socket
}	t_filetype;

// acl: Access Control List
// A feature to provide more fine-grained access control than
// traditional Unix file permissions.
// It allows you to specify permissions for individual users or 
// groups on a file or directory, beyond the standard owner/group/other model.
typedef enum e_acl_type
{
	ACL_T_NONE,
	ACL_T_CONTEXT_ONLY,
	ACL_T_YES,
	ACL_T_UNKNOWN,
}	t_acl_type;

typedef struct s_file
{
	char			*name; // file name (basename)
	char			*path; // Absolute path or relative path from the CWD
	char			*absolute_name;
	bool			is_operand; // true if this file is an operand
	t_filetype		type; // file type
	struct stat		st; // file status information
	bool			stat_ok; // true if the stat() call was successful
	struct timespec	btime; // birth time (creation time)
	bool			btime_ok; // true if the birth time is available
	char			*linkname; // target of the symbolic link
	mode_t			linkmode; // mode of the symbolic link
	bool			linkok; // true if the symbolic link is valid
	t_acl_type		acl_type; // type of ACL (Access Control List)
	char			*scontext; // SELinux security context
	bool			has_capability; // true if the file has capabilities
	int				quoted; // 0: no quotes, 1: single quotes, 2: double quotes
	size_t			width; // width of the file name for formatting
}	t_file;

#endif
