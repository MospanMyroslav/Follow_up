#include <iostream>
#include <iomanip>
#include <algorithm>
#include <stdlib.h>
using namespace std;
struct Order {
    long payer;
    long receiver;
    double sum;
};
 
bool sum(const Order & a, const Order & b){
    return a.sum > b.sum;
}
 
int main(){
	    setlocale(LC_ALL,"Russian");
    const int number = 2;
    Order orders[number], order;
 
    for ( int i = 0; i < number; ++i ){
        cout << "\nOrder #" << ( i + 1 ) << endl;
        cout << "Счета плательщика: ";
        cin >> orders[i].payer;
        cout << "Аккаунт получателя: ";
        cin >> orders[i].receiver;
        cout << "Сума: ";
        cin >> orders[i].sum;
    }
 
    cout << "\nПлатниками обліковий запис, щоб розрахувати суму платить: ";
    cin >> order.payer;
    order.sum = 0.0;
    for ( int i = 0; i < number; ++i )
        if ( order.payer == orders[i].payer )
            order.sum += orders[i].sum;
    cout << order.sum << " успешно заплатил с этого счета." << endl;
 
    sort(orders, orders + number, sum);
    cout << "\nВсе заказы на сумму потоком:" << endl;
    cout << "Плательщика-счет    торговый счет получателя    Суммы" << endl;
    cout << fixed;
    for ( int i = 0; i < number; ++i )
      cout << left << setw(20) << orders[i].payer << setw(20) << orders[i].receiver << setprecision(2) << orders[i].sum << endl;
 system("pause");
    return 0;
}