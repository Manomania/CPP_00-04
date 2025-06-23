/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximart <maximart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 09:01:33 by maximart          #+#    #+#             */
/*   Updated: 2025/06/23 09:03:29 by maximart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl level;

	level.complain("DEBUG");
	level.complain("DEBG");
	level.complain("INFO");
	level.complain("INO");
	level.complain("WARNING");
	level.complain("WARNNG");
	level.complain("ERROR");
	level.complain("ERRR");
	return (0);
}
