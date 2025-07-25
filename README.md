# cppackage 📦

**cppackage** is a Text User Interface (TUI) app built with C++ and [FTXUI](https://github.com/ArthurSonzogni/FTXUI?tab=readme-ov-file) to manage package managers (brew, npm, apt, cargo, chocolatey, u name it) and dotfiles across macOS, Windows (+WSL), and Linux. It’s designed to simplify workflows for developers switching between systems.

## Background

Created for a hackathon, **cppackage** solves the hassle of managing packages and dotfiles across operating systems. The idea was brainstormed with Grok which also helped craft this README. The code, though, is all my own work (IDK IF I CAN DO THIS SINCE IM RELATIVELY NEW IN CPP/FTXUI)

## Features (MVP)

- **Package Management**: List, search, install, and uninstall packages using `brew`.
- **Dotfile Management (NOT MVP)**: View and edit `.zshrc`.
- **Cross-Platform**: Targets macOS, Windows (WSL), and Linux.

> currently only target for macOS first

## Timeline

- **Day 1**: Set up C++ (g++, cmake), install FTXUI, and learn basics via tutorials (e.g., FTXUI’s GitHub examples). Build a simple TUI layout.
- **Day 2**: Code `brew` and `npm` package features. Test with a basic menu, UI should be just replicating lazygit layout.
- **Day 3**: Polish and if possible add dotfile support—read/write `.zshrc` using C++ file I/O (IDK IF THIS IS REALISTIC). Polish the TUI and test in mac.

## Install

> ninja is required

## Personal Note

I’m building this amidst wedding prep, driven by love for my soon-to-be wife and a passion to create something useful. Bismillah, I hope it shines!

## Acknowledgments

Thanks to Grok for brainstorming, research and README help.

Similar projects identified by Grok (yeah, i guess nothing is original these days):

- [bbrew](https://github.com/Valkyrie00/bold-brew)
- [lazynpm](https://github.com/jesseduffield/lazynpm)

> so what makes this project different? basically it's a unified TUI for package managers and dotfiles

And thanks to the following projects for helping me to jump start my C++/FTXUI journey:

- [lazylist](https://github.com/zhuyongqi9/lazylist)
- [git-tui](https://github.com/ArthurSonzogni/git-tui)

---

_Crafted with ❤️ for God, my future wife and of course for this hackathon._
