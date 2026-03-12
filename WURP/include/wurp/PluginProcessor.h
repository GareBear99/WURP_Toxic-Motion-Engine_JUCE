#pragma once
namespace wurp {
class PluginProcessor {
public:
    void prepareToPlay(double sampleRate, int samplesPerBlock);
    void processBlock(float* left, float* right, int numSamples);
    void releaseResources();
private:
    double sampleRate_ = 44100.0;
};
}
