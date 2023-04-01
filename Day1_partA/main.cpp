#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    ifstream input_file("input.txt");
    string line;
    int highest_calories = 0;
    vector<int> elf_calories (3,0);
    int current_calories = 0;
    
    while (getline(input_file, line)) {
        if (line.empty()){
          if(current_calories > highest_calories){
              highest_calories = current_calories;
          }
          current_calories = 0;
        }else{
            current_calories += stoi(line);
        }
    }
  
    cout << highest_calories << endl;
    return 0;
}
