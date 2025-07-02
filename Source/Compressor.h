#pragma once
#include <vector>
#include <cstdint>


class Compressor {
public:
    static void Compress(const std::vector<uint8_t>& in, std::vector<uint8_t>& out);
    static void Decompress(const std::vector<uint8_t>& in, std::vector<uint8_t>& out);
};
