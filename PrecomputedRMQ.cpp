#include "PrecomputedRMQ.h"
#include <cmath>

PrecomputedRMQ::PrecomputedRMQ(const RMQEntry* elems, std::size_t numElems) {
    table.resize(numElems, std::vector<std::size_t>(numElems));

    for (std::size_t i = 0; i < numElems; ++i) {
        table[i][i] = i;
        for (std::size_t j = i + 1; j < numElems; ++j) {
            if (elems[j].value() < elems[table[i][j - 1]].value()) {
                table[i][j] = j;
            } else {
                table[i][j] = table[i][j - 1];
            }
        }
    }
}

std::size_t PrecomputedRMQ::rmq(std::size_t low, std::size_t high) const {
    return table[low][high - 1]; // Adjusted index to match the half-open interval [low, high)
}
