#include "Serializer.h"
#include <cstring>

void Serializer::SerializeState(const std::unordered_map<EntityID, Transform>& state, std::vector<uint8_t>& out) {
    out.clear();
    for (const auto& entry : state) {
        const EntityID& id = entry.first;
        const Transform& t = entry.second;

        out.insert(out.end(), reinterpret_cast<const uint8_t*>(&id), reinterpret_cast<const uint8_t*>(&id) + sizeof(id));
        out.insert(out.end(), reinterpret_cast<const uint8_t*>(&t), reinterpret_cast<const uint8_t*>(&t) + sizeof(Transform));
    }
}

void Serializer::DeserializeState(const std::vector<uint8_t>& in, std::unordered_map<EntityID, Transform>& out) {
    size_t offset = 0;
    while (offset + sizeof(EntityID) + sizeof(Transform) <= in.size()) {
        EntityID id;
        Transform t;

        std::memcpy(&id, in.data() + offset, sizeof(id));
        offset += sizeof(id);

        std::memcpy(&t, in.data() + offset, sizeof(t));
        offset += sizeof(t);

        out[id] = t;
    }
}
