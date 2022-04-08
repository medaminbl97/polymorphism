#pragma once
#include <iostream>
#include <cmath>





class shape {
protected:
    std::string name;
    double air;
public:
    shape():name("no name"),air(0) {}
    shape(const std::string& name) : name(name),air(0) {}

public:
    virtual double getAir()const =0;
    virtual void print(std::ostream& stream) const =0;
    friend std::ostream & operator << (std::ostream& stream,const shape& obj){ obj.print(stream); return stream; }


};

class circle : public shape {
private:
    double radius;
public:
    circle():shape(),radius(0) {};
    circle(const std::string & name , double radius):shape(name),radius(radius){ air = 2*M_PI* pow(radius,2); }

public:
    void print(std::ostream& stream) const override { stream <<  "Name : " << name << "\tRadius : "<< radius << " m\tAir : " << air << "m2" << std::endl; }
    double getAir()const{return air;}
    
};

class square : public shape {
private:
    double length;
    double base;
public:
    square() : shape(),length(0),base(0){}
    square(const std::string& name , double  length, double base):shape(name),length(length),base(base) { air = length * base;}

public:
    void print(std::ostream& stream) const override {stream << "Name : " << name << "\tLength : " << length << "m\tBase : " << base << "m\tAir : "<< air << "m2" << std::endl;}
    double getAir()const override { return  air;}
};

class triangle : public shape {
private:
    double hight;
    double base;
public:
    triangle():shape(),hight(0),base(0) {}
    triangle(const std::string& name, double hight, double base):shape(name),hight(hight),base(base) {air = hight * base / 2;}

public:
    void print(std::ostream& stream)const override {stream << "Name : " << name << "\tHight : " << hight << "m\tBase : " << base << "m\tAir : "<< air << "m2" << std::endl;}
    double getAir()const override { return  air;}

};