# Custom Spidy 0.4.0 — changes dated 2026-10-20

Fork and custom features: **iplusd** ([iplusdvr on GitHub](https://github.com/iplusdvr)).
VR foundation: **SpidyVR**, by **Ilya Mezerowsky**.
Momentum rotation behavior was inspired by **Blaze's Spider-Man mod for Blade & Sorcery**. This is an inspiration credit; no Blaze code, DLLs or assets are distributed.

- The original **SPIDY VR** settings tab is placed first in the game's Settings list, preserving the order and ids of the original game tabs.
- Launcher branding identifies iplusd and retains the upstream creator credit; updates are fetched from `iplusdvr/SpidyVR`, never from the unmodified upstream release channel.

Modified from IlyaMez/SpidyVR v0.4.0, commit c747c184dd97acaddf0db47f1a32f30cebe0d974. Original license and copyright notices are retained. Modifications are supplied under GPL-3.0.

- Independent recording-window projection with horizontal FOV 40–150 degrees, persisted and controlled from DISPLAY / SPECTATOR FOV.
- Adjustable 1–10 cm VR near clipping plane, persisted and controlled from DISPLAY / NEAR CLIP, so nearby body and arm geometry remains visible.
- Optional desktop FOV panel, with live settings resolved to the installation even when a hash-staged DLL is loaded. Other INI sections are preserved on save.
- Continuous angular-momentum rotation in the tracking space about the head, shared by view, eyes, hands and body. No automatic turn counter or canned somersault.
- Smooth tether-up alignment preserves heading, with angular acceleration and speed limits.
- Raw physical hand gestures add angular momentum, reverse gestures can brake it, and angular drag gradually removes it. Common tracking translation is excluded, virtual rotation cannot generate new gestures, and tracking jumps are rejected.
- Release can carry the existing rotation and a tangential orbit contribution. Translational speed dropping below the alignment threshold does not cancel arm momentum. Ground/surface recovery is smooth; short sample loss holds orientation.
- Menu controls: REALISTIC FLIPS, ROTATION STRENGTH, MAX ROTATION SPEED, MINIMUM FLIGHT SPEED, SWING MOMENTUM, ROTATION RESPONSE, HAND MOMENTUM, ANGULAR DRAG, MINIMUM HAND SPEED. Automatic rotation defaults OFF and can be combined with FLIPS for left-stick steering. AIR ROTATION BRAKE adds an airborne A-press recovery which removes angular momentum and smoothly returns upright while preserving heading; recovery completes even after the button is released. Ground-jump A holds and running-jump stick holds do not accidentally activate these controls.
- Earlier recording-camera smoothing and horizon lock were removed.

This is an independent procedural implementation adapted to Spidy's existing tracking/body paths. It is not a complete rigid-body angular-momentum simulation, and it does not alter the gameplay movement solver. The reference Blaze mod DLL was inspected locally to understand its behavior; none of its DLLs, extracted source or assets are included here.

Changed upstream files: CMakeLists.txt, include/spidy/game_tracking.hpp, include/spidy/vr_settings.hpp, src/game_tracking.cpp, src/vr_settings.cpp, src/game_menu.cpp, src/game_xr.cpp, src/stereo_probe.cpp, tests/core_tests.cpp. New files: include/spidy/spectator.hpp, include/spidy/realistic_flip.hpp, tests/realistic_flip_tests.cpp, this change notice.

Build with Windows SDK, MSVC C++20, CMake 3.24+; SPIDY_BUILD_OBSERVER=ON, SPIDY_BUILD_XR=ON, SPIDY_BUILD_LAUNCHER=OFF. Targets: spidy_stereo_probe, spidy_tests, spidy_automatic_tests. Keep XR ON to include SpidyXrStart and the remaining VR exports. Dependency sources/licenses are included or can be fetched with the original pinned bootstrap instructions.

Validation: 365/365 core/menu/integration tests, additional angular-momentum tests, Windows DLL loading and all 65 original exports. Synthetic gestures produce different unquantized angular travel, including more than a full turn for stronger input. New movement has not yet been validated in a live headset session.


