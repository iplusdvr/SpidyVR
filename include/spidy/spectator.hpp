#pragma once
#include "realistic_flip.hpp"
namespace spidy::spectator {
int getFov();
bool getEnabled();
void setEnabled(bool enabled);
bool getSmoothing();
void setSmoothing(bool enabled);
int getSmoothingMs();
void setSmoothingMs(int amount);
void setFov(int degrees);
int getNearClipMm();
void setNearClipMm(int millimetres);
RealisticFlipSettings automaticSettings();
void saveAutomaticSettings(RealisticFlipSettings);
}
