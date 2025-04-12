# About:
A very simple raylib template for C, it uses [mate.h](https://github.com/TomasBorquez/mate.h) as the build system and `ninja` files under the hood

## Usage:
- Install [ninja](https://github.com/ninja-build/ninja/releases).
- Install a C compiler for example [gcc](https://gcc.gnu.org/install/).
- Install [raylib](https://github.com/raysan5/raylib/releases), if on windows just download `raylib-5.5_win32_mingw-w64.zip` on `C:/raylib/` from the releases page.
- Compile `mate.c`:
```bash
gcc mate.c -o mate.exe && ./mate.exe
```
- After that you can just run `/mate.exe` and it will detect changes itself.

