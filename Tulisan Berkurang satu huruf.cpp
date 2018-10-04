#include <iostream>
#include <conio.h>
//Ahmad Romiz
using namespace std;

main()
{
    string kata;
    cout<<"program menghapus huruf pada kata\n";
    cout<<"Masukkan kata: "; cin>>kata;
    cout<<"_________________________\n";
    int i=kata.length()-1;
    for (i;i>=0;i--)
	{ 
        for(int a=0;a<=i;a++)
		{ 
            cout<<kata[a];
        }
        cout<<endl;
    }
	
}
