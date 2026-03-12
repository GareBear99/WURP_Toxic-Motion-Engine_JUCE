#include "wurp/PluginEditor.h"
#include <iostream>
namespace wurp {
void PluginEditor::paint() {
    std::cout << "Paint toxic chamber UI\n";
}
void PluginEditor::resized(int width, int height) {
    std::cout << "Resize UI to " << width << "x" << height << "\n";
}
}
