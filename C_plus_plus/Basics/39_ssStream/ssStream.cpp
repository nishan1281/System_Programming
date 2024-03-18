//
// Created by nisha on 2/23/2024.
//

#include "iostream"
#include "sstream"

class Box{
private:
    int width, height, depth;

public:
    Box(int w, int h, int d) : width(w), height(h), depth(d){}

    //ssStream example with format

    std::string GetDimension() const{
        std::ostringstream dimension;
        dimension << "Width: " << this->width << ", Height: " << this->height << ", Depth: " << this->depth;
        return dimension.str();
    }
};

int main(){
    Box myBox(2,3,4);
    std::string dimensionString = myBox.GetDimension();
    std::cout << "Box Dimensions: " << dimensionString <<std::endl;
    return 0;
}