#include <iostream>
#include <vector>
#include <string>

// New function that generates color map data
std::vector<std::string> getColorMapData() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    std::vector<std::string> colorMapData;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            std::string entry = std::to_string(i * 5 + j) + " | " + majorColor[i] + " | " + minorColor[j];
            colorMapData.push_back(entry);
        }
    }
    return colorMapData;
}

// Original function that prints color map
int printColorMap() {
    std::vector<std::string> colorMapData = getColorMapData();

    for (const auto& entry : colorMapData) {
        std::cout << entry << "\n";
    }
    
    return colorMapData.size();
}

void testGetColorMapData() {
    std::vector<std::string> colorMapData = getColorMapData();

    std::vector<std::string> expectedData = {
        "0 | White | Blue", "1 | White | Orange", "2 | White | Green", "3 | White | Brown", "4 | White | Slate",
        "5 | Red | Blue", "6 | Red | Orange", "7 | Red | Green", "8 | Red | Brown", "9 | Red | Slate",
        "10 | Black | Blue", "11 | Black | Orange", "12 | Black | Green", "13 | Black | Brown", "14 | Black | Slate",
        "15 | Yellow | Blue", "16 | Yellow | Orange", "17 | Yellow | Green", "18 | Yellow | Brown", "19 | Yellow | Slate",
        "20 | Violet | Blue", "21 | Violet | Orange", "22 | Violet | Green", "23 | Violet | Brown", "24 | Violet | Slate"
    };

    for (size_t i = 0; i < expectedData.size(); ++i) {
        assert(colorMapData[i] == expectedData[i]);
    }

    assert(colorMapData.size() == expectedData.size());

    std::cout << "All tests passed for getColorMapData!\n";
}

int main() {
   
    printColorMap();
    testGetColorMapData();

    return 0;
}
