/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42.tokyo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 14:25:53 by syamashi          #+#    #+#             */
/*   Updated: 2020/07/12 14:37:49 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(){
	char *str;
	char *copy;

	str = ft_strdup("abcdefg");
	copy = str;
	ft_memmove(str+2,str,5);
	printf("ft_memmove:%s\n",copy);
	printf("ft_memmove:ababcde\n\n");
	free(copy);

	char *big = ft_strdup("aaabc");
	char *little = ft_strdup("aabc");
	char *test;
	test=ft_strnstr(big, little, 5);
	printf("ft_strnstr:%s\n",test);
	printf("ft_strnstr:aabc\n\n");
	free(big);
	free(little);

	char *dst = ft_strdup("abc");
	char *src = ft_strdup("12345");
	int i=0;
	i=ft_strlcat(dst, src, 0);
	printf("ft_strlcat:return=%d, dst=%s\n",i,dst);
	printf("ft_strlcat:return=5, dst=abc\n");	
	i=ft_strlcat(dst, src, 2);
	printf("ft_strlcat:return=%d, dst=%s\n",i,dst);
	printf("ft_strlcat:return=7, dst=abc\n");
	i=ft_strlcat(dst, src, 4);
	printf("ft_strlcat:return=%d, dst=%s\n",i,dst);
	printf("ft_strlcat:return=8, dst=abc\n");
	i=ft_strlcat(dst, src, 6);
	printf("ft_strlcat:return=%d, dst=%s\n",i,dst);
	printf("ft_strlcat:return=8, dst=abc12\n\n");
	free(dst);
	free(src);

	dst = ft_strdup("abc");
	src = ft_strdup("12345");
	i=ft_strlcpy(dst, src, 0);
	printf("ft_strlcpy:return=%d, dst=%s\n",i,dst);
	printf("ft_strlcpy:return=5, dst=abc\n");	
	ft_strlcpy(dst, src, 2);
	printf("ft_strlcpy:return=%d, dst=%s\n",i,dst);
	printf("ft_strlcpy:return=5, dst=1\n");	
	ft_strlcpy(dst, src, 4);
	printf("ft_strlcpy:return=%d, dst=%s\n",i,dst);
	printf("ft_strlcpy:return=5, dst=123\n");	
	ft_strlcpy(dst, src, 10);
	printf("ft_strlcpy:return=%d, dst=%s\n",i,dst);
	printf("ft_strlcpy:return=5, dst=12345\n\n");
	free(dst);
	free(src);

	char **s;
	dst = ft_strdup("");
	s = ft_split(dst,'\0');
	printf("ft_split:s[0]=%s\n",s[0]);
	printf("ft_split:s[0]=(null)\n");
	free(dst);
	free(s);
	free(s[0]);	
	dst = ft_strdup("\0aaa");
	s = ft_split(dst,'\0');
	printf("ft_split:s[0]=%s\n",s[0]);
	printf("ft_split:s[0]=(null)\n");
	free(dst);
	free(s);
	free(s[0]);
	dst = ft_strdup("   a a ");
	s = ft_split(dst,' ');
	printf("ft_split:s[0]=%s, s[1]=%s, s[2]=%s\n",s[0],s[1],s[2]);
	printf("ft_split:s[0]=a, s[1]=a, s[2]=(null)\n\n");
	free(dst);
	free(s);
	free(s[0]);
	free(s[1]);
	free(s[2]);
}
