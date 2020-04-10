//以英尺英寸的形式输入身高，以磅为单位输入体重，计算BMI

#include <iostream>
using namespace std;

int main()
{
  const int inches_per_foot = 12;
  const double meters_per_inch = 0.0254;
  const double kg_per_pound = 2.2;

  //身高
  int feet = 0;
  int inches = 0;
  cout << "Please enter your height: _ feet and _ inches:" << endl;
  cin >> feet;
  cin >> inches;
  int height_by_inches = feet * inches_per_foot;
  double height_by_meters = height_by_inches * meters_per_inch;
  cout << "Your height is " << height_by_meters << " meters;" << endl;

  //体重
  double weight_by_pounds = 0.0;
  cout << "Please enter your weight: _ pounds:" << endl;
  cin >> weight_by_pounds;
  double weight_by_kg = weight_by_pounds * kg_per_pound;
  cout << "Your weight is " << weight_by_kg << " kg;" << endl;

  //BMI
  double bmi = weight_by_kg / (height_by_meters * height_by_meters);
  cout << "Your BMI is " << bmi << endl;
  return 0;

}