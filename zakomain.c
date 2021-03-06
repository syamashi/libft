/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zakomain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42.tokyo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 14:25:53 by syamashi          #+#    #+#             */
/*   Updated: 2020/11/14 17:40:38 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>

int main(){
	char *str;
	char *copy;

	str = ft_strdup("abcdefg");
	copy = str;
	ft_memmove(str+2,str,5);
	printf("ft_memmove:%s\n",copy);
	printf("   memmove:ababcde\n\n");
	free(copy);

	char *big = ft_strdup("aaabc");
	char *little = ft_strdup("aabc");
	char *test;
	test=ft_strnstr(big, little, 5);
	printf("ft_strnstr:%s\n",test);
	printf("   strnstr:aabc\n\n");
	free(big);
	free(little);

	char *dst = ft_strdup("abc");
	char *src = ft_strdup("12345");
	int i=0;
	i=ft_strlcat(dst, src, 0);
	printf("ft_strlcat:return=%d, dst=%s\n",i,dst);
	printf("   strlcat:return=5, dst=abc\n");	
	i=ft_strlcat(dst, src, 2);
	printf("ft_strlcat:return=%d, dst=%s\n",i,dst);
	printf("   strlcat:return=7, dst=abc\n");
	i=ft_strlcat(dst, src, 4);
	printf("ft_strlcat:return=%d, dst=%s\n",i,dst);
	printf("   strlcat:return=8, dst=abc\n");
	i=ft_strlcat(dst, src, 6);
	printf("ft_strlcat:return=%d, dst=%s\n",i,dst);
	printf("   strlcat:return=8, dst=abc12\n\n");
	free(dst);
	free(src);

	dst = ft_strdup("abc");
	src = ft_strdup("12345");
	i=ft_strlcpy(dst, src, 0);
	printf("ft_strlcpy:return=%d, dst=%s\n",i,dst);
	printf("   strlcpy:return=5, dst=abc\n");	
	ft_strlcpy(dst, src, 2);
	printf("ft_strlcpy:return=%d, dst=%s\n",i,dst);
	printf("   strlcpy:return=5, dst=1\n");	
	ft_strlcpy(dst, src, 4);
	printf("ft_strlcpy:return=%d, dst=%s\n",i,dst);
	printf("   strlcpy:return=5, dst=123\n");	
	ft_strlcpy(dst, src, 10);
	printf("ft_strlcpy:return=%d, dst=%s\n",i,dst);
	printf("   strlcpy:return=5, dst=12345\n\n");
	free(dst);
	free(src);

	char **s;
	dst = ft_strdup("");
	s = ft_split(dst,'\0');
	printf("ft_split:s[0]=%s\n",s[0]);
	printf("   split:s[0]=(null)\n");
	free(dst);
	free(s);
	free(s[0]);	
	dst = ft_strdup("\0aaa");
	s = ft_split(dst,'\0');
	printf("ft_split:s[0]=%s\n",s[0]);
	printf("   split:s[0]=(null)\n");
	free(dst);
	free(s);
	free(s[0]);
	dst = ft_strdup("   a a ");
	s = ft_split(dst,' ');
	printf("ft_split:s[0]=%s, s[1]=%s, s[2]=%s\n",s[0],s[1],s[2]);
	printf("   split:s[0]=a, s[1]=a, s[2]=(null)\n\n");

	long long ll;
	printf("ULONG_MAX               :%lu\n", ULONG_MAX);
	printf(" LONG_MAX               : %ld\n", LONG_MAX);
	printf(" LONG_MIN               :%ld\n", LONG_MIN);
	printf("(unsigned long)LONG_MIN : %lu\n", (unsigned long)LONG_MIN);
	printf("(unsigned long)-LONG_MIN: %lu\n", (unsigned long)-LONG_MIN);
	printf("LLONG_MAX               : %lld\n", LLONG_MAX);
	printf("LLONG_MIN               :%lld\n\n",LLONG_MIN);

	ll = ft_atoi("2147483647");
	printf("ft_atoi 2147483647(INT_MAX):%lld\n", ll);
	ll = atoi("2147483647");
	printf("   atoi 2147483647(INT_MAX):%lld\n", ll);

	ll = ft_atoi("2147483648");
	printf("ft_atoi 2147483648:%lld\n", ll);
	ll = atoi("2147483648");
	printf("   atoi 2147483648:%lld\n", ll);

	ll = ft_atoi("2147483649");
	printf("ft_atoi 2147483649:%lld\n", ll);
	ll = atoi("2147483649");
	printf("   atoi 2147483649:%lld\n\n", ll);


	ll = ft_atoi("-2147483647");
	printf("ft_atoi -2147483647:%lld\n", ll);
	ll = atoi("-2147483647");
	printf("   atoi -2147483647:%lld\n", ll);

	ll = ft_atoi("-2147483648");
	printf("ft_atoi -2147483648(INT_MIN):%lld\n", ll);
	ll = atoi("-2147483648");
	printf("   atoi -2147483648(INT_MIN):%lld\n", ll);

	ll = ft_atoi("-2147483649");
	printf("ft_atoi -2147483649:%lld\n", ll);
	ll = atoi("-2147483649");
	printf("   atoi -2147483649:%lld\n", ll);

	ll = ft_atoi("-2147483650");
	printf("ft_atoi -2147483650:%lld\n", ll);
	ll = atoi("-2147483650");
	printf("   atoi -2147483650:%lld\n\n", ll);


	ll = ft_atoi("9223372036854775806");
	printf("ft_atoi 9223372036854775806:%lld\n", ll);
	ll = atoi("9223372036854775806");
	printf("   atoi 9223372036854775806:%lld\n", ll);

	ll = ft_atoi("9223372036854775807");
	printf("ft_atoi 9223372036854775807(LONG_MAX):%lld\n", ll);
	ll = atoi("9223372036854775807");
	printf("   atoi 9223372036854775807(LONG_MAX):%lld\n", ll);

	ll = ft_atoi("9223372036854775808");
	printf("ft_atoi 9223372036854775808:%lld\n", ll);
	ll = atoi("9223372036854775808");
	printf("   atoi 9223372036854775808:%lld\n", ll);

	ll = ft_atoi("9223372036854775809");
	printf("ft_atoi 9223372036854775809:%lld\n", ll);
	ll = atoi("9223372036854775809");
	printf("   atoi 9223372036854775809:%lld\n\n", ll);


	ll = ft_atoi("-9223372036854775807");
	printf("ft_atoi -9223372036854775807:%lld\n", ll);
	ll = atoi("-9223372036854775807");
	printf("   atoi -9223372036854775807:%lld\n", ll);

	ll = ft_atoi("-9223372036854775808");
	printf("ft_atoi -9223372036854775808(LONG_MIN):%lld\n", ll);
	ll = atoi("-9223372036854775808");
	printf("   atoi -9223372036854775808(LONG_MIN):%lld\n", ll);

	ll = ft_atoi("-9223372036854775809");
	printf("ft_atoi -9223372036854775809:%lld\n", ll);
	ll = atoi("-9223372036854775809");
	printf("   atoi -9223372036854775809:%lld\n", ll);

	ll = ft_atoi("-9223372036854775810");
	printf("ft_atoi -9223372036854775810:%lld\n", ll);
	ll = atoi("-9223372036854775810");
	printf("   atoi -9223372036854775810:%lld\n\n", ll);

	ll = ft_atoi("100223372036854775810");
	printf("ft_atoi 100223372036854775810:%lld\n", ll);
	ll = atoi("100223372036854775810");
	printf("   atoi 100223372036854775810:%lld\n", ll);

	ll = ft_atoi("22223372036854775810");
	printf("ft_atoi 22223372036854775810:%lld\n", ll);
	ll = atoi("22223372036854775810");
	printf("   atoi 22223372036854775810:%lld\n\n", ll);

	ll = ft_atoi("-100223372036854775810");
	printf("ft_atoi -100223372036854775810:%lld\n", ll);
	ll = atoi("-100223372036854775810");
	printf("   atoi -100223372036854775810:%lld\n", ll);

	ll = ft_atoi("-22223372036854775810");
	printf("ft_atoi -22223372036854775810:%lld\n", ll);
	ll = atoi("-22223372036854775810");
	printf("   atoi -22223372036854775810:%lld\n\n", ll);

	ll = ft_atoi("18446744073709551615");
	printf("ft_atoi 18446744073709551615(ULONG_MAX):%lld\n", ll);
	ll = atoi("18446744073709551615");
	printf("   atoi 18446744073709551615(ULONG_MAX):%lld\n", ll);

	ll = ft_atoi("18446744073709551616");
	printf("ft_atoi 18446744073709551616:%lld\n", ll);
	ll = atoi("18446744073709551616");
	printf("   atoi 18446744073709551616:%lld\n", ll);

	ll = ft_atoi("18446744073709551617");
	printf("ft_atoi 18446744073709551617:%lld\n", ll);
	ll = atoi("18446744073709551617");
	printf("   atoi 18446744073709551617:%lld\n", ll);

	ll = ft_atoi("36893488147419103130");
	printf("ft_atoi (ULONG_MAX * 2 - 100)36893488147419103130:%lld\n", ll);
	ll = atoi("36893488147419103130");
	printf("   atoi (ULONG_MAX * 2 - 100)36893488147419103130:%lld\n\n", ll);

	ll = ft_atoi("-000000000000000036893488147419103130");
	printf("ft_atoi (-ULONG_MAX * 2 - 100)-000000000000000036893488147419103130:%lld\n", ll);
	ll = atoi("-000000000000000036893488147419103130");
	printf("   atoi (-ULONG_MAX * 2 - 100)-000000000000000036893488147419103130:%lld\n\n", ll);

	printf("trim[aaabaaa, a]:[%s]\n\n", ft_strtrim("aaabaaa", "a"));
}
