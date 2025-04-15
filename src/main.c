#include "raylib.h"

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 450

void Draw() {
  ClearBackground(RAYWHITE);
  DrawText("SAOENUTH USNTHOAEUSNHTUOENTHOETHNAUEO TANHUOES NAHTUOESNUHTOEASONUEHT", 0, 200, 20, LIGHTGRAY);
}

void Update() {
  // your updates heeh
}

int main(void) {
  InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Example window");
  SetTargetFPS(144);

  while (!WindowShouldClose()) {
    BeginDrawing();
    {
      Update();
      Draw();
    }
    EndDrawing();
  }

  CloseWindow();
}
