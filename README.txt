
This is the README file of “List” abstract structure developed by
Galust Betkhemyan and Olya Yeritspokhyan.

CONTENTS
        1. AUTHOR
        2. INTRODUCTION
        3. PREREQUISITES
        4. BUILD
        5. DIRECTORY STRUCTURE
        6. USAGE
        7. DOCUMENTATION
        

1. AUTHOR
Galust Betkhemyan, Olya Yeritspokhyan.
E-mail: olya.yeritspokhyan@gmail.com
		galustbetkhemyan@gmail.com

Project Maintainer
	Galust Betkhemyan, Olya Yeritspokhyan.
	olya.yeritspokhyan@gmail.com
	galustbetkhemyan@gmail.com
	
2. INTRODUCTION
List or sequence is an abstract data type that represents a countable number of ordered values, where the same value may occur more than once. An instance of a list is a computer representation of the mathematical concept of a finite sequence.

3. PREREQUISITES
The following third party tools should be installed before the
compilation.

Tools:
g++
doxygen

4. BUILD
See the following commands in the project root directory.
Build the project
	make
	
Delete secondary files
	make clean
	
Run test
	make test

5. DIRECTORY STRUCTURE
- List – the top directory
	- src – should contain the source code of the project
	- makefile – the top makefile for building the project
	- docs -  for containing documentations
		/doxygen_config should contain file for doxygen configuration file

After building, the following directories should be created:
	- deps – should contain dependency files
	- obj – should contain oject files
	- bin – should contain executable file
	
	
6. USAGE
	As the name implies, lists can be used to store a list of elements. However, unlike in traditional arrays, lists can expand and shrink, and are stored dynamically in memory.

In computing, lists are easier to implement than sets. A finite set in the mathematical sense can be realized as a list with additional restrictions; that is, duplicate elements are disallowed and order is irrelevant. Sorting the list speeds up determining if a given item is already in the set, but in order to ensure the order, it requires more time to add new entry to the list. In efficient implementations, however, sets are implemented using self-balancing binary search trees or hash tables, rather than a list.

7. DOCUMENTATION
"make docs" command generates doxygen documentation.

Doxygen also generates documentation from C/C++ code comments.

To see the generated documentation use ./docs/doxygen/html/index.html.
