#ifndef UTILS_H
#define UTILS_H
#include <cmath>
#include <random>
#include <tuple>

class Utils {
public:
    static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight) {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<int> distribX(0, gridWidth - 1);
        std::uniform_int_distribution<int> distribY(0, gridHeight - 1);

        int x = distribX(gen);
        int y = distribY(gen);

        return std::make_tuple(x, y);
    }

    static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2) {
        int x1, y1, x2, y2;
        std::tie(x1, y1) = pos1;
        std::tie(x2, y2) = pos2;

        double distance = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
        return distance;
    }
};

#endif // UTILS_H
