#include "raylib.h"

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 400

void update() {
}

void draw() {
  ClearBackground(RAYWHITE);
  DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
}

int main() {
  InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "raylib");

  SetTargetFPS(144);

  while (!WindowShouldClose()) {
    BeginDrawing();
    {
      draw();
    }
    EndDrawing();
  }

  CloseWindow();
}
