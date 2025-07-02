#include <iostream>
#include <fstream>

int main(){
    std::ofstream MyWriteFile("myfile.txt");

    MyWriteFile << "Writing into the file";

    MyWriteFile.close();
    // text to read from the file
    std::string myText;

    std::ifstream myReadFile("myfile.txt");

    // reading from the file line by line
    while(getline(myReadFile, myText)){
        std::cout<< myText << "\n";
    }

    myReadFile.close();
	return 0;
}