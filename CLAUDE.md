# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

This is a ZMK firmware repository for the Charybdis wireless split keyboard with integrated trackball. The project uses GitHub Actions for building firmware and provides both Bluetooth and USB connectivity options.

## Key Commands and Development Workflow


### Building Firmware

The project uses GitHub Actions for building. To build:

1. Push changes to the repository
2. GitHub Actions will automatically build all configured targets
3. Download artifacts from the Actions tab

No local build environment is documented - all builds happen via CI/CD.

### Flashing Firmware

1. Double-press reset button on keyboard half
2. Copy the appropriate .uf2 file to the mounted NICENANO drive
3. Repeat for both halves

## Architecture and Key Components

### Directory Structure

- `/boards/shields/charybdis-bt/`: Bluetooth/USB shield configuration
- `/config/`: Main configuration files (keymaps, device config, build dependencies)
- `/keymap-drawer/`: Visual keymap generation configuration
- `/.github/workflows/`: CI/CD pipeline for automated builds

### Configuration Files

- `config/charybdis.conf`: Device settings (Bluetooth, power management, trackball)
- `config/charybdis.keymap`: Primary keymap with Swiss German layout and home row mods
- `build.yaml`: Build matrix defining firmware variants
- `config/west.yml`: ZMK dependencies including experimental pointer support

### Key Technical Details

- Uses experimental ZMK fork with pointer/input processor features
- PMW3610 trackball sensor with multiple modes (cursor, scroll, snipe)
- Right half is configured as the "central" device in split configuration
- Supports ZMK Studio for runtime configuration
- Home row mods implementation with specific timing configurations
- Multiple layers for Windows, Mac, and Gaming modes

### Build Variants

- QWERTY with Bluetooth/USB
- Settings reset firmware

When modifying keymaps, ensure compatibility with the trackball modes and maintain the layer switching combo structure.
