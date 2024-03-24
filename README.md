# String Datatype Implementation in C++

This project implements a string datatype in C++ that provides functionalities similar to the standard string class. It includes default, parameterized, and copy constructors, as well as overloaded operators for various string operations. Additionally, friend functions are used to implement functionalities such as finding string length, copying strings, concatenating strings, and comparing strings.

## Constructors

- **Default Constructor:** Initializes an empty string.

- **Parameterized Constructor:** Initializes a string with the given character array.

- **Copy Constructor:** Creates a new string object by copying the contents of another string object.

## Overloaded Operators

- **Assignment Operator (=):** Copies the content of a string to one or more string.

- **Subscript Operator ([]):** Accesses individual characters of a string.

- **Stream Insertion Operator (<<):** Outputs one or more string to an output stream.

- **Stream Extraction Operator (>>):** Inputs one or more string from an input stream. Input is taken character by character into a file. Then dynamic memory is allocated for the string and contents of the file is copied into the string.

- **Concatenation Operator (+):** Concatenates two or more strings.

- **Comparison Operators (<, >, <=, >=, ==, !=):** Compares two strings lexicographically.

## Friend Functions

- **str_len:** Calculates the length of a string.

- **str_cpy:** Copies one string to another.

- **str_ncpy:** Copies a specified number of characters from one string to another.

- **str_cat:** Concatenates two strings.

- **str_ncat:** Concatenates a specified number of characters from one string to another.

- **str_cmp:** Compares two strings.

- **str_ncmp:** Compares a specified number of characters of two strings.

- **str_str:** Finds the first occurrence of a substring within a string.

- **str_chr:** Finds the first occurrence of a character within a string.

- **str_rchr:** Finds the last occurrence of a character within a string.

- **str_upper:** Converts all characters of a string to uppercase.

- **str_lower:** Converts all characters of a string to lowercase.

- **str_rev:** Reverses the characters of a string.

- **str_toggle:** Toggles the case of characters in a string.
