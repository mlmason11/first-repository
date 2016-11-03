#include <iostream> // Includes the input/output library

#include <cmath> // Includes the cmath library

// Compiler directive. Standard namespace
using namespace std;

// Section of function prototypes for each function we call
void instruct();

double findVector(double, double);

double findMagnitude(double, double, double);

double findDotProduct(double, double, double, double, double, double);

double findAngle(double, double, double);

int main() // Start of the main function
{
     // Declares the variables for the thre points the user will input
     double a, b, c, d, e, f, g, h, i;

     // Calls the function instruct to tell the user how to use the program
     void instruct();
     
     // Takes input from the keyboard entered by the user
     cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;

     // Finds the two vectors originating at point 1 by calling the function findVector
     double vA = findVector(d, a);
     double vB = findVector(e, b);
     double vC = findVector(f, c);
     double vD = findVector(g, a);
     double vE = findVector(h, b);
     double vF = findVector(i, c);

     // Finds the magnitudes of the two vectors originating at point 1 by calling the function findMagnitude
     double magA = findMagnitude(vA, vB, vC);
     double magB = findMagnitude(vD, vE, vF);

     // Finds the dot product of the two vectors originating at point 1 by calling the function findDotProduct
     double productA = findDotProduct(vA, vB, vC, vD, vE, vF);
     
     // Finds the angle at point 1 by calling the function findAngle
     double angleA = findAngle(productA, magA, magB);

     // Finds the two vectors originating at  point 2 by calling the function findVector
     double vG = findVector(a, d);
     double vH = findVector(b, e);
     double vI = findVector(c, f);
     double vJ = findVector(g, d);
     double vK = findVector(h, e);
     double vL = findVector(i, f);

     // Finds the magnitudes of the two vectors originating at point 2 by calling the function findMagnitude
     double magC = findMagnitude(vG, vH, vI);
     double magD = findMagnitude(vJ, vK, vL);

     // Finds the dot product of the two vectors originating at point 2 by calling the function findDotProduct
     double productB = findDotProduct(vG, vH, vI, vJ, vK, vL);

     // Finds the angle at point 2 by calling the function findAngle
     double angleB = findAngle(productB, magC, magD);

     // Finds the angle at point 3. Doesn't need a function because we already have the other two angles
     double angleC = 180.0 - (angleA + angleB);

     // Prints out a statement telling the user the value of the three angles of the triangle
     cout << "The angles of your triangle are " << angleA << ", " << angleB << ", and " << angleC << "." << endl;

     // Prints out a statement classifying the triangle, depending on the value of the three angles
     if((angleA && angleB && angleC) < 90.0)
     {
          cout << "Your triangle is an acute triangle." << endl;
     }
     else if((angleA || angleB || angleC) > 90.0)
     {
          cout << "Your triangle is an obtuse triangle." << endl;
     }
     else if((angleA || angleB || angleC) == 90.0)
     {
          cout << "Your triangle is a right triangle." << endl;
     }

     // Prints out a statement telling the user the lenghts of the sides of the triangle
     cout << "The lengths of the sides of the triangle are" << magA << ", " << magB << ", and " << magD << "." << endl;

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
      double v = b - a;
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
