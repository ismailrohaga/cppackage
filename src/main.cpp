#include <spdlog/spdlog.h>

#include <ftxui/component/screen_interactive.hpp>

using namespace ftxui;

int tab_selected = 0;

int main() {
  auto screen = ScreenInteractive::Fullscreen();
  spdlog::info("Hello, World!");
}
