#include "unity.h"
#include "libft.h"
#include <bsd/string.h>
#include <stdlib.h>
#include <ctype.h>

void	setUp(void)
{
// set stuff up here
}

void	tearDown(void)
{
// clean stuff up here
}

void	test_ft_atoi(void)
{
	TEST_ASSERT_EQUAL(atoi("-2147483648"), ft_atoi("-2147483648"));
	TEST_ASSERT_EQUAL(atoi("--2147483647"), ft_atoi("--2147483647"));
	TEST_ASSERT_EQUAL(atoi("++2147483647"), ft_atoi("++2147483647"));
	TEST_ASSERT_EQUAL(atoi("+2147483647"), ft_atoi("+2147483647"));
	TEST_ASSERT_EQUAL(atoi(" 	+2147483647"), ft_atoi(" 	+2147483647"));
	TEST_ASSERT_EQUAL(atoi(" 	-2147483647"), ft_atoi(" 	-2147483647"));
	TEST_ASSERT_EQUAL(atoi(" 	++2147483647"), ft_atoi(" 	++2147483647"));
	TEST_ASSERT_EQUAL(atoi(" 	--2147483647"), ft_atoi(" 	--2147483647"));
	TEST_ASSERT_EQUAL(atoi("%+2147483647"), ft_atoi("%+2147483647"));
	TEST_ASSERT_EQUAL(atoi(""), ft_atoi(""));
	TEST_ASSERT_EQUAL(atoi("0"), ft_atoi("0"));
	TEST_ASSERT_EQUAL(atoi("Hello"), ft_atoi("Hello"));
}

void	test_ft_bzero(void)
{
	char	str[30];

	strcpy(str, "Changing memory bytes to NULL");
	ft_bzero(str + 4, 3 * sizeof(str[0]));
	TEST_ASSERT_NOT_EQUAL('\0', *(str + 3));
	TEST_ASSERT_EQUAL('\0', *(str + 4));
	TEST_ASSERT_EQUAL('\0', *(str + 5));
	TEST_ASSERT_EQUAL('\0', *(str + 6));
	TEST_ASSERT_NOT_EQUAL('\0', *(str + 7));
	strcpy(str, "Changing memory bytes to NULL");
	bzero(str + 4, 3 * sizeof(str[0]));
	TEST_ASSERT_NOT_EQUAL('\0', *(str + 3));
	TEST_ASSERT_EQUAL('\0', *(str + 4));
	TEST_ASSERT_EQUAL('\0', *(str + 5));
	TEST_ASSERT_EQUAL('\0', *(str + 6));
	TEST_ASSERT_NOT_EQUAL('\0', *(str + 7));
}

void	test_ft_isalnum(void)
{
	TEST_ASSERT_TRUE(isalnum('0'));
	TEST_ASSERT_TRUE(ft_isalnum('0'));
	TEST_ASSERT_TRUE(isalnum('d'));
	TEST_ASSERT_TRUE(ft_isalnum('d'));
	TEST_ASSERT_TRUE(isalnum('Z'));
	TEST_ASSERT_TRUE(ft_isalnum('Z'));
	TEST_ASSERT_TRUE(isalnum('7'));
	TEST_ASSERT_TRUE(ft_isalnum('7'));
	TEST_ASSERT_FALSE(isalnum('='));
	TEST_ASSERT_FALSE(ft_isalnum('='));
	TEST_ASSERT_FALSE(isalnum('\n'));
	TEST_ASSERT_FALSE(ft_isalnum('\n'));
	TEST_ASSERT_FALSE(isalnum('\0'));
	TEST_ASSERT_FALSE(ft_isalnum('\0'));
}

void	test_ft_isalpha(void)
{
	TEST_ASSERT_TRUE(isalpha('a'));
	TEST_ASSERT_TRUE(ft_isalpha('a'));
	TEST_ASSERT_TRUE(isalpha('A'));
	TEST_ASSERT_TRUE(ft_isalpha('A'));
	TEST_ASSERT_TRUE(isalpha('Z'));
	TEST_ASSERT_TRUE(ft_isalpha('Z'));
	TEST_ASSERT_TRUE(isalpha('z'));
	TEST_ASSERT_TRUE(ft_isalpha('z'));
	TEST_ASSERT_FALSE(isalpha('@'));
	TEST_ASSERT_FALSE(ft_isalpha('@'));
	TEST_ASSERT_FALSE(isalpha('`'));
	TEST_ASSERT_FALSE(ft_isalpha('`'));
	TEST_ASSERT_FALSE(isalpha('{'));
	TEST_ASSERT_FALSE(ft_isalpha('{'));
	TEST_ASSERT_FALSE(isalpha('\0'));
	TEST_ASSERT_FALSE(ft_isalpha('\0'));
}

