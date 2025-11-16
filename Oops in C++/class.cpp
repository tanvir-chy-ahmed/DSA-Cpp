#include <iostream>
#include <cstring>

/*

    * Access Modifiers - public,private ->
    * Encapsulation - Hide sensitive data into the class private access modifiers
            * Need Getter setter or friend fun
                

    * Constructor - Make same fun just like class name
            * Parameterized Constructor overloading- pass just parameter with construtor & Each constructor must have a different number or type of parameters, 

    * Destructor - Just delete the memory var 

    * Inheritence - Make a diffrent class just inherite from Base class and access all of base class members

            * Multilevel Inheritence - child class inheritence class inheritence
    * 

*/



using namespace std;
// Based class
class Drones{
    private:
        char DroneName[30];
        int  DronePrice;
        int *ptr;
        string CountryName; //* 5. Encapsulate mean hiding sensitive datas

    public: //* 1. Access Specifiers

        int another =  22;

        Drones(){//* 2. Default Constructor
            cout << "Default Constructor called" << endl;
        }; 
       
        Drones(const char Name[30],int Price){ //* 3. Parameterized Constructor overloading
            strcpy(DroneName,Name);
            cout << DroneName << "  <->  " << Price << endl;
        };

        void Models(int number){
            ptr = new int;
            *ptr = number;
            cout<<*ptr<<endl;
        };

        ~Drones(){ //* 4. ~Destructor
            delete ptr;
            cout << "Successfully Free the memory" << endl;
        };



        void setName(string CountryN){
            CountryName = CountryN;
            cout << CountryName << endl;
        };

        string getName(){
            return CountryName;
        };

};

//* 6. Inheritence     //Based class   
//Child
class RacingDrones : public Drones{ //* derived class 
    public:
        string RacingDRName = "Dji Avata is Best for Racing ";
};

//Grand child / Multilevel Inheritance
class RacingCar : public Drones{
    public:
        string RacingCRName = "BMW";
};





int main(){
    Drones obj1;
    Drones obj2("Dji Mini 3",499);
    Drones obj3;
    RacingDrones obj4;
    RacingCar obj5;
    obj3.Models(6);
    obj3.setName("Turkey");
    obj3.getName();

    cout << obj4.RacingDRName << endl;
    cout << obj4.another << endl;
    cout << obj5.RacingCRName << endl;



    return 0;
}