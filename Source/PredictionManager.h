#pragma once
#include "Common.h"
#include "PhysicsEngine.h"

class PredictionManager {
public:
    void ApplyPrediction(PhysicsEngine& engine, uint32_t lastTick);
};
