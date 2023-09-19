/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 10:06:05 by lolefevr          #+#    #+#             */
/*   Updated: 2023/08/14 13:59:55 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>

class Harl
{
	public:

	typedef void (Harl::*functionPtr)();

	Harl();
	~Harl();

	void		complain(std::string level);

	private:

	functionPtr	funcPtr[4];

	void		debug(void);
	void		info(void);
	void		warning(void);
	void		error(void);

};

#endif
