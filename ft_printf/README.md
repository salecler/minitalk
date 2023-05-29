
#  ft_printf 🖨

Because ft_putnbr() and ft_putstr() aren’t enough.

This project is pretty straightforward, you have to recode printf. You will learn what is and how to implement variadic functions. Once you validate it, you will reuse this function in your future projects.
## 🛠 Installation

Clone the repository:

```bash
git clone https://github.com/salecler/ft_printf
```
    
## ⚙️ Deployment

To deploy this project run:

```bash
make
```
You can now create a main to use the program.

Then you can compile it:
````
gcc libftprintf.a main.c
````
## 🤠 Features

Printf:

- %c Prints a single character.

- %s Prints a string (as defined by the common C convention).

- %p The void * pointer argument has to be printed in hexadecimal format.

- %d Prints a decimal (base 10) number.

- %i Prints an integer in base 10.

- %u Prints an unsigned decimal (base 10) number.

- %x Prints a number in hexadecimal (base 16) lowercase format.

- %X Prints a number in hexadecimal (base 16) uppercase format.

- %% Prints a percent sign.

Make:
- re
- clean
- fclean

## 👨‍🏫 Instructions

You have to recode the printf() function from libc.
The prototype of ft_printf() is:
int ft_printf(const char *, ...);
Here are the requirements:

• Don’t implement the buffer management of the original printf().

• Your function has to handle the following conversions: cspdiuxX%

• Your function will be compared against the original printf().

• You must use the command ar to create your library.
Using the libtool command is forbidden.

• Your libftprintf.a has to be created at the root of your repository.

## 🔗 Links
[![github](https://img.shields.io/badge/my_portfolio-000?style=for-the-badge&logo=ko-fi&logoColor=white)](https://github.com/salecler?tab=repositories)
[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/sacha-leclercq-245584243/)


## 👋 Authors

- [@salecler](https://www.github.com/salecler)


## 💯 Grade
<a href="https://github.com/salecler/ft_printf"><img src="https://badge42.vercel.app/api/v2/cl4wihxp0008809migsvxuh4t/project/2649419" alt="salecler's 42 ft_printf Score" /></a>

