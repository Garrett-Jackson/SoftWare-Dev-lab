#include <iostream>

using namespace std;
void sqr(int num);


int main()
{

    cout<<" Git Test  "<<endl;

    sqr(5,2);
    return 0;
}
//--

void sqr(int num, int pwr)
{
    int result= 1;
    for(int i =0; i < pwr; i++)
    {
      result   =  num * result;
    }
  
    cout <<result <<endl;

}