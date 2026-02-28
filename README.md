This collection of C programs demonstrates fundamental Linux systems programming concepts, specifically focusing on **process management** (forking and executing) and **file I/O operations**.

---

## 🛠 Project Components

### 1. Process Control & Execution

These files demonstrate how to create child processes and execute commands.

| File | Description |
| --- | --- |
| **`ex1.c`** | A wrapper that forks a child to execute a command with multiple arguments (`execvp`), then reports the child's exit status. |
| **`ex2.c`** | Executes two commands sequentially. The second command only runs if the first one finishes successfully (exit code 0). |
| **`ex3.c`** | Executes two commands sequentially, but with a twist: the second command runs only if the first one **fails** (non-zero exit code). |

---

### 2. Custom File Utilities

These programs reimplement standard Unix core utilities using low-level system calls like `open()`, `read()`, `write()`, and `close()`.

#### **File Manipulation**

* **`cpC.c`**: A simple implementation of the `cp` command. Copies content from a source file to a destination file.
* **`catC.c`**: Reads from standard input (stdin) and writes it directly to standard output (stdout).
* **`catMul.c`**: Concatenates and prints multiple files passed as command-line arguments.
* **`teeC.c`**: Mimics the `tee` command. It reads from stdin and writes simultaneously to both stdout and a specified file.

#### **Data Analysis**

* **`wcC.c`**: A basic version of the `wc` (word count) utility. It counts lines, words, and characters in a file.

---

## 🚀 Getting Started

### Compilation

You can compile any of these files using `gcc`:

```bash
gcc ex1.c -o ex1
gcc cpC.c -o my_cp

```

### Usage Examples

**Running a command through the wrapper:**

```bash
./ex1 ls -l /tmp

```

**Copying a file:**

```bash
./my_cp source.txt destination.txt

```

**Searching for text in a file:**

```bash
./grep "search_term" filename.txt
echo $?  # Returns 0 if found, 1 if not

```

---

