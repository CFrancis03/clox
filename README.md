# Clox++: A C++ Port of the Lox Interpreter

This is a C++ implementation of the **Lox** interpreter from Bob Nystrom's book _Crafting Interpreters_. It is a work-in-progress, faithful port of the original Java-based interpreter to a lower-level language for educational purposes.

## 📚 About

_Lox_ is a dynamically-typed, object-oriented programming language implemented in Chapter 4 onward of *Crafting Interpreters*. This project reimplements the same language and interpreter logic in modern C++17.

The goal is to better understand:
- Lexical analysis and tokenization
- Interpreter design
- Porting high-level designs to systems-level code

## 🔧 Build Instructions

Make sure you have `g++` and `make` installed. Then run:

```bash
make
./lox

