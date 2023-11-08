<!--HEADER-->
<h1 align="center"> Libft | 
 <picture>
  <source media="(prefers-color-scheme: dark)" srcset="https://cdn.simpleicons.org/42/white">
  <img alt="42" width=40 align="center" src="https://cdn.simpleicons.org/42/Black">
 </picture>
 Cursus 
  <img alt="Complete" src="https://raw.githubusercontent.com/Mqxx/GitHub-Markdown/main/blockquotes/badge/dark-theme/complete.svg">
</h1>
<!--FINISH HEADER-->

> This project involves creating your own library and re-coding certain functions from the 'C Standard Library' or libc. Libft aims to enhance understanding of the workings of basic functions, their implementation, and how to effectively use them.

<img align="right" width="150" src="https://github.com/josephcheel/readme/blob/main/resources/125_Success.png">

### What is the the project about
The project involves re-coding certain fundamental C functions. The first part covers functions from ***Libc***, while the second part includes functions that are either not present in libc or are part of it but in a different form.


> <picture>
>   <source media="(prefers-color-scheme: light)" srcset="https://raw.githubusercontent.com/Mqxx/GitHub-Markdown/main/blockquotes/badge/light-theme/danger.svg">
>   <img alt="Danger" src="https://raw.githubusercontent.com/Mqxx/GitHub-Markdown/main/blockquotes/badge/dark-theme/danger.svg">
> </picture><br>
>
> The project should compile the Mandatory and Bonus sections separately. However, in this version, they are unified to make use of the entire library more easily in other projects.

## General Instrucctions

<!-- > <picture>
>   <source media="(prefers-color-scheme: light)" srcset="https://raw.githubusercontent.com/Mqxx/GitHub-Markdown/main/blockquotes/badge/light-theme/warning.svg">
>   <img alt="Warning" src="https://raw.githubusercontent.com/Mqxx/GitHub-Markdown/main/blockquotes/badge/dark-theme/warning.svg">
> </picture><br>
>
> Map must have the ***.ber*** extension
 -->
* Makefile will compile your source files. Must have **'all'** and **'bonus'** rules for Mandatory and Bonus respectively. It must not relink.
* Program compilation must generate ***libft.a*** library
> <picture>
>   <source media="(prefers-color-scheme: light)" srcset="https://raw.githubusercontent.com/Mqxx/GitHub-Markdown/main/blockquotes/badge/light-theme/warning.svg">
>   <img alt="Warning" src="https://raw.githubusercontent.com/Mqxx/GitHub-Markdown/main/blockquotes/badge/dark-theme/warning.svg">
> </picture><br>
>
> After using <code>make</code> or <code>make all</code>, compiling with <code>make bonus</code> must not recompile mandatory files. (disabled)

## Mandatory Instrucctions
<h4> Part I&nbsp;&nbsp;|&nbsp; Libc functions</h4>
<div  align="center"><b>No External functions required</b></div>
<p align="center">
• isalpha
• isdigit
• isalnum
• isascii
• isprint
• strlen
• memset
• bzero
• memcpy
• memmove
• strlcpy
• strlcat
<br>• toupper
• tolower
• strchr
• strrchr
• strncmp
• memchr
• memcmp
• strnstr
• atoi
</p>
<div  align="center"><b>Malloc Function Allowed</b></div>
<p align="center">
• calloc
• strdup
</p>

<h4>Part II&nbsp;&nbsp;|&nbsp; Additional functions</h4>
<div  align="center"><b>Malloc Function Allowed</b></div>
<p align="center">
• ft_substr
• ft_strjoin
• ft_strtrim
• ft_itoa
• ft_strmapi
</p>


<div  align="center"><b>Write Function Allowed</b></div>

<p align="center">
• ft_putchar_fd
• ft_putstr_fd
• ft_putendl_fd
• ft_putnbr_fd
</p>

<div  align="center"><b>More functions...</b></div>
<p align="center">
• ft_split (Malloc & Free)
• ft_striteri (No External Function Allowed)
</p>

## Bonus Instrucctions
### What is Bonus about 
The **Bonus Part** introduces a new type of data structure known as a **Linked List** or **Lists**. All the functions in this part make use of this C struct to operate on this data.
* <code>void *content</code> stores the content
* <code>struct s_list *next</code> adresses the next node of the list or NULL if the next node is the last one.
<img width="1175" alt="t_list img" src="https://github.com/josephcheel/readme/blob/main/resources/libft/t_list.png">


<div  align="center"><b>Functions</b></div>
<p align="center">
• ft_lstnew(Malloc) • ft_lstadd_front • ft_lstsize • ft_lstlast • ft_lstadd_back • ft_lstdelone(Free) • ft_lstclear(Free) • ft_lstiter • ft_lstmap(Malloc & Free)
</p>

### How to compile it
> Compilation is done through makefile rules.

<div align="center">
<img width="500" src="https://github.com/josephcheel/readme/blob/main/resources/libft/Compilation.gif">
</div>

* If you use the <kbd>make</kbd> command, the executable file libft.a will appear.
* You can also use the <kbd>make bonus</kbd> command, which will generate the libft.a executable file (bonus functions disabled)."
```shell
> make
> make bonus (disabled)
```
