//#include<iostream>
//using namespace std;
//void Input(int*& iarr, int& size)
//{
//    int value, count = 0;
//    while (true)
//    {
//        cin >> value;
//        if (value == -1)
//        {
//            break;
//        }
//        if (count == size)
//        {
//            int* doublearr = new int[2 * size];
//            for (int i = 0; i < size; i++)
//            {
//                doublearr[i] = iarr[i];
//            }
//            delete[] iarr;
//            iarr = doublearr;
//            size *= 2;
//        }
//        iarr[count++] = value;
//    }
//    size = count;
//}
//
//void reverse(int* iarr, int size)
//{
//    int i = 0, j = size - 1;
//    while (i < j)
//    {
//        int temp = iarr[i];
//        iarr[i] = iarr[j];
//        iarr[j] = temp;
//        i++;
//        j--;
//    }
//}
//
//void Output(int* iarr, int size)
//{
//    cout << "In Reverse Order: " << endl;
//    for (int i = 0; i < size; i++)
//    {
//        cout << iarr[i] << " ";
//    }
//    cout << endl;
//}
//
//int main()
//{
//    int size = 5;
//    int* iarr = new int[size];
//    Input(iarr, size);
//    reverse(iarr, size);
//    Output(iarr, size);
//    delete[] iarr;
//    return 0;
//}