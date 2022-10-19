--------------------------------------------------------------------------------------------
|                                           LIBFT                                          |
--------------------------------------------------------------------------------------------
Tested with: 	War Machine + Libft Tester

Updated: 	Oct 18 2022

DESCRIPTION: 	This project is about understanding the way these functions work,
		implementing and learning to use them. Your will create your own library.
--------------------------------------------------------------------------------------------
|                                    PATCH NOTES 1.0.0                                     |
--------------------------------------------------------------------------------------------
ADDED FUNCTION: NONE

UPDATED FUNCTION: Edit on different functions according to norm and compiling.

GLOBAL UPDATE: Readme.txt file. MKO error will not valued during the Moulinette's test.

--------------------------------------------------------------------------------------------
|                                    COMPILING LIBFT                                       |
--------------------------------------------------------------------------------------------

rule all        rule $(NAME)     rule bonus       rule fclean     make re         libft.a
found           found            found            found           ok              found


Part1 functions

FUNCTION              NORME          COMPIL.     FORBIDDEN FUNC.  TESTS               RESULT
ft_memset             ok             success     clean            ✓✓✓✓                OK
ft_bzero              ok             success     clean            ✓✓                  OK
ft_calloc             ok             success     clean            ✓                   OK
ft_memcpy             ok             success     clean            ✓✓✓                 OK
ft_memmove            ok             success     clean            ✓✓✓✓✓               OK
ft_memchr             ok             success     clean            ✓✓✓✓✓✓              OK
ft_memcmp             ok             success     clean            ✓✓✓✓✓✓✓✓✓           OK
ft_strlen             ok             success     clean            ✓✓✓✓✓✓              OK
ft_strdup             ok             success     clean            ✓                   OK
ft_strlcat            ok             success     clean            ✓✓✓✓✓✓✓✓✓           OK
ft_strlcpy            ok             success     clean            ✓✓✓✓✓               OK
ft_strchr             ok             success     clean            ✓✓✓✓✓✓              OK
ft_strrchr            ok             success     clean            ✓✓✓✓✓✓✓✓            OK
ft_strnstr            ok             success     clean            ✓✓✓✓✓✓✓✓✓✓          OK
ft_strncmp            ok             success     clean            ✓✓✓✓✓✓✓✓✓✓✓         OK
ft_atoi               ok             success     clean            ✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓ OK
ft_isalpha            ok             success     clean            ✓✓✓✓✓✓✓             OK
ft_isdigit            ok             success     clean            ✓✓✓✓✓✓✓             OK
ft_isalnum            ok             success     clean            ✓✓✓✓✓✓✓             OK
ft_isascii            ok             success     clean            ✓✓✓✓✓✓✓✓            OK
ft_isprint            ok             success     clean            ✓✓✓✓✓✓✓             OK
ft_toupper            ok             success     clean            ✓✓✓✓✓✓✓             OK
ft_tolower            ok             success     clean            ✓✓✓✓✓✓✓             OK

Total : 23/23

Part2 functions

FUNCTION              NORME          COMPIL.     FORBIDDEN FUNC.  TESTS               RESULT
ft_strmapi            ok             success     clean            ✓                   OK
ft_substr             ok             success     clean            ✓✓✓✓✓               OK
ft_strjoin            ok             success     clean            ✓✓✓✓                OK
ft_strtrim            ok             success     clean            ✓✓✓✓✓               OK
ft_split              ok             success     clean            ✓✓✓✓✓✓              OK
ft_itoa               ok             success     clean            ✓✓✓✓✓✓✓✓✓✓          OK
ft_striteri           ok             success     clean            ✓                   OK
ft_putchar_fd         ok             success     clean            ✓✓✓✓✓✓✓             OK
ft_putstr_fd          ok             success     clean            ✓✓✓✓                OK
ft_putendl_fd         ok             success     clean            ✓✓✓✓                OK
ft_putnbr_fd          ok             success     clean            ✓✓✓✓✓✓✓✓✓           OK

Total : 11/11

Bonus functions

FUNCTION              NORME          COMPIL.     FORBIDDEN FUNC.  TESTS               RESULT
ft_lstnew             ok             success     clean            ✓✓✓                 OK
ft_lstdelone          ok             success     clean            ✓                   OK
ft_lstclear           ok             success     clean            ✓                   OK
ft_lstadd_front       ok             success     clean            ✓                   OK
ft_lstadd_back        ok             success     clean            ✓                   OK
ft_lstsize            ok             success     clean            ✓                   OK
ft_lstiter            ok             success     clean            ✓                   OK
ft_lstmap             ok             success     clean            ✓                   OK
ft_lstlast            ok             success     clean            ✓                   OK

