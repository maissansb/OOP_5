#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class College
{
public:
    void set(string, int, int);
    void get(int&, int&) const;
    void print() const;
    College(string = "DCS", int = 5, int = 10);
    string getName() const;
    double departmentDensity() const;
    static int getCount();
    static int getTotalNumberOfFaculty();
    static double avgFaculty();
    ~College();

private:
    string name;
    int numberOfDepartments,numberOfFaculty;
    static int count,totalNumberOfFaculty;
};
