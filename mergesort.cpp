#include <iostream>
#include <vector>

void merge_sort(vector<int> vec)
{
    //Find the size of the vector
    int s = vec.size();
    //Find the middle of the vector
    int h = s / 2;

    //Sort the first half of the vector


    //Sort the second half of the vector


    //Merge the two sorted halves back together


    //Continue until entire vector is sorted
}

//helper function for merge sort
void merge_helper(vector<int> vec)
{
    int currmin = 0; //current min index
    int currmax = vec.size() - 1 //current max index
}

//print function for testing purposes
void print_vec(vector<int> vec)
{
    int s = vec.size();
    for(int i = 0; i < s; i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << "\n";
}

int main()
{
    vector<int> vec(20);

    //for a random vector
    for(int i = 0; i < 20; i++)
    {
        vec[i] = rand() % 100;
    }

    merge_sort(vec);

    return 0;
}
