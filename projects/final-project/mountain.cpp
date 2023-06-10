#include "mountain.h"

using std::string;

Mountain::Mountain(){
    name = "NoName";
    country = "NoCountry";
    elevation = -1;
}

Mountain::Mountain(string userName, string userCountry, int userNum) {
    name = userName;
    country = userCountry;
    elevation = userNum;
}

void Mountain::setName(string userStr) {
    name = userStr;
}

void Mountain::setCountry(string userStr) {
    country = userStr;
}

void Mountain::setElevation(int userNum) {
    elevation = userNum;
}

string Mountain::getName() const {
    return name;
}

string Mountain::getCountry() const {
    return country;
}

int Mountain::getElevation() const {
    return elevation;
}

int Mountain::toMeters() {
    return (elevation * 3.2808);
}