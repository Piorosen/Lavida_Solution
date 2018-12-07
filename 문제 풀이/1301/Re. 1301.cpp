#include <iostream>

using namespace std;

struct word{
    char data[100];
    int money ;
};

int main(){
    int testCase;
    int sentence;
    
    cin >> testCase >> sentence;
    
    word List[1000];
    
    for (int i = 0; i < testCase; i++){
        char data[100];
        int money;
        cin >> data >> money;
        strcpy(List[i].data, data);
        List[i].money = money;
    }
    
    for (int i = 0; i < sentence; i++){
        int money = 0;
        for (;;){
            char data[100];
            cin >> data;
            if (data[0] == '.'){
                break;
            }
            for (int w = 0; w < testCase; w++){
                if (strcmp(List[w].data, data) == 0){
                    money += List[w].money;
                }
            }
        }
        cout << money << endl;
    }
}
