>>> 0-preprocessor
	=> gcc -E $CFILE -o c
	- runs a C file (names saved in a variable, CFILE) through the preprocessor and save the result into another file (c)

>>> 1-compiler
	=> gcc -c $CFILE
	- compiles a C file (names saved in a variable, CFILE) but does not link

>>> 3-assembler
	=> gcc -c -S $CFILE
	-  generates the assembly code of a C code and save it in an output file
