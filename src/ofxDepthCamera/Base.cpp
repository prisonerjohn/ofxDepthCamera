/*
*  Base.cpp
*  ofxDepthCamera
*
*  Created by Jim George on 3/13/12 for ofxDepthKit
*  Copyright 2012 FlightPhase. All rights reserved.
*  Modified by Matt Felsen 10/2015
*
*/

#include "Base.h"

using namespace ofxDepthCam;


bool Base::isFrameNew() {
	bool ret = bNewFrame;
	bNewFrame = false;
	return ret;
}

unsigned short Base::getMaxDepth() {
	return maxDepth;
}

float Base::getFrameRate() {
	return fr;
}

ofShortPixels& Base::getRawDepth() {
	return depthPixels;
}

ofImage& Base::getColorImage() {
	return colorImage;
}
