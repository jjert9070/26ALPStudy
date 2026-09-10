#include <iostream>
#include <vector>

std::vector<std::vector<char>> output(std::vector<std::vector<char>>& input_pattern,int start, int end)
{
    if(start == end)
    {
        return;
    }
    std::vector<std::vector<char>> pattern;

    pattern.resize(start, std::vector<char>(start, '\0'));

    if(start == 3)
    {
        for(size_t i = 0; i < 3; i++)
        {
            pattern[0][i] = '*';
        }

        pattern[1][0] = '*';
        pattern[1][2] = '*';

        for(size_t j = 0; j < 3; j++)
        {
            pattern[2][j] = '*';
        }

    }
    else if(start > 3)
    {
        
    }

}


int main()
{
    std::vector<std::vector<char>> grid;
    std::vector<std::vector<char>> pattern;
    int n;
    std::cin>>n;

    pattern.resize(1, std::vector<char>(1, '\0'));
    grid.resize(n, std::vector<char>(n, '\0'));

    pattern[0][0] = '*';

    grid = output(pattern, 3, n);

    return 0;
}