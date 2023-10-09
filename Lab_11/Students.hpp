#include <iostream>
#include <string>
using namespace std;
class Students
{
private:
    int id;
    string name;
    float percentage;
    char grade;
public:
    string getName(){
        return name;
    }
    void setName(string name){
        this->name = name;
    }
    int getId(){
        return id;
    }
    void setId(int id){
        this->id = id;
    }
    float getPercentage(){
        return percentage;
    }
    void setPercentage(float percentage){
        this->percentage = percentage;
    }
    char calcGrad(){
        if(this->percentage>= 80){
            return 'A';
        }
        else if(this->percentage <80 && percentage>=70)
        {
            return 'B';
        }
        else if(this->percentage <70 && percentage>=60)
        {
            return 'C';
        }
        else if(this->percentage <60 && percentage>=50)
        {
            return 'D';
        }
        else{
            return 'F';
        }
    }
    char getGrade(){
        return calcGrad();
    }
    void setGrade(char grade){
        this->grade = grade;
    }
    void printStudent(){
        cout<<"name: "<<name<<endl;
        cout<<"id: "<<id<<endl;
        cout<<"percentage: "<<percentage<<endl;
        cout<<"grade: "<<grade<<endl;
    }
};