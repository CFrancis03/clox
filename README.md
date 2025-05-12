# clox

**clox** is a C++ port of the Lox tokenizer (scanner) from the book [Crafting Interpreters](https://craftinginterpreters.com/) by  Nystrom.

This project currently implements **only the tokenizing (scanning)** phase of the Lox language, converting source code into a sequence of tokens via a REPL interface.

Support for files and the rest of the interpreter pipeline is planned for future development.

---

## 🔍 Features

- REPL-style input: type in Lox code line-by-line
- Scanner/tokenizer converts input into:
  - Keywords (`if`, `var`, `while`, etc.)
  - Identifiers
  - Numbers (ints & floats)
  - Strings
  - Symbols (`+`, `-`, `==`, etc.)
- Clear formatted token output for debugging

---

## 🚧 Coming Soon

- File-based source scanning
- Parser and AST generation
- Runtime evaluation (interpreter)

---

## 🛠️ Build and Run

```bash
make
./lox
