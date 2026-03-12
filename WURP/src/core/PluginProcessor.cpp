#include "wurp/PluginProcessor.h"
#include "wurp/GasGenerator.h"
#include "wurp/FormantFilter.h"
#include "wurp/SaturationStage.h"
#include "wurp/MotionEngine.h"
#include "wurp/StereoDrift.h"

namespace wurp {
void PluginProcessor::prepareToPlay(double sampleRate, int /*samplesPerBlock*/) {
    sampleRate_ = sampleRate;
}

void PluginProcessor::processBlock(float* left, float* right, int numSamples) {
    GasGenerator gas;
    FormantFilter formant;
    SaturationStage sat;
    StereoDrift drift;
    for (int i = 0; i < numSamples; ++i) {
        float l = left[i];
        float r = right[i];
        l = gas.process(l, 0.2f, 0.3f);
        r = gas.process(r, 0.2f, 0.3f);
        l = formant.process(l, 0.4f, 0.3f, 0.2f);
        r = formant.process(r, 0.4f, 0.3f, 0.2f);
        l = sat.process(l, 1.25f);
        r = sat.process(r, 1.25f);
        drift.process(l, r, 0.6f, 0.2f);
        left[i] = l;
        right[i] = r;
    }
}

void PluginProcessor::releaseResources() {}
}
