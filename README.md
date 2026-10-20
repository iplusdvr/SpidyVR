# iplusd VR - a SpidyVR fork

This fork adds three VR comfort and movement features to [SpidyVR](https://github.com/IlyaMez/SpidyVR), the Marvel's Spider-Man Remastered VR mod by Ilya Mezerowsky.

## What's added

1. **iplusd's SpidyVR FOV Slider**

   Sets the desktop and recording view to a horizontal FOV between 40° and 150°. It does not change the headset's lens projection, and the selected value is saved between sessions.

2. **iplusd's SpidyVR Near Clip Fix**

   Sets the VR near clipping distance between 1 cm and 10 cm, preventing Spider-Man's chest and nearby parts of his arms from disappearing when they get close to the camera.

3. **iplusd's SpidyVR Realistic Swinging**

   Adds momentum-based air rotation driven by web movement and physical arm gestures. It supports continuous rotations beyond 360°, left-stick steering, adjustable strength and drag, and an optional airborne A-button brake that smoothly returns you upright.

These controls appear first in the game's **Settings → SPIDY VR** menu, and the SPIDY VR category appears at the top of Settings.

## Using the fork

Download the complete player ZIP from [Releases](https://github.com/iplusdvr/SpidyVR/releases) when a build is available. GitHub's automatic source-code archives are intended for developers and do not contain a ready-to-run player package.

1. Extract the ZIP to a folder you can write to.
2. Start **Spidy Launcher.exe** or **Launch Spidy VR.cmd**.
3. Connect your headset, close the game if it is already running, and select **START VR**.
4. In the game, open **Settings → SPIDY VR** to adjust the new options. Changes take effect immediately.

This is a complete fork, so a separate SpidyVR installation is not required. Installing an original SpidyVR package over the same folder will replace the fork's changes.

## Realistic Swinging controls

- **REALISTIC FLIPS** enables momentum-based air rotation.
- Arm movement and web-swing momentum determine the direction and speed of rotation; there is no fixed flip animation or preset turn count.
- The original **FLIPS** option keeps manual left-stick air rotation available alongside the momentum system.
- With **AIR BRAKE** enabled, pressing A in the air clears rotational momentum and smoothly restores the normal upright view without changing your heading.
- Strength, speed limit, response, hand influence, drag and activation thresholds can be adjusted in the same menu.

Realistic Swinging is disabled by default so existing controls continue to behave as expected until it is enabled.

## Credits

- **Original VR mod and foundation:** [SpidyVR](https://github.com/IlyaMez/SpidyVR) by Ilya Mezerowsky and its contributors.
- **Fork and the three features above:** [iplusd](https://github.com/iplusdvr).
- **Movement inspiration:** Blaze's Spider-Man mod for Blade & Sorcery. No source code, binaries or assets from that mod are included.

This project remains licensed under [GPL-3.0](LICENSE) and retains SpidyVR's copyright and [third-party notices](THIRD_PARTY_NOTICES.md). It is an unofficial fork; the upstream author is not responsible for these changes. The project is not affiliated with Marvel, Sony Interactive Entertainment or Insomniac Games.

## Building from source

The project requires Visual Studio 2022 C++ Build Tools and a Windows SDK.

```powershell
./tools/bootstrap.ps1 -Observer
./tools/build.ps1 -Observer
./tools/package.ps1
```

The build keeps the three additions together on this fork's `main` branch. Each feature also has its own clean branch and upstream pull request:

- [FOV Slider pull request](https://github.com/IlyaMez/SpidyVR/pull/21)
- [Near Clip Fix pull request](https://github.com/IlyaMez/SpidyVR/pull/22)
- [Realistic Swinging pull request](https://github.com/IlyaMez/SpidyVR/pull/23)

More implementation details are available in [Custom changes](docs/CUSTOM_CHANGES.md). The [original SpidyVR README](docs/UPSTREAM_README.md) is preserved for the base mod's controls, requirements and troubleshooting.
