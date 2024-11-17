#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl harl;
    if (ac < 2)
    {
        harl.complain("");
    }
    else
    {
        harl.complain(av[1]);
    }
}