void	test_ft_isascii(void)
{
	TEST_ASSERT_TRUE(isascii(127));
	TEST_ASSERT_TRUE(ft_isascii(127));
	TEST_ASSERT_TRUE(isascii(0));
	TEST_ASSERT_TRUE(ft_isascii(0));
	TEST_ASSERT_FALSE(isascii(128));
	TEST_ASSERT_FALSE(ft_isascii(128));
	TEST_ASSERT_FALSE(isascii(-1));
	TEST_ASSERT_FALSE(ft_isascii(-1));
}

void	test_ft_isdigit(void)
{
	TEST_ASSERT_TRUE(isdigit('0'));
	TEST_ASSERT_TRUE(ft_isdigit('0'));
	TEST_ASSERT_TRUE(isdigit('9'));
	TEST_ASSERT_TRUE(ft_isdigit('9'));
	TEST_ASSERT_FALSE(isdigit('\0'));
	TEST_ASSERT_FALSE(ft_isdigit('\0'));
	TEST_ASSERT_FALSE(isdigit('/'));
	TEST_ASSERT_FALSE(ft_isdigit('/'));
	TEST_ASSERT_FALSE(isdigit(':'));
	TEST_ASSERT_FALSE(ft_isdigit(':'));
}

void	test_ft_isprint(void)
{
	TEST_ASSERT_TRUE(isprint(32));
	TEST_ASSERT_TRUE(ft_isprint(32));
	TEST_ASSERT_TRUE(isprint(126));
	TEST_ASSERT_TRUE(ft_isprint(126));
	TEST_ASSERT_FALSE(isprint(127));
	TEST_ASSERT_FALSE(ft_isprint(127));
	TEST_ASSERT_FALSE(isprint(31));
	TEST_ASSERT_FALSE(ft_isprint(31));
}

void	test_ft_memccpy(void)
{
	char	src[60];
	char	dest[50];

	strcpy(src, "Memc cpy copies from src to dest n bytes or until ch");
	strcpy(dest, "Heloooo!!");
	TEST_ASSERT_EQUAL((dest + 4), memccpy(dest, src, 'c', 5));
	TEST_ASSERT_EQUAL('o', *(dest + 4));
	TEST_ASSERT_EQUAL_STRING("Memcooo!!", dest);
	strcpy(dest, "Heloooo!!");
	TEST_ASSERT_EQUAL((dest + 4), ft_memccpy(dest, src, 'c', 5));
	TEST_ASSERT_EQUAL('o', *(dest + 4));
	TEST_ASSERT_EQUAL_STRING("Memcooo!!", dest);
	strcpy(dest, "Heloooo!!");
	TEST_ASSERT_NULL(memccpy(dest, src, 'y', 5));
	TEST_ASSERT_NULL(ft_memccpy(dest, src, 'y', 5));
}

void	test_ft_memchr(void)
{
	const char	s[] = "http://www.tutorialspoint.com";

	TEST_ASSERT_EQUAL(memchr(s, 't', 30), ft_memchr(s, 't', 30));
	TEST_ASSERT_EQUAL(memchr(s, '@', 30), ft_memchr(s, '@', 30));
	TEST_ASSERT_EQUAL(memchr(s, 'w', 5), ft_memchr(s, 'w', 5));
}

void	test_ft_memcmp(void)
{
	const char	s1[] = "abcd";
	const char	s2[] = "abcdef";
	const char	s3[] = "abc";

	TEST_ASSERT_TRUE(memcmp(s1, s2, 6) < 0);
	TEST_ASSERT_TRUE(ft_memcmp(s1, s2, 6) < 0);
	TEST_ASSERT_EQUAL(ft_memcmp(s1, s2, 4), memcmp(s1, s2, 4));
	TEST_ASSERT_TRUE(memcmp(s1, s3, 6) > 0);
	TEST_ASSERT_TRUE(ft_memcmp(s1, s3, 6) > 0);
}

void	test_ft_memcpy(void)
{
	char	src[60];
	char	dest[50];

	strcpy(src, "Mem cpy copies from src to dest n bytes");
	strcpy(dest, "Heloooo!!");
	TEST_ASSERT_EQUAL(dest, memcpy(dest, src, 7));
	TEST_ASSERT_EQUAL_STRING("Mem cpy!!", dest);
	strcpy(dest, "Heloooo!!");
	TEST_ASSERT_EQUAL(dest, ft_memcpy(dest, src, 7));
	TEST_ASSERT_EQUAL_STRING("Mem cpy!!", dest);
	strcpy(dest, "Heloooo!!");
	TEST_ASSERT_EQUAL(memcpy(dest, src, 5), ft_memcpy(dest, src, 5));
}

