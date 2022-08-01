/*
Long Guan
102685211
PRG355
*/
#include <iostream>
#include <string>

using namespace std;
int main() {

	//initialize variables
	bool isnumber = 1;
	string userinput;

	//receive data from the user
	cout << "enter a telephone number: " << endl;
	getline(cin, userinput);
	

	//set conditions
		while (userinput.length() != 12) {
			cout << "enter the proper numbers: " << endl;
			getline(cin, userinput);
	}

		
		for (int i = 0; i < userinput.length(); i++) {
			
			if (isdigit(userinput.at(i)) == 0 ) {
				if (userinput.at(i) != ' '&& userinput.at(i) != '-') {
					isnumber = 0;
					break;
				}

			}
			else {
				isnumber = 1;
			}
		}
		
		//output the result
		if (isnumber == 0) {
			cout << "your number is wrong";
		}
		else {
			cout << "your number is correct";
		}



	return 0;
}
/*
enter a telephone number:
438-172 1214
your number is correct

enter a telephone number:
123#456 8213
your number is wrong

enter a telephone number:
a23 321 1241
your number is wrong
*/