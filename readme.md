# Client DBUS Signal

This program is a simple dbus client signal implementation using sdbus-c++. It listens for signals on a specific dbus path and interface, and anywhere that signal is emitted, this program prints a message to the console.

## Dependencies

- sdbus-c++ : A high-level binding of dbus for C++
- fmt : A modern formatting library

## Program Execution

The program starts by setting up a dbus proxy at a specified destination and object path. It sets up a handler for a specified signal on a specified interface.

On catching the signal, it prints a message "Catch signal converter" to the console.

If any exceptions occur during the setup or while listening to the signal, it catches them and prints the exception message to the console. Then the program waits for 15 seconds before it ends.

## How to Build

### Prerequisites

You need to have the following packages installed on your system:

- A modern C++ compiler that supports C++14 such as `g++` or `clang++`
- The `cmake` build system
- The `sdbus-c++` and `libfmt-dev` libraries

### Building the Program

Here are the steps to build this program from the command line:

1. Open your terminal.
2. Navigate to the directory where you have this code using the `cd` command.
3. Make a new directory for the build, then navigate into it: `mkdir -p ./build && cd build`
4. Run cmake with the path to the directory that contains the source code: `cmake ..`
5. Run make to build the program: `cmake --build .`
6. The executable client_dbus_signal is now ready to run.

P.S: https://github.com/Kistler-Group/sdbus-cpp/discussions/449
https://github.com/Kistler-Group/sdbus-cpp/blob/v1.4.0/docs/using-sdbus-c%2B%2B.md