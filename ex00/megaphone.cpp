/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:43:53 by hemottu           #+#    #+#             */
/*   Updated: 2023/10/24 20:22:17 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Le standard C++98 est la première version du standard du langage de programmation C++.
C++98 a introduit de nombreuses fonctionnalités clés du langage C++, telles que les 
classes, les modèles, les exceptions, les namespaces, et la bibliothèque standard C++.
Ce standard a posé les bases pour le développement ultérieur de C++, et il a été suivi 
par d'autres versions du standard C++ telles que C++03, C++11, C++14, C++17, et C++20, 
chacune apportant des améliorations, des nouvelles fonctionnalités au langage.
Il est important de noter que C++98 est maintenant considéré comme obsolète. */

#include <iostream> // Pour utiliser std::cout 
#include <string>   // pour utiliser std::string
#include <ctype.h>  // pour toupper();
#include <cstring>  // pour strlen();

int main(int argc, char **argv) 
{
    int i;
    int j;
    
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        i = 1;
        while (i < argc)
        {
            argv[i] = argv[i];
            j = 0;
            while (j < (int)strlen(argv[i]))
            {
                argv[i][j] = (char)toupper(argv[i][j]);
                std::cout << argv[i][j];
                j++;
            }
            i++;
        }
    }
    std::cout << std::endl;
    return 0;
}

/* ici std est un namespace. Les namespaces permettent d'isoler certaines parties du code
dans des espaces distincts pour que ca evite les conflits lors de la compilation.
std indique que ces fonctionnalites font partie de la bibliotheque standard. 

cout est un objet de flux de sortie standard faisant partie de la bibliothèque 
standard du langage (d'où le "std::"). Cet objet est utilisé pour envoyer des données vers 
la sortie standard et donc afficher du texte a l'ecran.
Les chevrons << sont utilisés pour insérer / injecter des données dans l'objet vers lequel il
pointe, ici cout (sortie standard) 
endl (end line) est un objet utilisé pour ajouter une fin de ligne et flush la memoire tampon
de std::cout qui fonctionne avec un buffer */
