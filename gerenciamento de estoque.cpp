#include <iostream>
#include <string>
#include <vector>

struct Produto {
    std::string nome;
    int quantidade;
};

int main() {
    std::vector<Produto> estoque;

    Produto produto1 = {"Camisetas", 30};
    Produto produto2 = {"Calcas Jeans", 50};
    Produto produto3 = {"Tenis esportivos", 500};

    estoque.push_back(produto1);
    estoque.push_back(produto2);
    estoque.push_back(produto3);

    int escolha;

    while (true) {
        // Exibir op��es para o usu�rio
        std::cout << "\nEscolha uma op��o:\n";
        std::cout << "1. Adicionar produto ao estoque\n";
        std::cout << "2. Consultar estoque\n";
        std::cout << "3. Sair\n";

        std::cin >> escolha;

        if (escolha == 1) {
            // Adicionar um novo produto ao estoque
            Produto novoProduto;
            std::cout << "Nome do produto: ";
            std::cin.ignore(); // Descarte caracteres extras no buffer de entrada
            std::getline(std::cin, novoProduto.nome); // Leia o nome com espa�os em branco
            std::cout << "Quantidade: ";
            std::cin >> novoProduto.quantidade;
            estoque.push_back(novoProduto);
            std::cout << "Produto adicionado ao estoque.\n";
        } else if (escolha == 2) {
            // Consultar o estoque
            std::cout << "Estoque:\n";
            for (size_t i = 0; i < estoque.size(); ++i) {
                std::cout << "Nome: " << estoque[i].nome << ", Quantidade: " << estoque[i].quantidade << "\n";
            }
        } else if (escolha == 3) {
            // Sair do programa
            std::cout << "Saindo do sistema de gestao de estoques. Ate logo!\n";
            break;
        } else {
            std::cout << "Op��o inv�lida. Tente novamente.\n";
        }
    }

    return 0;
}

