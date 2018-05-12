
// COMP3120 HOMEWORK
// Morris Eguakun
// 05/10-2018

using namespace std;
#include <iostream>


    int main() {
        char characters[45] = {'a', 'b', 'c', 'd', 'f', 'e', 'a', 'c', 'c', 'd', 'd', 'e', 'a', 'f', 'g', 'h', 'c', 'c',
                               'h', 'c'};

        int charCount = 20;
        int a = 0, b = 0, c = 0; //INITIALIZE MY VARIABLES


        for (a = 0; a < charCount; a++) {   //NESTED FOR LOOPS TO EXECUTE SEARCH AND DELETE
            for (b = a + 1; b < charCount;) {
                if (characters[b] == characters[a]) { //CHECK IF DUPLICATE
                    for (c = b; c < charCount - 1; c++)
                        characters[c] = characters[c + 1]; //REPLACE DUPLICATE
                    charCount--;    //UPDATE CHARCOUNT
                } else
                    b++;
            }

        }
        int d;
        std::cout << "\r\nThe remaining characters in the array are: " << endl; //PRINT OUT RESULTS
        for (d = 0; d < charCount; d++)
            std::cout << characters[d] << ", ";

        return 0; //EXIT CODE
    }


















