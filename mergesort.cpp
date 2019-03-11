#include <iostream>
#include <vector>

/**
    Alyssa Ma
    Mergesort with vectors
*/

//print function for testing purposes
void print_vec(std::vector<int> vec)
{
    int s = vec.size();
    for(int i = 0; i < s; i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << "\n";
}

//helper function for merge sort
void merge_helper(std::vector<int> vec, int currmin, int currmax, int mid)
{
    std::vector<int> templ(mid - currmin + 1); //first half
    std::vector<int> tempr(currmax - mid); //second half
    int bot = mid - currmin + 1;
    int up = currmax - mid;

    //fill the two arrays with previous data
    for(int i = 0; i < bot; i++)
    {
        templ[i] = vec[currmin + i];
    }
    for(int i = 0; i < up; i++)
    {
        tempr[i] = vec[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = currmin;

    while(i < bot && j < up)
    {
        if(templ[i] <= tempr[j])
        {
            vec[k] = templ[i];
            i++;
        }
        else
        {
            vec[k] = tempr[j];
            j++;
        }
        k++;
    }

    while(i < bot)
    {
        vec[k] = tempr[i];
        i++;
        k++;
    }

    while(j < up)
    {
        vec[k] = tempr[j];
        j++;
        k++;
    }
}

void merge_sort(std::vector<int> vec, int currmin, int currmax)
{

    //Find the middle of the vector

    if(currmin < currmax)
    {
        //set the middle
        int mid = (currmin + (currmax - currmin)) / 2;
        std::cout<<mid;
        //Sort the first half of the vector
        merge_sort(vec, currmin, mid);
        //Sort the second half of the vector
        merge_sort(vec, mid + 1, currmax);
        //Merge the two sorted halves back together
        merge_helper(vec, currmin, currmax, mid);
        //Continue until entire vector is sorted
    }
}

int main()
{
    std::vector<int> vec = { 4,234,34,65,76};
    //Find the size of the vector
    int currmax = vec.size() - 1;
    //for a random vector
std::cout <<currmax;

    merge_sort(vec, 0, currmax);

    return 0;
}
