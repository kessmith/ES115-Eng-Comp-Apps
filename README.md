# ES115-Eng-Comp-Apps
This repository will store all code related to Spring 2025 ES 115 sections lead by Prof. Smith

# Chapter 1: Hello World

## How to Compile and Run `hello.cpp`

This guide explains how to compile and execute the `hello.cpp` program located in the `ch01/` directory.

## Prerequisites
- Ensure you have a C++ compiler installed, such as `g++` (part of GCC).
- Open a terminal or command prompt.

## Steps to Compile and Run

1. **Navigate to the directory containing `hello.cpp`**  
   ```bash
   cd ch01
   ```

2. **Compile the C++ Program**  
   Use `g++` to compile the program into an executable:  
   ```bash
   g++ hello.cpp -o hello
   ```
   - This will generate an executable file named `hello`.

3. **Run the Executable**  
   Execute the compiled program by running:  
   ```bash
   ./hello
   ```

## Alternative: One-Step Compilation and Execution
To compile and run in one command, use:  
```bash
g++ ch01/hello.cpp -o ch01/hello && ./ch01/hello
```

## Troubleshooting
- If `g++` is not found, install it using:
  - **Ubuntu/Debian**: `sudo apt install g++`
  - **MacOS (Homebrew)**: `brew install gcc`
  - **Windows (MinGW)**: Install [MinGW-w64](https://www.mingw-w64.org/)
- If you get permission errors while running the executable, try:
  ```bash
  chmod +x hello
  ```

## Notes
- You can change the output executable name by modifying the `-o` flag.
- If using Windows, the executable will be `hello.exe` instead of `hello`.

Happy coding! 🚀
