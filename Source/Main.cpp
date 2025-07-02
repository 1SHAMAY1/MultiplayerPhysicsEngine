#include "PhysicsEngine.h"
#include "ReplicationManager.h"
#include "PredictionManager.h"
#include "Serializer.h"
#include "Compressor.h"
#include "Logger.h"

int main() {
    Logger::Info("Starting Multiplayer Physics Engine...");

    PhysicsEngine engine;
    ReplicationManager replicator;
    PredictionManager predictor;

    engine.AddEntity(1, { {0, 0, 0}, {1, 0, 0} });

    const float dt = 1.f / 60.f;

    for (int tick = 0; tick < 100; ++tick) {
        Logger::Info("Tick: " + std::to_string(tick));
        engine.Update(dt);

        auto state = engine.GetState();
        predictor.ApplyPrediction(engine, tick - 1); // dummy

        std::vector<uint8_t> serialized;
        Serializer::SerializeState(state, serialized);

        std::vector<uint8_t> compressed;
        Compressor::Compress(serialized, compressed);

        Logger::Info("Compressed Size: " + std::to_string(compressed.size()) + " bytes");
    }

    return 0;
}
