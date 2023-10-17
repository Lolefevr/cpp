/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:37:20 by lolefevr          #+#    #+#             */
/*   Updated: 2023/10/15 15:00:49 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>

Base * generate(void)
{
    int num = rand() % 100;

    if (num > 50)
        return (new A);
    else if (num > 25)
        return (new B);
    return (new C);
}

void identify_from_pointer(Base * p)
{
    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "A";
    if (dynamic_cast<B*>(p) != NULL)
        std::cout << "B";
    if (dynamic_cast<C*>(p) != NULL)
        std::cout << "C";
}

void identify_from_reference(Base & p)
{
    if (dynamic_cast<A*>(&p) != NULL)
        std::cout << "A";
    if (dynamic_cast<B*>(&p) != NULL)
        std::cout << "B";
    if (dynamic_cast<C*>(&p) != NULL)
        std::cout << "C";
}

int main()
{
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Test #" << i + 1 << std::endl;
        Base *ptr = generate();
        std::cout << "[identify_from_pointer]: ";
        identify_from_pointer(ptr);
        std::cout << std::endl << "[identify_from_reference]: ";
        identify_from_reference(*ptr);
        std::cout << std::endl;
        std::cout << std::endl;
    }
    return (0);
}
