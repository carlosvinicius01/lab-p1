#include <iostream>
#include <fstream>
#include <string>
int main()
{
    std::ifstream teste;
    std::ofstream backup;
    std::string data;

    teste.open("teste.txt");
    backup.open("teste_bkp.txt");
    if (teste.is_open())
    {
        while (!teste.eof())
        {
            getline(teste, data);
            backup << data;
        }
        teste.close();
    }
    else
        std::cout << "Erro\n";

    backup.close();

    return 0;
}