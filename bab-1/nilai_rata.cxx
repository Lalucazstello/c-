
#include <iostream>

using namespace std;

int main() 
{

  int uas,uts,tugas,kuis,total;
  float hasil;
  cout<<"masukkan nilai uas :";
  cin>>uas;
  cout<<"masukkan nilai uts :";
  cin>>uts;
  cout<<"masukkan nilai tugas :";
  cin>>tugas;
  cout<<"masukkan nilai kuis :";
  cin>>kuis;

  // uas = 74;
  // uts =89;
  // tugas =90;
  // kuis =60;

  total=uas+uts+tugas+kuis;
   hasil= total/4;
   cout<<"nilai rata-rata adalah : ";
  cout<<hasil<<endl;
  
 

  
 

  return 0;
}
