cmake_minimum_required(VERSION 3.18)
project(WURP VERSION 0.2.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Point this to your JUCE checkout if not using a package manager.
# add_subdirectory(external/JUCE)

# Example target layout only.
add_library(wurp_core
    src/core/PluginProcessor.cpp
    src/core/PluginEditor.cpp
    src/dsp/GasGenerator.cpp
    src/dsp/FormantFilter.cpp
    src/dsp/SaturationStage.cpp
    src/dsp/MotionEngine.cpp
    src/dsp/StereoDrift.cpp
    src/theme/ThemeLoader.cpp
    src/theme/AnimationLayer.cpp
    src/ui/ToxicChamberComponent.cpp
    src/ui/MacroStripComponent.cpp
    src/ui/SequencerComponent.cpp
)

target_include_directories(wurp_core PUBLIC include)
