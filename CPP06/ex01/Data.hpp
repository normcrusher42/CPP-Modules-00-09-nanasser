/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 01:25:14 by nanasser          #+#    #+#             */
/*   Updated: 2026/09/08 01:25:14 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

# include <string>

struct Data
{
	std::string	name;
	char		*address;
	int			credit_card_number;
	bool		homeless_status;
	std::string	steam_login;
};

#endif