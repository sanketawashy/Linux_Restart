# Linux_Restart
C code to reboot any linux system
Automatic System Restarter
This program allows you to automatically restart your system using a provided password. It is particularly useful for scenarios where you need to remotely restart a system or automate the restarting process.

## Prerequisites
This program is written in C and requires a C compiler to build and execute.
It utilizes the system function to execute shell commands, so it is designed to run on systems with a POSIX-compatible shell (such as Unix-like systems).
## Usage
Clone or download this repository to your local machine.

Compile the source code using a C compiler. For example:
gcc automatic_system_restarter.c -o automatic_system_restarter

Run the compiled program with administrative privileges. You may need to provide the sudo password.
./automatic_system_restarter

## Important Note
Security Warning: This program executes a system command with sudo privileges, so use it with caution. Ensure that you understand the implications of running commands with sudo and that you trust the source of the password provided.
## Author
SANKET AWASTHY - sanketawasthy@gmail.com
