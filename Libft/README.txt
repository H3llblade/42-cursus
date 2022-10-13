--------------------------------------------------------------------------------------------
|                                           LIBFT                                          |
--------------------------------------------------------------------------------------------
Tested with: War Machine + Libft Tester
Updated: Oct 13 2022
DESCRIPTION: 	this project is about understanding the way these functions work,
		implementing and learning to use them. Your will create your own library.
--------------------------------------------------------------------------------------------
|                                    PATCH NOTES 0.0.8                                     |
--------------------------------------------------------------------------------------------
ADDED FUNCTION: ft_calloc.c
ADDED FUNCTION: MAKEFILE

UPDATED FUNCTION: NONE

GLOBAL UPDATE: Readme.txt file with a better Graphic experience

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
ft_strdup             ok             failure     compil. failed   compil. failed      KO
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

Total : 21/23

Part2 functions

FUNCTION              NORME          COMPIL.     FORBIDDEN FUNC.  TESTS               RESULT
ft_strmapi            ok             failure     compil. failed   compil. failed      KO
ft_substr             ok             failure     compil. failed   compil. failed      KO
ft_strjoin            ok             failure     compil. failed   compil. failed      KO
ft_strtrim            ok             failure     compil. failed   compil. failed      KO
ft_split              ok             failure     compil. failed   compil. failed      KO
ft_itoa               ok             failure     compil. failed   compil. failed      KO
ft_striteri           ok             failure     compil. failed   compil. failed      KO
ft_putchar_fd         ok             failure     compil. failed   compil. failed      KO
ft_putstr_fd          ok             failure     compil. failed   compil. failed      KO
ft_putendl_fd         ok             failure     compil. failed   compil. failed      KO
ft_putnbr_fd          ok             failure     compil. failed   compil. failed      KO

Total : 0/11

Bonus functions

FUNCTION              NORME          COMPIL.     FORBIDDEN FUNC.  TESTS               RESULT
ft_lstnew             ok             failure     compil. failed   compil. failed      KO
ft_lstdelone          ok             failure     compil. failed   compil. failed      KO
ft_lstclear           ok             failure     compil. failed   compil. failed      KO
ft_lstadd_front       ok             failure     compil. failed   compil. failed      KO
ft_lstadd_back        ok             failure     compil. failed   compil. failed      KO
ft_lstsize            ok             failure     compil. failed   compil. failed      KO
ft_lstiter            ok             failure     compil. failed   compil. failed      KO
ft_lstmap             ok             failure     compil. failed   compil. failed      KO
ft_lstlast            ok             failure     compil. failed   compil. failed      KO

Total : 0/9

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
ft_atoi	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK 13.OK 14.OK 15.OK 16.OK 17.OK 
ft_calloc	: 1.OK 2.MOK 3.OK 
