#include <iomanip>
#include <iostream>
using namespace std;
int getInput(int *a, int *b, int *c)
{ 
  cin >> *a;
  cin >> *b;
  cin >> *c;
return 0;
}
int maxmin (int n1, int n2, int n3, int *max2, int *min2)
{
  *max2 = (n1 > n2) ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);
  *min2 = (n1 < n2) ? (n1 < n3 ? n1 : n3) : (n2 < n3 ? n2 : n3);
  return 0;
}
int main()
{
  int num1, num2, num3;
  int max, min;
  getInput (&num1, &num2, &num3);
  maxmin(num1, num2, num3, &max, &min);
  cout << "The distance between the numbers " << max << " and " << min << " : " << max-min << endl;
return 0;  
}