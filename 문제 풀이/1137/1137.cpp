// 첫번째 코드 해설지
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
	int testCase;
	cin >> testCase;

	for (int i = 0; i < testCase;i++) {
		int loop = 0;
		scanf("%d", &loop);
		for (int q = 0; q < loop; q++) {
			char str[10];
			scanf("%s", &str);

			if (strcmp(str, "@@@@@@@@@@") != 0) {
				cout << str << endl;
			}
		}
	}
}

// 다른 방법으로 작성
#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    
    for (int i = 0; i < testCase; i++){
        int length;
        scanf("%d", &length);
        
        for (int w = 0; w < length; w++){
            char input[11] = { 0, };
            scanf("%s", input);
            for (int w = 0; w < 10; w++){
                if (input[w] == '.'){
                    printf("%s\n", input);
                    break;
                }
            }
        }
    }
}