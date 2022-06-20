#include <iostream>
#include <vector>
using namespace std;

    DVD[] dvdcollection = new DVD[15];
    
 public class DVD {
    public:
    string name;
    string releaseyear;
    string director;
    
    public:
        DVD(string name, int releaseyear, string director){
            this->name = name;
            this->releaseyear = releaseyear;
            this->director = director;
        } 
    
    public:
        string to_string() {
            string val = name + ", directed by " + director + ", released in " + releaseyear;
            return val;
    }
};

int main()
{

    DVD avengersDVD = new DVD("The avengers", "2012", "Joss Whedon");
    dvdcollection[0] = avengersDVD;

//    dvdcollection.name = "hey";
//    dvdcollection.releaseyear = "1982";
//    dvdcollection.director = "rohan";
//    cout << to_string(dvdcollection);
    return 0;
}