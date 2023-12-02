#include "PmergeMe.hpp"


/*void fusion_insertion(std::vector<int>& gauche, std::vector<int>& droite, std::vector<int>& resultat) {
    size_t i = 0, j = 0;

    while (i < gauche.size() && j < droite.size()) {
        if (gauche[i] < droite[j]) {
            resultat.push_back(gauche[i]);
            i++;
        } else {
            resultat.push_back(droite[j]);
            j++;
        }
    }

    while (i < gauche.size()) {
        resultat.push_back(gauche[i]);
        i++;
    }

    while (j < droite.size()) {
        resultat.push_back(droite[j]);
        j++;
    }
}

void tri_fusion_insertion(std::vector<int>& liste) {
    if (liste.size() <= 1) {
        return;
    }

    int milieu = liste.size() / 2;
    std::vector<int> gauche(liste.begin(), liste.begin() + milieu);
    std::vector<int> droite(liste.begin() + milieu, liste.end());

    tri_fusion_insertion(gauche);
    tri_fusion_insertion(droite);

    liste.clear();
    fusion_insertion(gauche, droite, liste);
}*/

int main(int argc, char **argv)
{
	/*
		for (int i = 1; i < argc; i++)
		{
			if (!check_input(argv[i])
				return (std::cout << "Error" << std::endl, 1);
		}
	*/
	//std::vector<int> vec;
	PmergeMe	test(argc, argv);

/*	for (int i = 1; i < argc; i++)
	{
		std::string	str  = argv[i];
		vec = init_vec(vec, atoi(str.c_str()));
	}*/

	//print_list(test.getCont());
    std::cout << "Liste non triée : ";
	std::cout << test << std::endl;

    /*for (; it != vec.end(); it++) {
        std::cout << *it << " ";
    }*/
    //std::cout << std::endl;

    // Utiliser la fonction de tri
    //tri_fusion_insertion(vec);
	//std::vector<int>	vec = test.getCont();
	//std::vector<int>::iterator	it = vec.begin();

	test.Ford_Johnson_algorithm(test._cont);

	//test.getCont() = vec;
	//print_list(test.getCont())
    std::cout << "Liste triée : ";
	std::cout << test << std::endl;
    /*for (it = vec.begin(); it != vec.end(); it++) {
        std::cout << *it << " ";
    }*/
    //std::cout << std::endl;

    return 0;
}


// A faire :

/*
	Faire en sorte que ca marche avec un template de classe
	et verifier se qu'il se passe reellement dans la liste pour voir si tout ce passe bien.
*/
