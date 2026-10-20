# iplusd VR — SpidyVR fork

**A complete Windows package by [iplusd](https://github.com/iplusdvr), based on [SpidyVR](https://github.com/IlyaMez/SpidyVR) by Ilya Mezerowsky.**

## iplusd's additions

1. **iplusd's SpidyVR FOV Slider** — independent 40–150° horizontal desktop/recording FOV, persisted between sessions. Headset optics keep their own projection.
2. **iplusd's SpidyVR Near Clip Fix** — adjustable 1–10 cm VR clipping distance so the chest and nearby arms stay visible.
3. **iplusd's SpidyVR Realistic Swinging** — web motion and arm gestures drive continuous momentum rotation, including full turns, manual left-stick steering and an airborne A-button brake that smoothly returns upright.

[Download the player package](https://github.com/iplusdvr/SpidyVR/releases/latest) · [Report a fork issue](https://github.com/iplusdvr/SpidyVR/issues) · [Custom changes](docs/CUSTOM_CHANGES.md)

## Install

1. Download **iplusd-VR-<version>-win64.zip** from this fork's Releases. GitHub's source archives are for developers.
2. Extract the complete ZIP into a writable folder. No separate SpidyVR download or patch is needed.
3. Open **iplusd VR.cmd** (or **Spidy Launcher.exe**), connect the headset, close the game and choose **START VR**.
4. During gameplay, open **Settings → SPIDY VR**, the first settings category. The category is available in the pause menu while the mod is active.

Requires your own supported copy of Marvel's Spider-Man Remastered, a PC VR headset and an OpenXR runtime. Keep the game window in front; the game may pause when another window has focus. See the [SpidyVR players' guide](docs/PLAYERS.md) for base controls and troubleshooting.

## Realistic Swinging controls

- **Tuning:** rotation strength, speed cap, flight threshold, swing momentum, response, hand momentum, drag and minimum hand speed.
- **Air rotation brake:** when enabled, an airborne A press clears angular momentum and smoothly returns upright while retaining heading. Ground jumps retain their original behavior.
- **Manual steering:** the original FLIPS option enables left-stick airborne rotation and can be combined with the custom system.
- **First settings category:** the added FOV, near clip and rotation controls appear first in SPIDY VR; SPIDY VR is the first category in Settings.

Custom momentum rotation defaults OFF; enable REALISTIC FLIPS to use it. SpidyVR provides the renderer, tracked body, controls and underlying web movement solver.

## Credits and license

- **VR foundation:** SpidyVR by **Ilya Mezerowsky** and contributors.
- **Fork and custom features:** **iplusd** ([iplusdvr](https://github.com/iplusdvr)).
- **Inspiration:** **Blaze's Spider-Man mod for Blade & Sorcery**, particularly gesture-driven momentum rotation. No Blaze DLLs, extracted source or assets are distributed.

This modified distribution retains SpidyVR's [GPL v3 license](LICENSE), copyright notices and [third-party notices](THIRD_PARTY_NOTICES.md). This is an unofficial fork; the upstream author is not responsible for its modifications. Not affiliated with Marvel, Sony or Insomniac.

## Updates and development

The launcher uses **iplusdvr/SpidyVR** releases. New upstream changes must be merged, tested and released here. Installing an original SpidyVR release over this package would replace the custom features.

Base: SpidyVR v0.4.0, commit `c747c184dd97acaddf0db47f1a32f30cebe0d974`. Version numbers identify this fork's releases.

With Visual Studio 2022 C++ Build Tools and Windows SDK:

```powershell
./tools/bootstrap.ps1 -Observer
./tools/build.ps1 -Observer
./tools/package.ps1
```

Packaging creates the complete player ZIP. **Actions → Release** builds and packages releases on GitHub. Build checks do not replace a game/headset test before release. The [original README](docs/UPSTREAM_README.md) is retained as historical upstream documentation.

Türkçe: Tam paketi Releases bölümünden indirip çıkarın, **iplusd VR.cmd** dosyasını açın. Ayrıca SpidyVR kurmanız gerekmez. Oyun içinde **Ayarlar → SPIDY VR** ilk sıradadır. FOV, momentumlu takla ve havada A ile normale dönme seçenekleri bu menüdedir.
