#ifndef MOUNTAIN_H
#define MOUNTAIN_H

#include <iostream>
#include <string>
using std::string;

class Mountain {
    public:
        Mountain();
        Mountain(string userName, string userCountry, int userNum);
        void setName(string userStr);
        void setCountry(string userStr);
        void setElevation(int userNum);

        string getName() const;
        string getCountry() const;
        int getElevation() const;

        int toMeters();
    private:
        string name;
        string country;
        int elevation; 
};

#endif