Total : 9/9

--------------------------------------------------------------------------------------------
|                                    LIBFT TESTER                                          |
--------------------------------------------------------------------------------------------

[Mandatory]
ft_memset	: 1.OK 2.OK 
ft_bzero	: 1.OK 2.OK 3.OK 
ft_memcpy	: 1.OK 2.OK 
ft_memmove	: 1.OK 2.OK 3.OK 4.OK 
ft_memchr	: 1.OK 2.OK 3.OK 4.OK 5.OK 
ft_memcmp	: 1.OK 2.OK 3.OK 4.OK 5.OK 
ft_strlen	: 1.OK 2.OK 
ft_isalpha	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 
ft_isdigit	: 1.OK 2.OK 3.OK 4.OK 
ft_isalnum	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK 
ft_isascii	: 1.OK 2.OK 3.OK 4.OK 
ft_isprint	: 1.OK 2.OK 3.OK 4.OK 
ft_toupper	: 1.OK 2.OK 3.OK 4.OK 
ft_tolower	: 1.OK 2.OK 3.OK 4.OK 
ft_strchr	: 1.OK 2.OK 3.OK 4.OK 5.OK 
ft_strrchr	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 
ft_strncmp	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK 13.OK 14.OK 15.OK 16.OK 
ft_strlcpy	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 
ft_strlcat	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK 13.OK 14.OK 15.OK 16.OK 17.OK 
ft_strnstr	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK 13.OK 14.OK 
ft_atoi		: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK 13.OK 14.OK 15.OK 16.OK 17.OK 
ft_calloc	: 1.OK 2.MOK 3.OK 
ft_strdup	: 1.OK 2.MOK 3.OK 4.MOK 
ft_substr	: 1.OK 2.MKO 3.OK 4.MOK 5.OK 6.MKO 7.OK 8.MKO 9.OK 10.MKO 11.OK 12.MOK 13.OK 14.MOK 15.OK 16.MOK 
ft_strjoin	: 1.OK 2.MOK 3.OK 4.MOK 5.OK 6.MOK 7.OK 8.MOK 
ft_strtrim	: 1.OK 2.MOK 3.OK 4.MOK 5.OK 6.MOK 7.OK 8.MKO 9.OK 10.MKO 11.OK 12.MOK 13.OK 14.MKO 15.OK 16.MOK 
ft_split	: 1.MOK 2.OK 3.MOK 4.OK 5.MOK 6.OK 7.OK 8.OK 9.OK 10.OK 11.MOK 12.OK 13.OK 14.MOK 15.OK 16.MOK 17.OK 18.OK 19.MOK 20.OK 21.OK 22.MOK 23.OK 24.OK 25.MOK 26.OK 27.MOK 28.OK 29.MOK 30.OK 31.MOK 32.OK 33.MOK 34.OK 35.MOK 36.OK 37.MOK 38.OK 39.MOK 40.OK 41.MOK 42.OK 
ft_itoa		: 1.OK 2.MOK 3.OK 4.MOK 5.OK 6.MOK 7.OK 8.MOK 9.OK 10.MOK 11.OK 12.MOK 
ft_strmapi	: 1.OK 2.MOK 3.OK 4.MOK 
ft_putchar_fd	: 1.OK 
ft_putstr_fd	: 1.OK 
ft_putendl_fd	: 1.OK 
ft_putnbr_fd	: 1.OK 2.OK 3.OK 4.OK 5.OK 
ft_striteri	: 1.OK 2.OK 3.OK
[Bonus]
ft_lstnew	: 1.OK 2.OK 3.MOK
ft_lstadd_front	: 1.OK 2.OK 3.OK 4.OK 5.OK 
ft_lstsize	: 1.OK 2.OK 3.OK 
ft_lstlast	: 1.OK 2.OK 3.OK 4.OK 
ft_lstadd_back	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 
ft_lstdelone	: 
ft_lstclear	: 1.OK 
ft_lstiter	: 1.OK 2.OK 3.OK 4.OK 
ft_lstmap	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK
