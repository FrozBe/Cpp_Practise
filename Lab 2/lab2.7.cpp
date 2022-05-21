#include <iostream>
using namespace std;

int main()
{
    int size = 1000;
    int n = size + 1;

    while (n > size) {
     cout << "This number is out of border.Enter the new number" << endl;
         cin >> n;
    }

    int* list = new  int[n];


    int choise;
    cout << "1 or 2" << endl;
    cin >> choise;
    cout << endl;
   
    switch (choise) {
    case 1:
        for(int i = 0;i<n;i++){
            cin >> list[i];
        }
        break;
    case 2:
        int Rborder, Lborder;
        cout << "Enter the borders" << endl;
        cin >> Rborder>> Lborder;
        for (int i = 0; i < n; i++) {
            list[i] = rand()%Lborder + Rborder;
        }
        break;
    default:
        break;
    }

    for (int i = 0; i < n; i++) {
        cout << list[i] << " " ;
    }
    
    cout << endl;


    int max = -1;
    for (int i = 0; i < n; i++) {
        if (abs(list[i]) > max) {
            max = list[i];
        }
    }
    cout << endl << max << endl;;

    int first_plus = -1, last_plus = -1;
    for (int i = 0; i < n; i++) {
        if (list[i] > 0) {
            first_plus = i;
            break;
        }
    }
    for (int i = n; i > 0; i--) {
        if (list[i] > 0) {
            last_plus = i;
            break;
        }
    }

    if (first_plus != -1 && last_plus != -1) {
        int sum = 0;
        for (int i = first_plus; i < last_plus; i++) {
            sum = sum + list[i];
        }
        cout <<"the sum is: "<< sum;
    }
  

    return 0;
}