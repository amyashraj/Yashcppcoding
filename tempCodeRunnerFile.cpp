#include<iostream>
#include<string>
using namespace std;

int main(){

    string productName = "Macbook";
    double productPrice = 99.89;
    int inStock = 45;
    float productRating = 4.2;
    char category = 'E'; // E for Electronics

    cout<<"Product Name : "<<productName<<endl;
    cout<<"Price of the product : $"<<productPrice<<endl;
    cout<<"Product in stock : "<<inStock<<endl;
    cout<<"Product Rating : "<<productRating<<endl;
    cout<<"Category of the product : "<<category<<endl;

    return 0;
}
