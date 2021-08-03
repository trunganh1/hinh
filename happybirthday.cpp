#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;


int main()
{
	cout << "Ngay sinh nhat cua nguoi ban yeu : " << endl;
    std::string sinhnhat = "19/12/1997";
    std::string test;
	while(1){
		std::getline(std::cin, test);
	if(test == sinhnhat)
		break;
	else
		std::cout<< "Ngay sinh nhat cung khong nho a, Nhap lai: ";
	}
	cout << "\nDang xu ly : 0%";
    Sleep(100);
    cout << "\nDang xu ly : 10%";
    Sleep(100);
    cout << "\nDang xu ly : 20%";
    Sleep(100);
    cout << "\nDang xu ly : 30%";
    Sleep(100);
    cout << "\nDang xu ly : 40%";
    Sleep(100);
	cout << "\nDang xu ly : 50%";
    Sleep(100);
	cout << "\nDang xu ly : 60%";
    Sleep(100);
	cout << "\nDang xu ly : 70%";
    Sleep(100);
	cout << "\nDang xu ly : 80%";
    Sleep(100);
	cout << "\nDang xu ly : 90%";
    Sleep(100);
	cout << "\nDang xu ly : 100%";
    Sleep(100);        
  	cout << "\nDa xu ly xong!!!\n\n\n\n\n";
    Sleep(500);

   
    fstream newfile;
    newfile.open("trunganh.txt", ios::in);
    if (newfile.is_open())
    {
        string tp;
        while (getline(newfile, tp))
        {
            cout << tp << endl;
            Sleep(200);
        }
        newfile.close();
    }
	 system("pause");
	return 0;
cin.ignore();
}

