#include "Compressor.h"

void Compressor::Compress(const std::vector<uint8_t>& in, std::vector<uint8_t>& out) {
    // Dummy "compression"
    out = in;
}

void Compressor::Decompress(const std::vector<uint8_t>& in, std::vector<uint8_t>& out) {
    out = in;
}