void	test_ft_memmove(void)
{
	char	s[50];

	strcpy(s, "memmove can be very useful......");
	memmove (s + 20, s + 15, 11);
	TEST_ASSERT_EQUAL_STRING("memmove can be very very useful.", s);
	strcpy(s, "memmove can be very useful......");
	ft_memmove (s + 20, s + 15, 11);
	TEST_ASSERT_EQUAL_STRING("memmove can be very very useful.", s);
	strcpy(s, "memmove can be very useful......");
	memmove (s, s + 3, 3);
	TEST_ASSERT_EQUAL_STRING("movmove can be very useful......", s);
	strcpy(s, "memmove can be very useful......");
	ft_memmove (s, s + 3, 3);
	TEST_ASSERT_EQUAL_STRING("movmove can be very useful......", s);
	TEST_ASSERT_EQUAL(memmove(s, s + 2, 15), ft_memmove(s, s + 2, 15));
}

void	test_ft_memset(void)
{
	char	s[50];

	strcpy(s, "Changing specific count of characters");
	memset(s, '@', 8);
	TEST_ASSERT_EQUAL_STRING("@@@@@@@@ specific count of characters", s);
	strcpy(s, "Changing specific count of characters");
	ft_memset(s, '@', 8);
	TEST_ASSERT_EQUAL_STRING("@@@@@@@@ specific count of characters", s);
	TEST_ASSERT_EQUAL(memset(s, 'y', 15), ft_memset(s, 'y', 15));
}

void	test_ft_strchr(void)
{
	char	s[50];

	strcpy(s, "Lorem ipsum dolor sit amet");
	TEST_ASSERT_EQUAL(strchr(s, 'u'), ft_strchr(s, 'u'));
	TEST_ASSERT_EQUAL(strchr(s, '@'), ft_strchr(s, '@'));
}

void	test_ft_strlcat(void)
{
	char	s1[30];
	char	s2[30];
	char	s3[30];
	size_t	i;
	size_t	k;

	strcpy(s1, "Lorem ipsum ");
	strcpy(s2, "Lorem ipsum ");
	strcpy(s3, "dolor sit amet");
	i = strlcat(s1, s3, 30);
	k = ft_strlcat(s2, s3, 30);
	TEST_ASSERT_EQUAL_STRING("Lorem ipsum dolor sit amet", s1);
	TEST_ASSERT_EQUAL_STRING("Lorem ipsum dolor sit amet", s2);
	TEST_ASSERT_EQUAL(i, k);
}
void	test_ft_strlcpy(void)
{
	char	s1[30];
	char	s2[30];
	char	s3[30];
	size_t	i;
	size_t	k;

	strcpy(s1, "Lorem ipsum ");
	strcpy(s2, "Lorem ipsum ");
	strcpy(s3, "dolor sit amet");
	i = strlcpy(s1, s3, 30);
	k = ft_strlcpy(s2, s3, 30);
	TEST_ASSERT_EQUAL_STRING("dolor sit amet", s1);
	TEST_ASSERT_EQUAL_STRING("dolor sit amet", s2);
	TEST_ASSERT_EQUAL(i, k);
}

void	test_ft_strlen(void)
{
	TEST_ASSERT_EQUAL(strlen(""), ft_strlen(""));
	TEST_ASSERT_EQUAL(strlen("Dolor"), ft_strlen("Dolor"));
	TEST_ASSERT_EQUAL(strlen("\n"), ft_strlen("\n"));
	TEST_ASSERT_EQUAL(strlen("\0"), ft_strlen("\0"));
}

void	test_ft_strncmp(void)
{
	const char	s1[] = "abcd";
	const char	s2[] = "abcdef";
	const char	s3[] = "abc";

	TEST_ASSERT_TRUE(strncmp(s1, s2, 6) < 0);
	TEST_ASSERT_TRUE(ft_strncmp(s1, s2, 6) < 0);
	TEST_ASSERT_EQUAL(ft_strncmp(s1, s2, 4), strncmp(s1, s2, 4));
	TEST_ASSERT_TRUE(strncmp(s1, s3, 6) > 0);
	TEST_ASSERT_TRUE(ft_strncmp(s1, s3, 6) > 0);
}

