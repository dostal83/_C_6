#include <iostream>
#include <vector>

using namespace std;

int num = 0;
int curIndex = 0;


int currentSimple = 1, tempSimple = 1, nextSimple = 1;
void Simples();

void main() {
    for (int i = 0; i < 500; i++) {
        Simples();
        cout << currentSimple << " ";
        currentSimple = nextSimple; tempSimple = nextSimple;
    }

}

void Simples() {
    bool lNextSimpleFound = false;
    bool lCurSimpleFound = false;
    while (true) {
        for (int i = currentSimple; i <= tempSimple + 1; i++)
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0) {
                    break;
                }
                else if (i == j + 1) {
                    if ((!lCurSimpleFound)) {
                        if (i > currentSimple) {
                            currentSimple = i;
                            lCurSimpleFound = true;
                        }
                    }
                    else
                    {
                        if (i > nextSimple) {
                            nextSimple = i;
                            lNextSimpleFound = true;
                            break;
                        }
                    }
                }                
            }
        tempSimple++;
        if (lNextSimpleFound) {
            break;
        }
    }
}