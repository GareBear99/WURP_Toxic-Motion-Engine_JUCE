#include "wurp/SaturationStage.h"
#include <cmath>
namespace wurp {
float SaturationStage::process(float input, float drive) {
    return std::tanh(input * drive);
}
}
