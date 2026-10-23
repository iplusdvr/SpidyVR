# 0.4.3 validation

The release starts from this fork's 0.4.2 main branch and adds only Web
Slingshot and Better Climbing. The existing FOV toggle/slider, adjustable
recording smoothing, near clip controls, realistic rotation and landing
heading correction remain in place.

- Complete Windows Release build: game modules, OpenXR and launcher.
- All three CTest targets passed: 378 core checks, launcher and automatic rotation.
- All Python protocol test suites passed.
- Tests cover charged release, release timing, speed limits, cancellation,
  lost surfaces/focus/tracking, retained climbing progress, regripping,
  repeated samples, tracking gaps, OFF behavior and menu switches.
- No live-game/headset test of the two new mechanics yet. They default OFF.

The new switches are stored in the existing SpidySpectator.ini file under
the Webs section. The original fork's recording settings are kept in that
same file without changing their keys.
