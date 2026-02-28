This collection of C programs demonstrates fundamental Linux systems programming concepts, specifically focusing on **process management** (forking and executing) and **file I/O operations**.

---

## 🛠 Project Components

### 1. Process Control & Execution

These scripts demonstrate how to control the flow of execution based on child process exit codes and argument manipulation.

| File | Description |
| --- | --- |
| **`script-one`** | A multi-stage wrapper. It first runs a hardcoded grep, then executes a user-provided command. If that command succeeds (exit 0), it logs the command name to a specified file. |
| **`script-two`** | A manual implementation of grep. It reads a file character-by-character, reconstructs lines in a buffer, and uses strstr to find a pattern. It exits with 0 on the first match found, and 1 otherwise. |
| **`script-three`** | Implements Logical NOT-AND execution: The second command only runs if the first command fails (non-zero exit code). |
| **`script-four.c`** | A dynamic argument wrapper. It shifts the argument array argv to "hide" the wrapper's name and then uses execvp to run the rest of the arguments as a standalone command.|
| **`script-five`** | Implements Logical AND execution: The second command runs only if the first command finishes successfully (exit code 0).|


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

