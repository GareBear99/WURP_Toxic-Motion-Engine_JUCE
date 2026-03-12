# Build Notes

This package is JUCE/CMake oriented but JUCE is not bundled.

Suggested next steps:
1. Add JUCE
2. Convert PluginProcessor/Editor skeletons into AudioProcessor/Editor classes
3. Wire parameters with AudioProcessorValueTreeState
4. Add actual image asset loading
5. Build standalone first, then VST3/AU
