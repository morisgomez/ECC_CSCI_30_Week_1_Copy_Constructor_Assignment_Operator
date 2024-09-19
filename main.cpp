#include <iostream>
using namespace std;


class Circle
{
private:
    float m_x; //stores the x-value of a circle.
    float m_y; //stores the y-value of a circle.
    float m_rad; //stores the radius of a circle.
    
public:
    //constructor w/ parameters of Circle class.
    Circle(float x, float y, float r)
    {
        m_x = x; //m_x is the x value of the circle object.
        m_y = y; //m_y is the y value of the circle object.
        m_rad = r; //m_rad is radius of circle object.
    }
    
    //copy constructor of Circle class.
    Circle(const Circle &oldVar)
    //const to not modify oldVar in function.
    //& to pass oldVar via reference to not modify oldVar.
    {
        m_x = oldVar.m_x;
        m_y = oldVar.m_y;
        m_rad = oldVar.m_rad;
    }
    
    //assignment operator of Circle class.
    //Z = W
    Circle &operator=(const Circle &source) 
    //"Circle &" is the function's return type(referencec to class).
    //"operator=" is the name of the function.
    //const to not modify source in function.
    //& to pass source via reference to not modify source.
    //source is W.
    //W.m_x = 7, W.m_y = 8, W.m_rad = 9
    {
        m_x = source.m_x; //Z.m_x = W.m_x //Z.m_x = 7
        m_y = source.m_y; //Z.m_y = W.m_y //Z.m_y = 8
        m_rad = source.m_rad; //Z.m_rad = W.m_rad //Z.m_rad = 9
        return *this; //??????
        //what are aliases in assingment operator?
        //how to handle aliases?
    }
    
    //member function that gets area of a Circle class object.
    float getArea()
    {
        return (3.14159 * m_rad * m_rad);
    }
    
    float getM_X()
    {
        return m_x;
    }
    
    float getM_Y()
    {
        return m_y;
    }
    
    float getM_RAD()
    {
        return m_rad;
    }
};

int main()
{
    
    Circle A(1, 2, 3);
    cout << "this is Circle A:" << endl;
    cout << "m_x value of A is: " << A.getM_X() << endl;
    cout << "m_y value of A is: " << A.getM_Y() << endl;
    cout << "m_rad value of A is: " << A.getM_RAD() << endl;
    cout << "area of A is: " << A.getArea() << endl << "----------" << endl;
    
    //copy constructor call here.
    Circle B = A;
    //copy constructor copies the A object into B.
    //Circle B and Circle A have the same data bc 
    //everything was copied.
    
    cout << "this is Circle B:" << endl;
    cout << "m_x value of B is: " << B.getM_X() << endl;
    cout << "m_y value of B is: " << B.getM_Y() << endl;
    cout << "m_rad value of B is: " << B.getM_RAD() << endl;
    cout << "area of B is: " << B.getArea() << endl << "----------" << endl;

    cout << "this is Circle A after copy constructed in B:" << endl;
    cout << "m_x value of A is: " << A.getM_X() << endl;
    cout << "m_y value of A is: " << A.getM_Y() << endl;
    cout << "m_rad value of A is: " << A.getM_RAD() << endl;
    cout << "area of A is: " << A.getArea() << endl << "----------" << endl;
  
//-------------------//
//-------------------//
//-------------------//
//-------------------//
//-------------------//
//-------------------//
//-------------------//
    
    Circle W(7, 8, 9);
    cout << "this is Circle W:" << endl;
    cout << "m_x value of W is: " << W.getM_X() << endl; //7
    cout << "m_y value of W is: " << W.getM_Y() << endl; //8
    cout << "m_rad value of W is: " << W.getM_RAD() << endl; //9
    cout << "area of W is: " << W.getArea() << endl << "----------" << endl;
    
    Circle Z(10, 11, 12);
    cout << "this is Circle Z:" << endl;
    cout << "m_x value of Z is: " << Z.getM_X() << endl; //10
    cout << "m_y value of Z is: " << Z.getM_Y() << endl; //11
    cout << "m_rad value of Z is: " << Z.getM_RAD() << endl; //12
    cout << "area of Z is: " << Z.getArea() << endl << "----------" << endl;
    
    //assignment operator called here.
    Z = W;
    //note: Z should have the same values of W.
    //note: Z's 10, 11, 12 do not exist anymore.
    //note: both objects have been constructed already.
    //note: so Z is completely changed to the value of W.
    
    cout << "this is Circle W after it was assignment operated into Z:" << endl;
    cout << "m_x value of W is: " << W.getM_X() << endl; //7
    cout << "m_y value of W is: " << W.getM_Y() << endl;  //8
    cout << "m_rad value of W is: " << W.getM_RAD() << endl; //9
    cout << "area of W is: " << W.getArea() << endl << "----------" << endl;
    
    cout << "this is Circle Z after it was assignment operated:" << endl;
    cout << "m_x value of Z is: " << Z.getM_X() << endl; //7
    cout << "m_y value of Z is: " << Z.getM_Y() << endl; //8
    cout << "m_rad value of Z is: " << Z.getM_RAD() << endl; //9
    cout << "area of Z is: " << W.getArea() << endl << "----------" << endl;
    return 0;
}

//copy constructor:
//an object is already created. that object is copied into another
//object. 2nd object is constructed by copying the first one.

//assigment operator:
//2 objects are already created. one object's value is changed 
//to the other's.

//preguntas para professor:
//1. Can you explain the & and const in AO and CC?
//2. What are aliases in assignment operator?
