/**
   Copyright 2015 W. Max Lees

   This file is part of Jarvis OS.

   Jarvis OS is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   Jarvis OS is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with Jarvis OS.  If not, see <http://www.gnu.org/licenses/>.
*/

/**
   FILE: Network.hpp

   @author W. Max Lees
   @docdate 06.07.2015

   @descr Network interface. Used so different types of networks can
          be plugged into Jarvis-NLP without worry about changing core
          code.
*/

#ifndef _H_NETWORK
#define _H_NETWORK

template <typename T>
class Network {
	public:
      virtual bool init() = 0;
      virtual std::vector<T> call(std::string input) = 0;
      virtual bool destroy() = 0;

      virtual ~Network() {}
	protected:
		
};

#endif // _H_NETWORK
