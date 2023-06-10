#include <iostream>
#include <vector>
#include "mountain.h"

using std::vector;
using std::cout;
using std::endl;
    
    /*
    returns the index of the mountain in the list with
    the lowest elevation
    */
int minElevation(vector<Mountain> & list) { 
    int min = 0;
    for( int i = 1; i < list.size(); ++i ) {
        if( list.at(i).getElevation() < list.at(min).getElevation() ) {
            min = i;
        }
    }
    return min;
}

int main() {
    vector<Mountain> mountains;
    int minIndex;
    Mountain mount1 = Mountain("Chimborazo","Ecuador",20549);
    Mountain mount2 = Mountain("Matterhorn","Switzerland",14692);
    Mountain mount3 = Mountain("Olympus","Greece(Macedonia)",9573);
    Mountain mount4 = Mountain("Everest","Nepal",29029);
    Mountain mount5 = Mountain("Mount Marcy - Adirondacks","United States",5344);
    Mountain mount6 = Mountain("Mount Mitchell - Blue Ridge","United States",6684);
    Mountain mount7 = Mountain("Zugspitze","Switzerland",9719);

    mountains.push_back(mount1);
    mountains.push_back(mount2);
    mountains.push_back(mount3);
    mountains.push_back(mount4);
    mountains.push_back(mount5);
    mountains.push_back(mount6);
    mountains.push_back(mount7);

    printf("%-30s|%-20s|%-14s|%-14s\n","Mountain","Country","Elevation(ft)","Elevation(m)");
    printf("-------------------------------------------------------------------------------\n");
    for(int i = 0; i < mountains.size(); ++i ) {
        printf("%-30s|%-20s|%-14i|%-14i\n", 
                mountains.at(i).getName().c_str(), 
                mountains.at(i).getCountry().c_str(),
                mountains.at(i).getElevation(),
                mountains.at(i).toMeters());
    }
    printf("-------------------------------------------------------------------------------\n");

    minIndex = minElevation(mountains);
    cout << "Smallest Mountain:\n";
    printf("%-30s|%-20s|%-14i|%-14i\n", 
                mountains.at(minIndex).getName().c_str(), 
                mountains.at(minIndex).getCountry().c_str(),
                mountains.at(minIndex).getElevation(),
                mountains.at(minIndex).toMeters());
    return 0;
}