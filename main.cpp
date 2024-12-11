#include <iostream>

using namespace std;

int main()
{
    int all_block;
    int space_block;
    cin >> all_block;
    cin >> space_block;
    int sum = 0;
    int different = 0;
    int blocks[all_block];
    for(int i = 0;i<all_block; i++)
    {
        cin >> blocks[i];
        sum += blocks[i];
    }

    if(sum - space_block == 0)
    {
        cout << "-1";
    }else{
        different = sum - space_block;
    }


    return 0;
}
