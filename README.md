# iplusd's SpidyVR fork

This fork adds three VR comfort and movement features to [SpidyVR](https://github.com/IlyaMez/SpidyVR), the Marvel's Spider-Man Remastered VR mod by Ilya Mezerowsky.

## What's added

1. **FOV Slider**

   Turn **FOV SLIDER** on, then use **SPECTATOR FOV** directly below it to set the desktop and recording view between 40° and 150°. Turn it off to restore the standard recording view. Your chosen amount is saved, and the headset's view is unchanged.

   **FOV SMOOTHING** softens recording camera rotation without locking the horizon. Enable it and use **SMOOTHING AMOUNT** (25–500 ms) to adjust how much it smooths. Headset tracking stays immediate. Start with 150 ms; higher values add more smoothing and delay.

2. **Near Clip Fix**

   Sets the VR near clipping distance between 1 cm and 10 cm, preventing Spider-Man's chest and nearby parts of his arms from disappearing when they get close to the camera.

3. **Realistic Swinging**

   Adds momentum-based air rotation driven by web movement and physical arm gestures. It supports continuous rotations beyond 360°, left-stick steering, adjustable strength and drag, and an optional airborne A-button brake that smoothly returns you upright.

These controls appear in the game's **Settings → SPIDY VR** menu.

Version 0.4.2 also fixes movement direction drifting after landing from momentum rotations. See the [release notes](docs/releases/v0.4.2-iplusd.1.md).

## HOW TO USE

1. Download the latest [release](https://github.com/iplusdvr/SpidyVR/releases)
2. Extract the ZIP to a folder
3. Start **Spidy Launcher.exe**
4. Connect your headset, close the game if it is already running, and select **START VR**
5. In the game, open **Settings → SPIDY VR** to adjust the new options
6. Realistic Swinging is disabled by default so make sure the **Realistic Flips: ON** to use the new swinging system

This is a complete fork, so a separate SpidyVR installation is not required. 
Installing an original SpidyVR package over the same folder will replace the fork's changes.

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
