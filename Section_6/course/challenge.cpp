//
// Created by juliancelis on 2025-12-19.
//
#include <iostream>

using namespace std;


int main() {
    const short price_small{25};
    const short price_large{35};
    const double tax_rate{0.06};

    short small_room {0};
    cout<<"Estimate for carpet cleaning service\n"<<"How many small rooms would you like clean?: ";
    cin>>small_room;

    short large_room;
    cout<<"How many large room would you like clean?: ";
    cin>>large_room;

    cout<<"Numbers or small rooms: "<<small_room<<endl;
    cout<<"Numbers or small rooms: "<<large_room<<endl;
    cout<<"Price of small room: "<<price_small<<endl;
    cout<<"Price of large room: "<<price_large<<endl;
    int cost{0};
    cost = small_room * price_small + large_room * price_large;
    cout<<"Cost: "<<cost<<endl;

    double tax {0};
    tax= cost * tax_rate;
    cout<<"Tax: "<<tax<<endl;
    cout<<"===============\n";
    cout<<"Total: "<<tax + cost;
    return 0;
}
