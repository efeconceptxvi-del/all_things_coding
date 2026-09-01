#include <iostream>

double getInput() {
    std::cout << "Enter the height of the tower in meters: ";
    double num{};
    std::cin >> num;
    return num;
}

double heightAt(int time, double iniHeight) {
    double g{ 9.8 };
    return iniHeight - (0.5 * g * time * time);
}

// A helper function to print the status at a given second
void printHeightAtTime(int seconds, double towerHeight) {
    double currentHeight { heightAt(seconds, towerHeight) };

    if (currentHeight > 0.0) {
        std::cout << "At " << seconds << " seconds, the ball is at height: " << currentHeight << " meters\n";
    } else {
        std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
    }
}

int main() {
    double height{ getInput() };

    printHeightAtTime(0, height);
    printHeightAtTime(1, height);
    printHeightAtTime(2, height);
    printHeightAtTime(3, height);
    printHeightAtTime(4, height);
    printHeightAtTime(5, height);

    return 0;
}