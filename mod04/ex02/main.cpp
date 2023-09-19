/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:11:09 by lolefevr          #+#    #+#             */
/*   Updated: 2023/08/30 10:15:20 by lolefevr         ###   ########.fr       */
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
	const Animal* Animals[10];
	for (int i = 0; i < 5; i++)
		Animals[i] = new Dog();
	for (int i = 5; i < 10; i++)
		Animals[i] = new Cat();
	for (int i = 0; i < 10; i++)
		Animals[i]->makeSound();
	for (int i = 0; i < 10; i++)
	{
		delete Animals[i];
	}
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
    return 0;
}
*/
