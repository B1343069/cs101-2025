#include <iostream>

using namespace std;

class Car{
    private:
    int m_maxseating;
    int m_price;
    void m_updataprice(int bace = 500000){
        m_price = m_maxseating * bace;
    }
    public:
    string m_drivemode;
    string m_brand;
    string m_model;
    int m_year;
    
    Car(string x, string y, string z ,int q,int w ){
        m_drivemode = x;
        m_brand=y;
        m_model=z;
        m_year=q;
        m_maxseating=w;
        m_updataprice();
    }
    int get_maxseating(){
        return m_maxseating;
    }
    int get_price(){
        return m_price;
    }
    string get_drivemode(){
        return m_drivemode;
    }
};

class BMW_Car : public Car {
    public:
    BMW_Car(string y,int z,int s) : Car("Rear-wheel","BMW",y,z,s){
        cout << "Constructing BMW_Car\n";
    }

};
class audl_Car : public Car {
    public:
    audl_Car(string y,int z,int s) : Car("Rear-wheel","audl",y,z,s){
        cout << "Constructing audl_Car\n";
    }

};
class benz_Car : public Car {
    public:
    benz_Car(string y,int z,int s) : Car("Rear-wheel","benz",y,z,s){
        cout << "Constructing benz_Car\n";
    }

};

int main(){
    BMW_Car car_1("x5",2023,6);
    cout << car_1.m_brand;
    cout << ":Drive Mode ="<< car_1.get_drivemode()<< endl;
    audl_Car car_2("x5",2023,6);
    cout << car_2.m_brand;
    cout << ":Drive Mode ="<< car_2.get_drivemode()<< endl;
    benz_Car car_3("x5",2023,6);
    cout << car_3.m_brand;
    cout << ":Drive Mode ="<< car_3.get_drivemode()<< endl;
    

}
