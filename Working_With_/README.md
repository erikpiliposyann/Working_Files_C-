# 📁 C File I/O Tasks

This project contains a collection of **10 File I/O exercises** implemented in the **C programming language**. The tasks focus on working with files, reading and writing data, processing text, and performing basic file manipulations.

---

## 📋 Tasks

### 1️⃣ Open an Existing File

Write a program that:

* Receives the name of an existing file as a command-line argument.
* Opens the file.
* Writes a message into it.
* Closes the file before exiting.

---

### 2️⃣ Create a New File

Write a program that:

* Receives a filename as input.
* Creates the file if it does not exist.
* Writes a message into the file.
* Closes the file before terminating.

---

### 3️⃣ Replace `"world"` with User's Name

Given a file containing:

```text
Hello, world!
```

The program should:

* Ask the user for a name.
* Replace `"world"` with the entered name.
* Save the updated content back to the file.

Example:

```text
Input:
Erik

Output in file:
Hello, Erik!
```

---

### 4️⃣ Count Character Occurrences

Write a program that:

* Receives a file pathname.
* Receives a character from the user.
* Counts how many times the character appears in the file.
* Prints the result.

---

### 5️⃣ Convert Uppercase Letters to Lowercase

Write a program that:

* Receives a file pathname.
* Converts every uppercase letter (`A-Z`) in the file to lowercase (`a-z`).
* Saves the modified content.

---

### 6️⃣ Count Digits in `a.txt`

Write a program that:

* Opens `a.txt`.
* Reads its entire contents.
* Counts all numeric digits (`0-9`).
* Writes the result into `b.txt`.

Example:

```text
a.txt:
abc12345xyz

b.txt:
5
```

---

### 7️⃣ Print File Information

Write a program that displays:

*  File size (in bytes)
*  Number of lines
*  Frequency of every character appearing in the file

---

### 8️⃣ Count Words

Write a program that:

* Opens `a.txt`.
* Reads its contents.
* Counts the total number of words.
* Prints the answer to the console.

---

### 9️⃣ Store Factorials in a File

Write a program that:

* Receives an integer `n`.
* Computes the factorials from `1` to `n`.
* Stores them in `factorials.txt`, separated by commas.

Example:

```text
Input:
5

factorials.txt:
1, 2, 6, 24, 120
```

---

### 🔟 Reverse File Contents

Write a program that:

* Opens `a.txt`.
* Reads its entire contents.
* Writes the reversed contents into `b.txt`.

Example:

```text
a.txt:
Hello

b.txt:
olleH
```

---

## 🛠️ Concepts Covered

* `fopen()`
* `fclose()`
* `fgetc()`
* `fputc()`
* `fgets()`
* `fputs()`
* `fprintf()`
* `fscanf()`
* `fseek()`
* `ftell()`
* `rewind()`
* Character processing (`ctype.h`)
* File creation and modification

---

## 🎯 Goal

The purpose of these exercises is to strengthen understanding of:

* 📂 File handling in C
* ✍️ Reading and writing text files
* 🔄 File modification
* 🔢 Text processing algorithms
* 📊 Basic data analysis using file operations

These tasks provide practical experience with standard C File I/O functions and common programming techniques.
