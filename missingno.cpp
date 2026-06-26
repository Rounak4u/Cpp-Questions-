#include <iostream>
using namespace std;

int main()
{
    int nums[] = {1, 2, 4, 6, 8};

    int n = sizeof(nums) / sizeof(nums[0]);

    int min = nums[0];
    int max = nums[0];

    
    for (int i = 1; i < n; i++)
    {
        if (nums[i] < min)
            min = nums[i];

        if (nums[i] > max)
            max = nums[i];
    }

    cout << "Missing numbers are: ";

    
    for (int i = min; i <= max; i++)
    {
        bool found = false;

        for (int j = 0; j < n; j++)
        {
            if (nums[j] == i)
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << i << " ";
        }
    }

    return 0;
}