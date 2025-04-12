#define MATE_IMPLEMENTATION
#include "mate.h"

i32 main() {
  StartBuild();
  {
    CreateExecutable((Executable){.output = S("main"), .flags = S("-Wall -ggdb")});

    AddFile(S("./src/main.c"));

    AddIncludePaths(S("C:/raylib/include"), S("./src"));
    AddLibraryPaths(S("C:/raylib/lib"));
    LinkSystemLibraries(S("raylib"), S("opengl32"), S("gdi32"), S("winmm"));

    String exePath = InstallExecutable();
    RunCommand(exePath);

    CreateCompileCommands();
  }
  EndBuild();
}