void	test_ft_strnstr(void)
{
	const char	s[] = "Find char and return pointer to it";

	TEST_ASSERT_EQUAL(strnstr(s, "", 35), ft_strnstr(s, "", 35));
	TEST_ASSERT_EQUAL(strnstr(s, "etu", 35), ft_strnstr(s, "etu", 35));
	TEST_ASSERT_EQUAL(strnstr(s, "$", 35), ft_strnstr(s, "$", 35));
}

void	test_ft_strrchr(void)
{
	char	s[50];

	strcpy(s, "Lorem ipsum dolor sit amet");
	TEST_ASSERT_EQUAL(strrchr(s, 'o'), ft_strrchr(s, 'o'));
	TEST_ASSERT_EQUAL(strrchr(s, '@'), ft_strrchr(s, '@'));
}

void	test_ft_tolower(void)
{
	TEST_ASSERT_EQUAL(tolower('G'), ft_tolower('G'));
	TEST_ASSERT_EQUAL(tolower('f'), ft_tolower('f'));
	TEST_ASSERT_EQUAL(tolower('\0'), ft_tolower('\0'));
	TEST_ASSERT_EQUAL(tolower('\n'), ft_tolower('\n'));
	TEST_ASSERT_EQUAL(tolower('@'), ft_tolower('@'));
}
void	test_ft_toupper(void)
{
	TEST_ASSERT_EQUAL(toupper('G'), ft_toupper('G'));
	TEST_ASSERT_EQUAL(toupper('f'), ft_toupper('f'));
	TEST_ASSERT_EQUAL(toupper('\0'), ft_toupper('\0'));
	TEST_ASSERT_EQUAL(toupper('\n'), ft_toupper('\n'));
	TEST_ASSERT_EQUAL(toupper('@'), ft_toupper('@'));
}

void	test_ft_calloc(void)
{
	int	*a;
	int	*b;

	a = calloc(5, sizeof(int));
	b = ft_calloc(5, sizeof(int));
	TEST_ASSERT_EQUAL_MEMORY(a, b, 5 * sizeof(int));
	free(a);
	free(b);
}

void	test_ft_strdup(void)
{
	char		*a;
	char		*b;
	const char	s[] = "Lorem ipsum dolor sit amet";

	a = strdup(s);
	b = ft_strdup(s);
	TEST_ASSERT_EQUAL_MEMORY(a, b, sizeof(s));
	free(a);
	free(b);
}

void	test_ft_substr(void)
{
	const char	s[] = "Take substring from any part of this one";
	char		*a;

	a = ft_substr(s, 5, 9);
	TEST_ASSERT_EQUAL_STRING("substring", a);
	free(a);
	a = ft_substr(s, 0, 4);
	TEST_ASSERT_EQUAL_STRING("Take", a);
	free(a);
	a = ft_substr(s, 40, 3);
	TEST_ASSERT_NULL(a);
	free(a);
}

void	test_ft_strjoin(void)
{
	const char	s1[] = "Take ";
	const char	s2[] = "Join";
	char		*a;

	a = ft_strjoin(s1, s2);
	TEST_ASSERT_EQUAL_STRING("Take Join", a);
	free(a);
	a = ft_strjoin(s2, s2);
	TEST_ASSERT_EQUAL_STRING("JoinJoin", a);
	free(a);
}

void	test_ft_strtrim(void)
{
	
}

int	main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_atoi);
	RUN_TEST(test_ft_bzero);
	RUN_TEST(test_ft_isalnum);
	RUN_TEST(test_ft_isalpha);
	RUN_TEST(test_ft_isascii);
	RUN_TEST(test_ft_isdigit);
	RUN_TEST(test_ft_isprint);
	RUN_TEST(test_ft_memccpy);
	RUN_TEST(test_ft_memchr);
	RUN_TEST(test_ft_memcmp);
	RUN_TEST(test_ft_memcpy);
	RUN_TEST(test_ft_memmove);
	RUN_TEST(test_ft_memset);
	RUN_TEST(test_ft_strchr);
	RUN_TEST(test_ft_strlcat);
	RUN_TEST(test_ft_strlcpy);
	RUN_TEST(test_ft_strlen);
	RUN_TEST(test_ft_strncmp);
	RUN_TEST(test_ft_strnstr);
	RUN_TEST(test_ft_strrchr);
	RUN_TEST(test_ft_tolower);
	RUN_TEST(test_ft_toupper);
	RUN_TEST(test_ft_calloc);
	RUN_TEST(test_ft_strdup);
	RUN_TEST(test_ft_substr);
	RUN_TEST(test_ft_strjoin);
	RUN_TEST(test_ft_strtrim);
	return (UNITY_END());
}
