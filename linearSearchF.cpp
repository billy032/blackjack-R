#include <iostream>

using namespace std;

int linearSearch(const int arr[], int size, int value)
{
    int index = 0;
    int position = -1;
    bool found = false;
    
    while (indes < size && !found)
    {
        if (arr[index] == value) {
            
            found = true;
            position = index;
        }
        index++;
        
    }
    return position;
 
}