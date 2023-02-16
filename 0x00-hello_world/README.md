>>> 0-preprocessor
	=> gcc -E $CFILE -o c
	- runs a C file (names saved in a variable, CFILE) through the preprocessor and save the result into another file (c)

>>> 1-compiler
	=> gcc -c $CFILE
	- compiles a C file (names saved in a variable, CFILE) but does not link

>>> 2-assembler
	=> gcc -c -S $CFILE
	-  generates the assembly code of a C code and save it in an output file

>>> 3-name
	=> gcc $CFILE -o cisfun
	- compiles a C file and creates an executable named cisfun

>>> 4-puts.c
	- prints exactly "Programming is like building a multilingual puzzle, followed by a new line

>>> 5-printf.c
	- prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line

>>> 6-size.c
	- prints the size of various types on the computer it is compiled and run on

>>> 100-intel
	- generates the assembly code (Intel syntax) of a C code and save it in an output file 
