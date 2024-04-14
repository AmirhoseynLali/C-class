#include <iostream>
#include <windows.h>

using namespace std;



void program_1()
{
    cout << "Enter The Number OF Rows : ";
    int row, column ;
    cin >> row;
    cout << endl << "Enter The Number Of Columns : ";
    cin >> column; cout << endl;
    int data[row][column], mean, max, min;
    for (int index = 0; index < row; index++)
    {
        for(int index_2 = 0; index_2 < column; index_2++)
        {
            cout << "Enter The  [ "<<index <<" ] [ "<< index_2 <<"] : ";
            cin >> data[index][index_2];
            if (index == 0 && index_2 == 0)
            {
                min = data[index][index_2], max = data[index][index_2], mean = data[index][index_2];
            }
            else
            {
                mean += data[index][index_2];
                if (data[index][index_2] > max)
                    max = data[index][index_2];
                if (data[index][index_2] < min)
                    min = data[index][index_2];
            }
            cout << endl;
        }
    }
    cout << "Mean : " << mean / (row * column);
    cout << "\nMax : " << max << "\nMin : " << min <<endl;
}


void program_2()
{
    cout << "Enter The Number OF Rows : ";
    int row, column ;
    cin >> row;
//    cout << endl << "Enter The Number Of Columns : ";
//    cin >> column; cout << endl;
    column = row;
    int data[row][column], answer = 0;
    for (int index = 0; index < row; index++)
    {
        for(int index_2 = 0; index_2 < column; index_2++)
        {
            cout << "Enter The  [ "<<index <<" ] [ "<< index_2 <<"] : ";
            cin >> data[index][index_2];
            cout << endl;
        }
    }

    for (int index = 0; index < row; index++)
    {
        answer += data[index][index];
    }

    cout << "Answer Is : " << answer << endl;
}

void program_3()
{
    // making things ready
    cout << "Enter The Number OF Rows : ";
    int row, column ;
    cin >> row;
    cout << endl << "Enter The Number Of Columns : ";
    cin >> column; cout << endl;

    int data[row][column], mean = 0;
    for (int index = 0; index < row; index++)
    {
        for(int index_2 = 0; index_2 < column; index_2++)
        {
            cout << "Enter The  [ "<<index <<" ] [ "<< index_2 <<"] : ";
            cin >> data[index][index_2];
            mean += data[index][index_2];
            cout << endl;
        }
    }
    //caculating
    mean /= (row * column);
    for (int index = 0; index < row; index++)
    {
        for(int index_2 = 0; index_2 < column; index_2++)
        {
            if (data[index][index_2] < mean)
                data[index][index_2] = -1;
            else if (data[index][index_2] == mean)
                data[index][index_2] = 0;
            else if (data[index][index_2] > mean)
                data[index][index_2] = 1;
        }
    }
    //showing
    cout << "Mean IS : " << mean << endl;
    for (int index = 0; index < row; index++)
    {
        for(int index_2 = 0; index_2 < column; index_2++)
        {
            cout << "[ "<<index <<" ] [ "<< index_2 <<"] : " << data[index][index_2] << endl;
        }
    }

}

void program_4()
{
    // making things ready
    cout << "Enter The Number OF Rows : ";
    int row, column ;
    cin >> row;
    cout << endl << "Enter The Number Of Columns : ";
    cin >> column; cout << endl;

    int data[row][column], mean = 0;
    for (int index = 0; index < row; index++)
    {
        for(int index_2 = 0; index_2 < column; index_2++)
        {
            cout << "Enter The  [ "<<index <<" ] [ "<< index_2 <<"] : ";
            cin >> data[index][index_2];
            mean += data[index][index_2];
            cout << endl;
        }
    }

    int e_r = row-1 , e_c = column-1, counter = 0;
    bool end = true;
    for (int index = 0; index < row && end; index++)
    {
        for(int index_2 = 0; index_2 < column; index_2++)
        {
            if (counter == ((row * column)/2))
            {
                end = false;
                break;
            }
            int temp_v = data[index][index_2];
            data[index][index_2] = data[e_r][e_c];
            data[e_r][e_c] = temp_v;
            e_c--;
            counter ++;

        }
        e_r --;
        e_c = column-1;
    }

    for (int index = 0; index < row; index++)
    {
        for(int index_2 = 0; index_2 < column; index_2++)
        {
            cout << "[ "<<index <<" ] [ "<< index_2 <<"] : " << data[index][index_2] << endl;
        }
    }
}




int main() {
    system("color f3");
    program_4();

    return 0;
}
