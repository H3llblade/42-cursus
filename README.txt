War Machine test on my FTLIB
Updated: Oct 7 2022
--------------------------------------------------------------------------------------------
|                                    COMPILING LIBFT                                       |
--------------------------------------------------------------------------------------------

rule all        rule $(NAME)     rule bonus       rule fclean     make re         libft.a
found           found            found            found           ok              found


Part1 functions

FUNCTION              NORME          COMPIL.     FORBIDDEN FUNC.  TESTS               RESULT
ft_memset             ok             success     clean            ✓✓✓✓                OK
ft_bzero              ok             success     clean            ✓✓                  OK
ft_calloc             ok             failure     compil. failed   compil. failed      KO
ft_memcpy             ok             failure     compil. failed   compil. failed      KO
ft_memmove            ok             failure     compil. failed   compil. failed      KO
ft_memchr             ok             success     clean            ✓✓✓✓✓✓              OK
ft_memcmp             ok             success     clean            ✓✓✓✓✓✓✓✓✓           OK
ft_strlen             ok             success     clean            ✓✓✓✓✓✓              OK
ft_strdup             ok             failure     compil. failed   compil. failed      KO
ft_strlcat            ok             success     clean            ✗✗✗✗✗✗✗✗✗           KO
ft_strlcpy            ok             success     clean            ✓✓✓✓✓               OK
ft_strchr             ok             success     clean            ✓✓✓✓✓✓              OK
ft_strrchr            ok             success     clean            ✓✓✓✓✗✓✓✗            KO
ft_strnstr            ok             success     clean            ✓✓✓✓✗✓✗✓✓✗          KO
ft_strncmp            ok             success     clean            ✓✓✓✓✓✓✓✓✓✓✗         KO
ft_atoi               ok             success     clean            ✓✓✓✓✓✓✗✗✗✗✓✓✓✓✓✓✓✓✓ KO
ft_isalpha            ok             success     clean            ✓✓✓✓✓✓✓             OK
ft_isdigit            ok             success     clean            ✓✓✓✓✓✓✓             OK
ft_isalnum            ok             success     clean            ✓✓✓✓✓✓✓             OK
ft_isascii            ok             success     clean            ✓✓✓✓✓✓✓✓            OK
ft_isprint            ok             success     clean            ✓✓✓✓✓✓✗             KO
ft_toupper            ok             success     clean            ✓✓✓✓✓✓✓             OK
ft_tolower            ok             success     clean            ✓✓✓✓✓✓✓             OK

Total : 13/23

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
