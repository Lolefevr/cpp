/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:11:09 by lolefevr          #+#    #+#             */
/*   Updated: 2023/08/28 16:44:48 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl << std::endl << std::endl;

	const WrongAnimal		*wrongA = new WrongAnimal();
	const WrongAnimal		*wrongB = new WrongCat();
	std::cout << wrongA->getType() << " " << std::endl;
	std::cout << wrongB->getType() << " " << std::endl;
	wrongA->makeSound();
	wrongB->makeSound();
	std::cout << std::endl;
	delete i;
	delete j;
	delete wrongA;
	delete wrongB;
	return 0;
}
