# 🎉 Custom `printf` Implementation in C

## 📜 Overview
Welcome to the **Custom `printf`** project! This project is all about building your own version of the `printf` function in C. The standard `printf` function is a cornerstone of C programming, used for formatted output. By creating your own version, you'll gain a deeper understanding of string manipulation, variadic functions, and more. Let's get started! 🚀

## ✨ Features
This custom `printf` function includes:
- 🟢 **Conversion Specifiers**: `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X`, `%o`, `%%`.
- 🏷️ **Flags**: Supports `+`, `-`, `0`, and space for additional formatting.
- 📏 **Field Width and Precision**: Handles dynamic output formatting.
- ➕ **Positive and Negative Numbers**: Correctly handles signed and unsigned integers.
- 🔧 **Custom Output Functions**: Extensible for additional specifiers as needed.

## 🗂️ Project Structure
The project is organized into the following files:
- **_printf.c**: The core implementation of the custom `printf` function. It parses the format string and dispatches the appropriate output functions.
- **main.h**: Header file containing function prototypes and macros.
- **functions.c**: Contains helper functions used by `_printf`, such as those for handling specific specifiers.
- **utils.c**: Utility functions for common tasks like string manipulation and number conversion.
- **man_3_printf**: Manual page for the custom `printf` function, explaining its usage and supported features.

## 👥 AuthorS : SuzanFah
- **Collaborator Name: -https://github.com/SuzanFah
- **🎯 Acknowledgments**:
Special thanks to the creators of the original printf function and the C programming language. This project is inspired by their work and aims to provide a deeper understanding of how printf works under the hood.


