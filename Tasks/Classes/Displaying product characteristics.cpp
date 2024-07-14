/*
Create a Closet class that will contain the private fields: brand, size_h, size_w, price and a getInfo() method. 
In the main function, declare an object of the class and enter the data into the constructor. 
Then display them by calling the getInfo() method.
*/











#include <iostream>
#include <string>
using namespace std;

class Closet {
private:
    string brand;
    int size_h;
    int size_w;
    int price;
public:
    Closet(string brand, int size_h, int size_w, int price) {
        this->brand = brand;
        this->size_h = size_h;
        this->size_w = size_w;
        this->price = price;
    }
    
    void GetInfo(); // you can write here, not necessarily outside the class
    
};


int main() {
    
    Closet closet("Minotti", 20, 10, 500);
    closet.GetInfo();
    
    return 0;
}

void Closet::GetInfo () {
        cout << "brand: " << brand << ". size HxW: " << size_h << "x" << size_w << ". price: " << price;
}
