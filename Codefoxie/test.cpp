#include <iostream>

#include <fstream>
#include <sstream>
#include <string>

using namespace std;


void current_time(int i)
{
    int hr = 1;
    int mn = 15 * i;
    hr = hr + (mn/60);
    mn = mn % 60;
    cout<<hr<<":"<<mn<<"PM"<<endl;
}

void br_temp(double beers[])
{
    if(beers[0]<4.00 || beers[0]>6.00)
    cout<<"ALERT!!! Beer1 in conatiner is out of temp range"<<endl;
    else if(beers[1]<5.00 || beers[1]>6.00)
    cout<<"ALER!!! Beer2 in container is out of temp range"<<endl;
    else if(beers[2]<4.00 || beers[2]>7.00)
    cout<<"ALERT!!! Beer3 in container is out of temp range"<<endl;
    else if(beers[3]<6.00 || beers[3]>8.00)
    cout<<"ALERT!!! Beer4 in container is out of temp range"<<endl;
    else if(beers[4]<3.00 || beers[4]>5.00)
    cout<<"ALERT!!! Beer5 in container is out of temp range"<<endl;
    else if(beers[5]<4.40 || beers[5]>6.40)
    cout<<"ALERT!!! Beer6 in container is out of temp range"<<endl;
    else
     cout<<"Temperature is in range"<<endl;
    
    
}

int main()
{
    cout<<"Enter file name(example:test.txt)"<<endl;
    string filename = "Beers.txt";
    //cin>>filename;
    ifstream file(filename);

    int x = 6;
    double beers[6];

    for (int i=0; i<x; i++)
    {
        string line;
        getline(file, line);
        string temp=line.c_str();
        //cout<<temp<<endl;
        
        for (int j=0; j<sizeof(beers)/sizeof(beers[0]); j++)
        {
            int pos = temp.find(",");
            beers[j] = stod(temp.substr(0, pos));
	        temp = temp.erase(0, pos+1);       
        }
        cout<<endl;
        current_time(i);
        br_temp(beers);
        cout<<endl;
    }

    cout<<endl;
    //getch();
    return 0;
}