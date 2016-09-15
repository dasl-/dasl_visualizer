//
//  soundForces.cpp
//  dasl_visualizer
//
//  Created by David Leibovic on 9/13/16.
//
//

#include "soundForces.h"


namespace flowTools {

    void soundForces::setup(int _simulationWidth, int _simulationHeight, int _densityWidth, int _densityHeight) {
        simulationWidth = _simulationWidth;
        simulationHeight = _simulationHeight;
        densityWidth = (!_densityWidth)? simulationWidth : _densityWidth;
        densityHeight = (!_densityHeight)? simulationHeight: _densityHeight;
//        
//        drawForces = new ftDrawForce[numDrawForces];
//        drawForces[0].setup(densityWidth, densityHeight, FT_DENSITY, true);
//        drawForces[0].setName("draw full res");
//        drawForces[1].setup(simulationWidth, simulationHeight, FT_VELOCITY, true);
//        drawForces[1].setName("draw flow res 1");
//        drawForces[2].setup(simulationWidth, simulationHeight, FT_TEMPERATURE, true);
//        drawForces[2].setName("draw flow res 2");
//        drawForces[3].setup(densityWidth, densityHeight, FT_DENSITY, false);
//        drawForces[3].setName("draw full res");
//        drawForces[4].setup(simulationWidth, simulationHeight, FT_VELOCITY, false);
//        drawForces[4].setName("draw flow res 1");
//        drawForces[5].setup(simulationWidth, simulationHeight, FT_TEMPERATURE, false);
//        drawForces[5].setName("draw flow res 2");
//        
//        leftButtonParameters.setName("mouse left button");
//        leftButtonParameters.add(doResetDrawForces.set("reset", false));
//        rightButtonParameters.setName("mouse right button");
//        rightButtonParameters.add(doResetDrawForces.set("reset", false));
//        doResetDrawForces.addListener(this, &ftDrawMouseForces::resetDrawForcesListner);
//        for (int i=0; i<3; i++) {
//            leftButtonParameters.add(drawForces[i].parameters);
//            rightButtonParameters.add(drawForces[i+3].parameters);
//        }
    }
    
}
