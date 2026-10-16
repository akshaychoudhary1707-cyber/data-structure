#include <iostream>
using namespace std;

int main() {
    int prices[100];
    cout << "Enter the length of available data for share price: ";
    int n;
    cin >> n;
    cout << "Enter the value of share prices: ";
    for (int i=0;i<n;i++){
        cin >> prices[i];
    }
    cout << "The share prices is: ";
    for (int i=0;i<n;i++){
        cout << prices[i] << " ";
    }
    cout << endl;

    int buy=prices[0];
    int pos = 0;
    int sell;
    int change = 0;
    for (int i=0; i<n; i++){
        if (prices[i] < buy){
            buy = prices[i];
            pos = i;
        }
    }
    cout << "Buy Price: " << buy << endl;
    sell = prices[pos];
    for (int j=pos; j<n; j++){
        if (prices[j] > sell){
            sell = prices[j];
            change = 1;
        }
    }
    if (change == 0) {
        cout << "We cannot sell the share without lossing money" << endl;
    }
    else {
        cout << "Sell Price: " << sell << endl;
    }
    if (change == 0){
        cout << "We cannot sell the share once we buy it otherwise we will be at loss." << endl;
        cout << "Profit is 0" << endl;
    }
    else{
        cout << "The Profit is " << sell - buy << endl;
    }
}