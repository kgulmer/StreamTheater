/************************************************************************************

Filename    :   View.cpp
Content     :
Created     :	6/17/2014
Authors     :   Jim Dos�

Copyright   :   Copyright 2014 Oculus VR, LLC. All Rights reserved.

This source code is licensed under the BSD-style license found in the
LICENSE file in the Cinema/ directory. An additional grant 
of patent rights can be found in the PATENTS file in the same directory.

*************************************************************************************/

#include "View.h"


namespace VRMatterStreamTheater {

View::View( const char *_name ) :
	name( _name ),
	CurViewState( VIEWSTATE_CLOSED ),
	NextViewState( VIEWSTATE_CLOSED )

{
}

View::~View()
{
}

} // namespace VRMatterStreamTheater
