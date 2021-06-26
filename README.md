# holbertonschool-interview

This repository has interview projects from the Holberton School Advanced Programs (Machine Learning, AR/VR, Web Stack and Low Level). Programming languages for these projects: C, Python, and JavaScript.

## Requirements for Python projects
**General**
* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be interpreted/compiled on Ubuntu 14.04 LTS using `python3` (version 3.4.3)
* All your files should end with a new line
* The first line of all your files should be exactly `#!/usr/bin/python3`
* A `README.md` file, at the root of the folder of the project, is mandatory
* Your code should be documented
* Your code should use the `PEP 8` style (version 1.7.x)
* All your files must be executable

## Requirements for C projects
**General**
* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with `gcc 4.8.4` using the flags `-Wall` `-Werror` `-Wextra` and `-pedantic`
* All your files should end with a new line
* Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
* You are not allowed to use global variables
* No more than 5 functions per file
* In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file `*.h` (name varies with project).
* A `README.md` file, at the root of the folder of the project, is mandatory
* Don’t forget to push your header file
* All your header files should be include guarded

## Requirements for JavaScript projects
**General**
* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be interpreted on Ubuntu 14.04 LTS using `node` (version 10.14.x)
* All your files should end with a new line
* The first line of all your files should be exactly `#!/usr/bin/node`
* A `README.md` file, at the root of the folder of the project, is mandatory
* Your code should be `semistandard` compliant. [Rules of Standard](https://standardjs.com/rules.html) + [semicolons on top](https://github.com/standard/semistandard). Also as reference: [AirBnB style](https://github.com/airbnb/javascript)
* All your files must be executable
* The length of your files will be tested using `wc`
* You are not allowed to use `var`

## Example of Python Project
**Minimum Operations**

In a text file, there is a single character `H`. Your text editor can execute only two operations in this file: `Copy All` and `Paste`. Given a number `n`, write a method that calculates the fewest number of operations needed to result in exactly `n` `H` characters in the file.

- Prototype: `def minOperations(n)`
- Returns an integer
- If `n` is impossible to achieve, return `0`

Example:

`n = 9`

`H` => `Copy All` => `Paste` => `HH` => `Paste` =>`HHH` => `Copy All` => `Paste` => `HHHHHH` => `Paste` => `HHHHHHHHH`

Number of operations: `6`

```
$ cat 0-main.py
#!/usr/bin/python3
"""
Main file for testing
"""

minOperations = __import__('0-minoperations').minOperations

n = 4
print("Min number of operations to reach {} characters: {}".format(n, minOperations(n)))

n = 12
print("Min number of operations to reach {} characters: {}".format(n, minOperations(n)))

$ ./0-main.py
Min number of operations to reach 4 characters: 4
Min number of operations to reach 12 characters: 7
$
```

The most difficult challenges encountered are related to `C` interview problems, as they require a lot of ingenuity. I need to improve my understanding of pointers and some data structures. I also need to improve my experience with `JavaScript`. In `Python` I feel more confident than in other programming languages.

## Author:
Felipe Serna <1509@holbertonschool.com>

Chemical Engineer with skills in the design of industrial processes for the elaboration of new products with added value, taking into account economic, environmental and safety restrictions. Knowledge in water treatment, integrated management systems HSEQ and GLP. High interest in fats and oils, particularly for the manufacture of biodiesel. In his Chemical Engineering thesis he designed and built the first microreactor in Colombia for manufacturing biodiesel.

[LinkedIn profile](https://www.linkedin.com/in/felipesernabarbosa/)

[Twitter](https://twitter.com/felipesernabar1)

[Portfolio Project repository](https://github.com/felipeserna/Portfolio_Foundations)
