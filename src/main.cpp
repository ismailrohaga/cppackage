#include <fmt/core.h>
#include <fmt/format.h>
#include <spdlog/spdlog.h>

#include <ftxui/component/screen_interactive.hpp>

#include "spdlog/sinks/rotating_file_sink.h"

using namespace ftxui;

int tab_selected = 0;

int main() {
  spdlog::set_level(spdlog::level::debug);

  std::shared_ptr<spdlog::logger> logger;
  try {
    auto max_size = MB * 5;
    auto max_files = 3;
    logger = spdlog::rotating_logger_mt(
        "logger", home + "/.cppackage/log/debug_log.txt", max_size, max_files);
    logger->flush_on(spdlog::level::debug);
    spdlog::set_default_logger(logger);
  } catch (const spdlog::spdlog_ex &ex) {
    fmt::println("Log init failed: {}", ex.what());
  }

  try {
    auto screen = ScreenInteractive::Fullscreen();
  } catch (std::exception &e) {
    logger->error("{}", e.what());
  }

  return 0;
}
