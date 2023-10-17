/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:11:09 by lolefevr          #+#    #+#             */
/*   Updated: 2023/09/26 12:11:12 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <memory>


int main()
{
	int	i = -1;
	const Animal *index[10];
	while (++i < 5)
		index[i] = new Dog();
	i--;
	while (++i < 10)
		index[i] = new Cat();

	for (i = 0; i < 10; ++i)
		index[i]->makeSound();

	for (i = 0; i < 10; i++)
		delete index[i];
	std::cout << std::endl;
	return 0;
}
/*
int main()
{
    std::unique_ptr<Animal> index[10];

    int i = -1;
    while (++i < 5)
        index[i] = std::make_unique<Dog>();
	i--;
    while (++i < 10)
        index[i] = std::make_unique<Cat>();

    for (i = 0; i < 10; ++i)
		index[i]->makeSound();

	const Animal* j = new Dog();
	const Animal* k = new Cat();
	delete j;
	delete k;

    return 0;
}*/
