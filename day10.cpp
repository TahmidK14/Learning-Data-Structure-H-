//Finding second largest element
#include <iostream>
using namespace std;

int findSecondLargest(int nums[], int arr_size)
{
    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for (int i = 0; i < arr_size; i++)
    {
        if (nums[i] > largest)
        {
            second_largest = largest;
            largest = nums[i];
        }
        else if (nums[i] > second_largest && nums[i] != largest)
        {
            second_largest = nums[i];
        }
    }

    return second_largest;
}

int main()
{
    int nums[] = {7, 12, 9, 15, 19, 32, 56, 70};
    int n = sizeof(nums) / sizeof(nums[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    int second_largest = findSecondLargest(nums, n);

    if (second_largest != INT_MIN)
    {
        cout << "\nThe second largest element is: " << second_largest;
    }
    else
    {
        cout << "\nNo second largest element";
    }

    return 0;
}
