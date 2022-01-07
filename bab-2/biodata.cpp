#include <iostream>
#include <string>

using namespace std;

int main (){
    
	string nama,ttl,alamat,agama,status;
    
	// string alamat;
	// string nim;
	// string jurusan;
	
	cout<<"Masukan Data Anda : "<<endl<<endl;
	cout<<"Nama    : ";
	getline (cin, nama); 
 
    
	cout<<"TTL    : ";
	getline (cin, ttl); 
	 
	cout<<"ALAMAT : ";
	getline (cin, alamat); 
	 
	cout<<"AGAMA   : ";
	getline (cin, agama); 
	 
	cout<<"STATUS : ";
	getline (cin, status); 
    

 

	cout<<endl;
	cout<<" DATA YANG ANDA MASUKKAN"<<endl; 
	cout<<"------------------------------"<<endl;
	
	cout<<"Nama    : "<<nama<<endl;
    cout<<"TTL     : "<<ttl<<endl;
	cout<<"Alamat  : "<<alamat<<endl;
	cout<<"NIK     : "<<agama<<endl;
	cout<<"Jurusan : "<<status<<endl;

     std::cout<<"Hai "<<nama << ",Ternyata anda dari : "<<alamat
     
            <<"  , selamat datang di PIJIT C++"
            <<std::endl;

}