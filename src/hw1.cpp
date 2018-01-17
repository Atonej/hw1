#define _USE_MATH_DEFINES //allows use of constants

#include <math.h> //library for math functions
#include <iostream> //to allow input and output of a console

/*************************************************
 *Used for main testing
 *************************************************/
int main(int argc, char** argv){

//tells user instructions
std::cout << "Please enter the radius of circle:" << std::endl;

float radius;
//take user input and put into a variable
std::cin>> radius;
//commute area and perimeter
float area =( radius * radius) *  M_PI;
float perimeter = 2 * M_PI *radius;
//give results
std::cout << "The area of the circle is " << area << std::endl;
std::cout << "The perimeter of the circle is " << perimeter << std::endl;

}
