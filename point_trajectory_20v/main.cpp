#include<fstream>
#include<iostream>

#include"TaskBody.h"

#define MAX_TIME 200

using namespace std;
int main()
{
	Location location(100000, 100000, 10, list<Sprite*>());
	location.add_sprite(new TaskBody(&location, 0, 0, 0, 0));

	ofstream fout("test.txt");

    double V;
    cout << " V = "; 
    cin >> V;
    double alpha;
    cout << " alpha = "; 
    cin >> alpha;
    double T;
    cout << " T = "; 
    cin >> T;
    double V1;
    cout << " V1 = "; 
    cin >> V1;
    
    location.fly(V, alpha);
    bool eng = true;
    for (time_ t = 0; t < MAX_TIME; t++)
    {
        if (eng && t > T) 
        {
            location.engines(V1);
            eng = false;
        }
        auto result = location.tick(1);
        fout << t << ": ";
        for (auto _body : result)
            fout << _body << "\t";
        fout << endl;

        location.stop();
    }

	return 0;
}