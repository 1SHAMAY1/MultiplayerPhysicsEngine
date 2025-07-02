#pragma once
#include "Common.h"
#include <vector>

class Serializer {
public:
    static void SerializeState(const std::unordered_map<EntityID, Transform>& state, std::vector<uint8_t>& out);
    static void DeserializeState(const std::vector<uint8_t>& in, std::unordered_map<EntityID, Transform>& out);
};
