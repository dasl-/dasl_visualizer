#pragma once

#include "ofMain.h"
#include "ftFbo.h"
#include "ftDrawForce.h"


namespace flowTools {
    
    class soundForces {
        
    public:
        void setup(int _simulationWidth, int _simulationHeight, int _densityWidth = 0, int _densityHeight = 0) ;
        
    private:
        int					simulationWidth;
        int					simulationHeight;
        int					densityWidth;
        int					densityHeight;

    };
    
}
