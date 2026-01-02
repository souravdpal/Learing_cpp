#include<iostream>
#include<string>
using namespace std;

class cars{//encapsulelistion
private:
    double sales;
public:
    string name ;
    string model ;
    double price;
    cars(string name , string model , double price , double sales){
       this ->name = name;
       this->model = model;
       this->price=price;
    }
    cars(cars &obj){
        cout<<"copy const....\n";
        this->name =obj.name;
        this->model=obj.model;
        this->price=obj.price;
        this->sales=obj.sales;
    }
    void addSales(double newSales){
        sales = newSales;
    }
    double showSales(){
        return sales;
    }
};

int main(){
    cars car1("gtr","r35",900000,200);
    cout<<car1.name<<endl;
    cars car2(car1);
    cout<<car2.showSales()<<'\n';
    return 0;
}