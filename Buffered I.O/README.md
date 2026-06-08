# 📁 C File Handling Exercises

This project contains a collection of **File I/O exercises** implemented in the **C programming language** using the standard C library.

The goal of these tasks is to practice opening, reading, writing, buffering, and processing files.

---

# 📋 Tasks

## 1️⃣ Write to a File and Read It Back

Create a program that:

* Opens a file using `fopen()` in **write mode**.
* Writes some text into the file.
* Closes the file.
* Opens the same file again in **read mode**.
* Reads and prints its contents to the screen.

### 📚 Concepts

* `fopen()`
* `fprintf()`
* `fclose()`
* `fgets()` / `fgetc()`

---

## 2️⃣ Read a Portion of an Existing File Twice

Create a program that:

* Opens an existing text file.
* Reads a specific portion of its contents.
* Performs the read operation twice.
* Prints both results to the console.

### 📚 Concepts

* `fread()`
* `fseek()`
* `rewind()`

---

## 3️⃣ Read a File Line by Line

Create a program that:

* Opens an existing text file containing multiple lines.
* Reads the file **line by line**.
* Prints every line to the terminal.

### 📚 Concepts

* `fgets()`
* Looping until `EOF`

---

## 4️⃣ Use a User-Space Buffer

Create a program that:

* Opens an existing text file.
* Assigns a custom buffer in user space using `setbuf()` or `setvbuf()`.
* Reads the file.
* Prints its contents to the screen.

### 📚 Concepts

* `setbuf()`
* `setvbuf()`
* File buffering

---

## 5️⃣ ⭐ Players Ranking System

Create a program that:

* Creates a file named `Players.txt`.
* Stores information about several players:

  * 👤 Player name
  * 🏆 Score earned in the game
* Reads all player data from the file.
* Finds the **Top 5 players** with the highest scores.
* Sorts them in descending order.
* Prints the ranking to the console.

### Example

```text
Players.txt

Erik 95
Anna 87
John 120
Mike 75
Kate 99
David 110
```

Output:

```text
Top 5 Players

1. John 120
2. David 110
3. Kate 99
4. Erik 95
5. Anna 87
```

### 📚 Concepts

* Structures (`struct`)
* File reading and writing
* Sorting algorithms
* Arrays
* `fscanf()`
* `fprintf()`

---

# 🛠️ Main Functions Used

* `fopen()`
* `fclose()`
* `fread()`
* `fwrite()`
* `fgetc()`
* `fputc()`
* `fgets()`
* `fputs()`
* `fprintf()`
* `fscanf()`
* `fseek()`
* `rewind()`
* `setbuf()`
* `setvbuf()`

---

# 🎯 Learning Objectives

By completing these exercises, you will gain practical experience with:

* 📂 File creation and opening
* ✍️ Reading and writing text files
* 📄 Line-by-line processing
* 💾 File buffering techniques
* 📊 Working with structured data
* 🔃 Sorting and ranking records
* 🧠 Standard C File I/O APIs

These tasks provide a solid foundation for working with files and data processing in C.
