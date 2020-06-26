//乐学偶得版权所有，主讲人：William 公众号：乐学Fintech 网站：lexueoude.com
// Created by william from lexueoude.com
//

#include <iostream>

using namespace std;

int main() {
    cout << "-------------Auto Trading V0.01____________" << endl;
    cout << "1. Start our Auto-Trading program" << endl;
    cout << "2. Run Back Testing" << endl;
    cout << "3. Run Web Scraper program" << endl;
    cout << "4. Search off-line Database" << endl;
    cout << "5. Quit this program " << endl;
    cout << "-------------Auto Trading V0.01____________" << endl;

    cout << "Please enter your selection (1-5): " << flush;

    int value;
    cin >> value;

    if (value < 4) {
        cout << "You must be William to use this program" << endl;
    } else {
        cout << "You must be root to use this option" << endl;
    }

    if (value == 5) {
        cout << "You have quited this program" << endl;
    } else {
        cout << "You are still in the program" << endl;
    }


    return 0;
}
