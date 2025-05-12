# Student Management System (Stack-Based, C Implementation)

This project implements a **Student Management System** using a **generic stack data structure** in C. The system allows for dynamic management of student records with full support for creation, cloning, printing, and deletion, using function pointers to provide data-type-specific logic.

---

## 🧠 Core Concepts

- 📦 **Stack Data Structure**  
  A generic stack implementation supporting:
  - `push`, `pop`, `peek`
  - `print`, `destroy`, and capacity management
  - User-defined functions for clone, destroy, and print operations

- 🎓 **Student Records**  
  Each student has:
  - Name (string)
  - Age (integer)
  - ID (integer)  
  Student-specific operations include:
  - Validation
  - Dynamic memory allocation
  - Safe cloning and destruction

---

## 📂 Project Structure

| File          | Description |
|---------------|-------------|
| `stack.c` / `stack.h` | Generic stack implementation (function-pointer driven) |
| `student.c` / `student.h` | Defines and manages `Student` structs and operations |
| `main.c`      | Entry point — manages student records using the stack |
| `Makefile`    | Automates compilation into `prog.exe` |

---

## 🚀 Features

- 🧱 Generic stack usable with any data type
- 🧍 Add, print, clone, and delete student records
- 🧼 Automatic memory cleanup via user-supplied `destroy` function
- 📋 Peek at top student without removing
- 🧪 Robust input validation

