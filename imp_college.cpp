#include "College.h"

int College::count = 0;
int College::totalNumberOfFaculty = 0;

void College::set(string cn, int cd, int cf){
    totalNumberOfFaculty -= numberOfFaculty;
    name =cn;
    numberOfDepartments =cd;
    numberOfFaculty = cf;
    totalNumberOfFaculty += numberOfFaculty;
}

void College::get(int& cd, int& cf) const{
    cd = numberOfDepartments;
    cf= numberOfFaculty;
}

string College::getName()const{
    return name;
}

int College::getCount(){
    return count;
}

int College::getTotalNumberOfFaculty(){
    return totalNumberOfFaculty;
}

double College::avgFaculty(){
    return (totalNumberOfFaculty) / count;
}

double College::departmentDensity() const{
    return static_cast<double>(numberOfFaculty) / numberOfDepartments;
}
void College::print() const{
    string collegeName;
    int collegeDepartments, collegeFaculty;
    collegeName=getName();
    get(collegeDepartments, collegeFaculty);
    cout<<collegeName<< " has " << collegeDepartments << " departments"<< ", and "<<collegeFaculty<< " faculty."<<endl;
}

College::College(string cn, int cd, int cf){
    name =cn;
    numberOfDepartments =cd;
    numberOfFaculty=cf;
    totalNumberOfFaculty += numberOfFaculty;
    count++;
}

College::~College(){
    count--;
    totalNumberOfFaculty -= numberOfFaculty;
    cout<< "count is "<<count<< " and total number of faculty is: "<<totalNumberOfFaculty<<"\n\n";
}


