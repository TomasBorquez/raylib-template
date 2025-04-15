#define MATE_IMPLEMENTATION
#include "mate.h"

i32 main() {
  CreateConfig((MateOptions){.compiler = "clang"});

  StartBuild();
  {
    CreateExecutable((ExecutableOptions){.output = "main", .flags = "-Wall -ggdb"});

    AddFile("./src/main.c");

    AddIncludePaths("C:/raylib/include");
    AddLibraryPaths("C:/raylib/lib");
    LinkSystemLibraries("raylib", "opengl32", "gdi32", "winmm");

    String exePath = InstallExecutable();
    RunCommand(exePath);

    CreateCompileCommands();
  }
  EndBuild();
}
