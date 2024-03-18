//
// Created by nisha on 2/14/2024.
//
#include "iostream"
#include "vector"
#include "map"
#include "unordered_map"
#include "cstdint"

//all variables are public as used struct
struct CityRecord{
    std::string Name;
    uint64_t Population;
    double Latitude, Longitude;

    //below constructor called "initializer list constructor". Require for emplace_back

//    CityRecord(std::string name_, uint64_t population_, double latitude_, double longitude_)
//            : Name(std::move(name_)), Population(population_), Latitude(latitude_), Longitude(longitude_) {}
};

int main(){
    std::vector <CityRecord> cities;

    //to use emplace_back

//    cities.emplace_back("Melbourne", 500, 2.5, 3.6);
//    cities.emplace_back("Low-Town", 5000, 2.2, 3.1);
//    cities.emplace_back("Dhaka", 7000, 2.1, 5.1);
//    cities.emplace_back("Paris", 8000, 2.0, 6.1);
//    cities.emplace_back("London", 1000, 2.8, 0.1);
//    cities.emplace_back("Berlin", 6000, 2.3, 4.1);
//
//    for (const auto& city:cities){
//        if (city.Name == "Berlin"){
//            std::cout << city.Population << std::endl;
//        }
//    }




    std::map <std::string, CityRecord> cityMap;
    cityMap["Melbourne"] = CityRecord {"Melbourne", 500, 2.5, 3.6};
    cityMap["Low-Town"] = CityRecord {"Low-Town", 5000, 2.2, 3.1};
    cityMap["Dhaka"] = CityRecord {"Dhaka", 7000, 2.1, 5.1};
    cityMap["Paris"] = CityRecord {"Paris", 8000, 2.0, 6.1};
    cityMap["London"] = CityRecord {"London", 1000, 2.8, 0.1};
    cityMap["Berlin"] = CityRecord {"Berlin", 6000, 2.3, 4.1};

    //finding CityRecord associated with key. & used for referencing.
    CityRecord& data = cityMap["London"];
    std::cout << data.Population << std::endl;

    // here new cityRecord will be insterted and default value will be return.
    // See alternative "charno-alt"
    CityRecord& data1 = cityMap["Londo"];
    std::cout << data1.Population << std::endl;



    return 0;
}

