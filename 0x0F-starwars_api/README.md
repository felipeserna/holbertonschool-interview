# 0x0F. Star Wars API
## Specializations - Interview Preparation ― Algorithms
## apis
## javascript

* The first line of all your files should be exactly `#!/usr/bin/node`
* Your code should be `semistandard` compliant.
* All your files must be executable
* You are not allowed to use `var`

## Tasks
0. Star Wars Characters

Write a script that prints all characters of a Star Wars movie:

* The first positional argument passed is the Movie ID - example: `3` = “Return of the Jedi”
* Display one character name per line **in the same order as the “characters” list in the** `/films/` **endpoint**
* You must use the [Star wars API](https://swapi-api.hbtn.io/)
* You must use the `request` module
```
alexa@ubuntu:~/0x0F$ ./0-starwars_characters.js 3
Luke Skywalker
C-3PO
R2-D2
Darth Vader
Leia Organa
Obi-Wan Kenobi
Chewbacca
Han Solo
Jabba Desilijic Tiure
Wedge Antilles
Yoda
Palpatine
Boba Fett
Lando Calrissian
Ackbar
Mon Mothma
Arvel Crynyd
Wicket Systri Warrick
Nien Nunb
Bib Fortuna
alexa@ubuntu:~/0x0F$
```
**Repo:**

* GitHub repository: `holbertonschool-interview`
* Directory: `0x0F-starwars_api`
* File: `0-starwars_characters.js`
