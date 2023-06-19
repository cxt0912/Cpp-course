#include <iostream>
using namespace std;

int main(){
    cout << "Hello world\n";    /* \n is equal to endl */
    cout << "Hello world" << endl; /* No endl means in the same line */

    // String function
    string phrase = "Hello world";
    cout << phrase << endl;     /* cout "Hello world" */
    cout << phrase.length() << endl;    /* cout how many characters in this string */
    cout << phrase[0] << endl;    /* cout the FIRST word in the string */
    cout << phrase[2] << endl;    /* cout the THIRD word in the string */
    cout << phrase.find("world", 0) << endl;    /* After the first word, howe many word to find world */
    cout << phrase.find("llo", 1) << endl;    /* After the second word, howe many word to find llo */
    cout << phrase.substr(2, 5) << endl;     /* Print '5' words from the THIRD word */
    cout << phrase.substr(4, 3) << endl;     /* Print '3' words from the FIFTH word */

    string phrase_sub;
    phrase_sub = phrase.substr(2, 4);
    cout << phrase_sub << endl;     /* phrase_sub is '4' words from the THIRD word in phrase */

    phrase[0] = 'U';     /* Change the FIRST character in the string */
    cout << phrase << endl;

    system("pause");
    return 0;
}
