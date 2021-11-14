/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 15:16:50 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/14 15:16:51 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _KAREN_H
#define _KAREN_H

#include <iostream>
#include <string>

class Karen
{
	void debug(void);
	void info( void );
	void warning( void );
	void error( void );
	public:
		void complain( std::string level );


};
#endif
