
#include <iostream>
struct Demostruct{
    int val1;
    double val2;
}

typedef struct Demostruct dstruct;

class Demo{
    string name;
    public:
   Demo() {}
    Demo(string ip): name(ip) {}
    
    void PrintName{
        cout << "Name is:"<< name << endl;
    }
    };
    
typedef Demo dem;

}
int main() {
    // Primitive DataTypes
   int num =10;
   int num2;
   char ch='a';
   bool x=true;
   double y=11.10;
   float z=12.2;
   
   //Derived DataTypes
   int arr[10]={1,2,3,4,5,};
   int *ptr = &num;
   int& numRef = num;
   
   // User Defined DataTypes
   enum day {
       Sunday,
       Monday,
       Tuesday,
       Wednesday,
       Thursday,
       Friday,
       Saturday
   };
   d day = Sunday;
   cout <<"Day is:"<< d<< endl;
   dstruct s{0,1};
   cout << s.val2<< endl;
   
   dem DemoObject("Hello!!");
   DemoObject.PrintName();

    return 0;
}
