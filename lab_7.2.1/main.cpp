#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void createArray(int** arr, const int rowCount, const int colCount, const int Low, const int High)
{
   
    for (int i=0; i<rowCount; i++)
    for (int j=0; j<colCount; j++)
    arr[i][j] = Low + rand() % (High-Low+1);
    
}


void printArray(int** arr, const int rowCount, const int colCount)
{
    cout << endl;
    for (int i=0; i<rowCount; i++)
    {
    for (int j=0; j<colCount; j++)
    cout << setw(4) << arr[i][j];
    cout << endl;
    }
    cout << endl;
}





void Max(int** arr, const int rowCount, const int colCount)
{
    int max = 0;

    int result[rowCount];
    int i = 0;
    while (i < rowCount)
    {
        for(int j = 0; j < colCount; j++)
        {
            if(arr[i][j] > max)
            {
                max = arr[i][j];
            }
            if(i==j)
            {
                arr[i][j] = max;
            }
        }
        result[i] = max;
        max = 0;
        i++;
    
    }
    for(int i = 0; i <colCount; i++)
    {
        cout <<result[i]<<endl;
        
    }
    
}





int main()
{
    srand((unsigned)time(NULL));
    int Low = 0;
    int High = 5;
    int rowCount = 3;
    int colCount = 3;
    int **arr = new int*[rowCount];
    for (int i=0; i<rowCount; i++)
    {
        arr[i] = new int[colCount];
    }
    createArray(arr, rowCount, colCount, Low, High);
    printArray(arr, rowCount, colCount);
    Max(arr, rowCount, colCount);
    printArray(arr, rowCount, colCount);
    for(int i = 0; i < rowCount; i++)
        delete [] arr[i];
        delete [] arr;
    
return 0;
    
}
    
    
