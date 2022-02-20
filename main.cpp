#include <iostream>
#include <vector>

int main() {
    float m[4][4];
    std::vector  <float> v{};
    std::vector  <float> r{};

    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            std::cout << "Enter next elements matrix M - ";
            std::cin >> m[i][j];

        }
    }
    for (int i=0; i<4; i++){
            float element=0;
            std::cout << "Enter next elements Vector V - ";
            std::cin >> element;
            v.push_back(element);
            r.push_back(0);
        }

    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            r[i] += v[i]*m[i][j];
            //std::cout << r[i] << " ";

        }
        //std::cout << std::endl;
    }
    for (int i=0; i<4; i++){
        std::cout << r[i] << " ";
    }


    return 0;
}
