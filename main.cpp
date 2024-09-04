#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string calcfunc();

int main(void){
    bool ex = 0;
    string history;

    cout << "This is a Calculator!" << endl;
    while(ex == 0){
        
        char decide;
        cout << "Calculate(c) or History(h)? (exit = 'e')" << endl;
        cin >> decide;
        if(decide == 'c'){
            history.append(calcfunc() + "\n");
        }
        else if(decide == 'C'){
            history.append(calcfunc() + "\n");
        }
        else if(decide == 'h'){
            cout << history << endl;
        }
        else if(decide == 'H'){
            cout << history << endl;
        }
        else if(decide == 'e'){
            ex = 1;
        }
        else if(decide == 'E'){
            ex = 1;
        }

    }
    
    return 0;
}


string calcfunc(){
    double num1;
    char operation;
    double num2;
    double ans;

    cout << "Enter a Calculation. (ex. 3+5) : (operations: +,-,*,/,^,#)" << endl;
    cin >> num1;
    cin >> operation;
    cin >> num2;

    switch(operation){
        case '+':
            ans = num1 + num2;
            cout << ans << endl;
            break;
        case '-':
            ans = num1 - num2;
            cout << ans << endl;
            break;
        case 'x': case '*':
            ans = num1 * num2;
            cout << ans << endl;
            break;
        case '/':
            ans = num1 / num2;
            cout << ans << endl;
            break;
        case '^':
            ans = pow(num1,num2);
            cout << ans << endl;
            break;
        case '#':
            ans = pow(num1,1/num2);
            cout << ans << endl;
            break;
        default:
            cout << "unkown operation." << endl;
    }
    string addthis = to_string(num1) + " " + operation + " " + to_string(num2) + " : " + to_string(ans);
    
    return addthis;
}
