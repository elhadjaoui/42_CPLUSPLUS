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
		void (Karen::*level[4]);
		void complain( std::string level );


};
#endif
