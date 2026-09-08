/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ColorMacros.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 02:58:58 by nanasser          #+#    #+#             */
/*   Updated: 2026/09/08 02:58:58 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLORMACROS_HPP
# define COLORMACROS_HPP

# ifndef GRAY
#  define GRAY "\033[90m"
# endif
# ifndef BWHITE
#  define BWHITE  "\033[1;37m"
# endif
# ifndef RESET
#  define RESET "\033[0m"
# endif
# ifndef RED
#  define RED "\033[0;31m"
# endif
# ifndef BRED
#  define BRED "\033[1;31m"
# endif

#endif