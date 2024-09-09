#include <math.h>
#include <stdio.h>

int main(void) {
// main() will define two arguments, call calculation functions, and return 0

  double AskForUserInput();
  // AskForUserInput() asks the user to input values of two arguments

  double calculateDistance();
  double calculatePerimeter();
  double calculateArea();
  double calculateWidth();
  double calculateHeight();

  return 0;
}

double AskForUserInput() {

  int argcx = 0
  int argcy = 0
  printf("Please Enter The X Value of Point 1\n");
  scanf("%d", &argcx)
  printf("Please Enter The Y Value of Point 2\n");
  scanf("%d", &argcy);
  // argc = the value of argument one, representing point 1 of the diameter

  int argvx = 0
  int argvy = 0
  printf("Please Enter The X Value of Point 2\n");
  scanf("%d", &argvx);
  printf("Please Enter The Y Value of Point 2\n");
  scanf("%d", &argvy);
  // argv = the value of argument two, representing point 2 of the diameter

  return double AskForUserInput()
}

double calculateDistance() {

printf("Point #1 entered: x1=",var,argcx", y1=",var,argcy)
printf("Point #2 entered: x2=",var,argvx", y2=",var,argvy)
// printf statements recall the values input by the user for each point

dist = 0
distx= 0
disty= 0
distradx = 0
distrady = 0
double distx = (argcx-argvx)
double disty = (argcy-argvy)
double distradx = pow(argcx-argvx,2)
double distrady = pow(argcy-argvy,2)
double dist = sqrt(distradx+distrady)
// Fracturing the distance formula into separate parts 

printf("Distance between points is",%if,dist)

return(double dist)

}

double calculatePerimeter() {

  double calculateDistance();
  // Recalling this function to print point values and previous calculations

  perimeter = 2(abs(distx)+abs(disty))

  return(1.3)
}

double calculateArea() {

  double calculateDistance();
  // Recalling this function to print point values and previous calculations
  area = 0
  double area = (distx*disty)
  printf("The area of the City is",%if,area)
  // Calculating the area of the city and saving it as a variable

  return(1.1)
}

double calculateWidth() {

  double calculateDistance();
  // Recalling this function to print point values and previous calculations

  width = 0
  double width = abs(distx)
  printf("The Width of the City is",%if,width)
  // This Function uses the values previously calculated, makes it positive,
  // and saves the value of the total x distance as the city's width
  
  return(1.1)
}

double calculateHeight() {

  double calculateDistance();
  // Recalling this function to print point values and previous calculations
  
  height = 0
  double height = abs(disty)
  printf("The Height of the City is",%if,height)
  // This Function uses the values previously calculated, makes it positive,
  // then saves the value of the total y distance as the city's height
  return(1.1)
}