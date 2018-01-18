#include "Registo.h"
#include <iostream>
#include <string>
using namespace std;



Registo::Help()//This function gives us a list of products
{
        n=10;
        cout << "NumberID       Value$       Product\n";
        for(int x = 0; x<n ; x++){
            cout << x << " ------------ " << Val[x] << "$ ---------- " << Prod[x]<< endl;
        }



}


Registo::Calculum(){ //this function calculates the price and presents the list
    loop = 0;
        cout << "Cash Register V.1 C++ \nPlease Write the user Product id,\n if you want to change a value type -3(NOT WORKING CORRECTLY YET) \n if you want to exit type -2 \n if you need the list type -1\n";
        cin >> loop;
            switch(loop){
                case -1://presents the list of products
                    Help();
                    Calculum();
                    break;
                case -2://ends the listing
                    Payment();
                    break;
                case -3://changes the price of a product
                    cout << "whats the id of the product you want to change the price?\n";
                    cin >> otherpriceid;
                    cout << "whats the price?\n";
                    cin >> otherprice;
                    Val[otherpriceid] = otherprice;
                    Calculum();
                default://adds products to the final price
                    cout << "Amount:\n";
                    cin >> amount;
                    sum = sum +(Val[loop]*amount);
                    products = "->";
                    products = products + " " + Prod[loop];
                    Calculum();
            }




}

Registo::Payment(){//Discounts, change, and payment
    cout << "Does the costumer have discount(yes - no)?\n";
    cin >> Discanswer;

    if(Discanswer == "yes"){//if the costumer have discount
        cout << "Amount of discount: \n";
        cin >> discount;
        totalDis = sum -(sum * (discount/100));
        cout << "The Price is: " << totalDis << "$\n How Much did the costumer paid?\n";
        cin >> paid;
        change = paid - totalDis;
            if(change < 0){//if the costumer pays less than the cost of the products
                cout << "the costumer did not pay the totality of the price restarting payment process \n\n\n";
                Payment();

            }
            else{
                cout << "The Change is: " << change << "$" << endl;


            }
    }
    else{
    cout << "The Price is: " << sum << "$\n";
    cout << "How much did the costumer pay?\n";
    cin >> paid;
    change = paid - sum;
            if(change < 0){//if the costumer pays less than the cost of the products
                cout << "the costumer did not pay the totality of the price \n";
                Payment();

            }
            else{
                cout << "The Change is: " << change << "$" << endl;
                cout << "(NOT WORKING YET) The List of products is" << products << endl;


            }

    }

}


