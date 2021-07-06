#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 0;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        while (++i < argc)
        {
            j = -1;
            while (argv[i][++j])
                std::cout << (char)std::toupper(argv[i][j]);
        }
    }
    std::cout <<  std::endl;
    return (0);
}