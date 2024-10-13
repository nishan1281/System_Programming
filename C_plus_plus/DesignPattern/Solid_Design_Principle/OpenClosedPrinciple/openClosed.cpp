//
// Created by nisha on 10/13/2024.
//

#include <vector>
#include "iostream"


enum class Color {red, green, blue};
enum class Size {small, medium, large};

struct Product
{
    std::string name;
    Color color;
    Size size;
};

struct ProductFilter
{
    std::vector<Product*> by_color(std::vector<Product*> items, Color color)
    {
        std::vector<Product*> result;
        for (Product* i : items)
            if (i->color == color)
                result.push_back(i);
        return result;
    }
};

int main()
{
    Product apple{"Apple", Color::green, Size::small};
    Product tree{"Tree", Color::green, Size::large};
    Product house{"House", Color::blue, Size::large};

    std::vector<Product*> items {&apple, &tree, &house};
    ProductFilter pf;
    std::vector<Product*> greenThings = pf.by_color(items, Color::green);

    for(Product* item : greenThings)
        std::cout << item->name << " is greeen" <<std::endl;

}

