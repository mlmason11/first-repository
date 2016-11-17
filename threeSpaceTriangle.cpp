#include <iostream> // Includes the input/output library

#include <cmath> // Includes the cmath library

#include <string> // Includes string library

// Compiler directive. Standard namespace
using namespace std;

// Section of function prototypes for each function we call
void instruct();

double findVector(double, double);

double findMagnitude(double, double, double);

double findDotProduct(double, double, double, double, double, double);

double findAngle(double, double, double);

struct point {
     double x;
     double y;
     double z;
} pointA, pointB, pointC;

struct vector {
     double x;
     double y;
     double z;
} vectorAB, vectorAC, vectorBA, vectorBC;

int main() // Start of the main function
{
     // Declares the variables for the thre points the user will input
     point pointA, pointB, pointC;
     // Calls the function instruct to tell the user how to use the program
     instruct();
     
     // Takes input from the keyboard entered by the user
     cin >> pointA.x >> pointA.y >> pointA.z >> pointB.x >> pointB.y >> pointB.z >> pointC.x >> pointC.y >> pointC.z;

     // Data structures vector attempt
     vectorAB.x = findVector(pointB.x, pointA.x);
     vectorAB.y = findVector(pointB.y, pointA.y);
     vectorAB.z = findVector(pointB.z, pointA.z);
     vectorAC.x = findVector(pointC.x, pointA.x);
     vectorAC.y = findVector(pointC.y, pointA.y);
     vectorAC.z = findVector(pointC.z, pointA.z);

     // Finds the magnitudes of the two vectors originating at point 1 by calling the function findMagnitude
     double magAB = findMagnitude(vectorAB.x, vectorAB.y, vectorAB.z);
     double magAC = findMagnitude(vectorAC.x, vectorAC.y, vectorAC.z);

     // Finds the dot product of the two vectors originating at point 1 by calling the function findDotProduct
     double productA = findDotProduct(vectorAB.x, vectorAB.y, vectorAB.z, vectorAC.x, vectorAC.y, vectorAC.z);
     
     // Finds the angle at point 1 by calling the function findAngle
     double angleA = findAngle(productA, magAB, magAC);

     // Data structure vectors attempt
     vectorBA.x = findVector(pointA.x, pointB.x);
     vectorBA.y = findVector(pointA.y, pointB.y);
     vectorBA.z = findVector(pointA.z, pointB.z);
     vectorAC.x = findVector(pointC.x, pointB.x);
     vectorAC.y = findVector(pointC.y, pointB.y);
     vectorAC.z = findVector(pointC.z, pointB.z);

     // Finds the magnitudes of the two vectors originating at point 2 by calling the function findMagnitude
     double magBA = findMagnitude(vectorBA.x, vectorBA.y, vectorBA.z);
     double magBC = findMagnitude(vectorBC.x, vectorBC.y, vectorBC.z);

     // Finds the dot product of the two vectors originating at point 2 by calling the function findDotProduct
     double productB = findDotProduct(vectorBA.x, vectorBA.y, vectorBA.z, vectorBC.x, vectorBC.y, vectorBC.z);

     // Finds the angle at point 2 by calling the function findAngle
     double angleB = findAngle(productB, magBA, magBC);

     // Finds the angle at point 3. Doesn't need a function because we already have the other two angles
     double angleC = 180.0 - (angleA + angleB);

     // Prints out a statement telling the user the value of the three angles of the triangle
     cout << "The angles of your triangle in degrees are " << angleA << ", " << angleB << ", and " << angleC << "." << endl;

     // Prints out a statement classifying the triangle, depending on the value of the three angles
     string triangleType = angleType(angleA, angleB, angleC); 
     cout << "Your triangle is " << triangleType << " triangle." << endl;

     // Prints out a statement telling the user the lenghts of the sides of the triangle
     cout << "The lengths of the sides of the triangle are " << magAB << ", " << magAC << ", and " << magBC << "." << endl;

     return 0;
} // End of main function

// Gives the user instructions for how to use the program and says what the program does
void instruct()
{
     cout << "This program will allow you to enter three points" << endl;
     cout << "in 3space, and tell you what type of triangle" << endl;
     cout << "they form, based on the angles of the triangle." << endl;
     cout << "Please enter three points in three space." << endl;
     cout << "You will enter nine numbers total, each seperated by a space." << endl;
     cout << "They can be positive or negative, and can have decimals." << endl;
     cout << "The first three numbers will be the first point," << endl;
     cout << "the second three will be the second point, and so on." << endl;
     cout << "The program will then display the three sides and angles of the triangle," << endl;
     cout << "and it will aditionally classify it as acute, obtuse, or right." << endl;
     cout << "Please enter your three points below." << endl;
}

// Finds the individual x, y, or z component of a vector created by two of the points entered by the user
double findVector(double a, double b)
{
      double v = a - b;
      return v;
}

// Finds the magnitude of the vector by using the distance formula of a vector
double findMagnitude(double a, double b, double c)
{
     double magnitude = sqrt(a * a + b * b + c * c);
     return magnitude;
}

// Finds the dot product of two vectors by using the dot product formula
double findDotProduct(double a, double b, double c, double d, double e, double f)
{
     double dotProduct = d * a + e * b + f * c;
     return dotProduct;
}

// Finds the angle at one of the points of the triangle using the dot product of the two vectors originating at that point, as well as their magnitudes
double findAngle(double a, double b, double c)
{
     double angle = (180.0 / M_PI) * (acos(a / (b * c)));
     return angle;
}

string angleType(double a, double b, double c)
{
     string acuteAngle = "an acute";
     string obtuseAngle = "an obtuse";
     string rightAngle = "a right"
     if ((a && b && c) < 90.0)
     {
          return acuteAngle;
     }
     else if ((a || b || c) > 90.0)
     {
          return obtuseAngle;
     }
     else if ((a || b || c) == 90.0)
     {
          return rightAngle;
     }
}
