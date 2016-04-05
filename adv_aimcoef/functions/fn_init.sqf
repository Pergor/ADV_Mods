//reduce aim sway coefficient:
player setCustomAimCoef 0.65;
ADV_setCustomAimCoef_EVH = player addEventhandler ["Respawn",{player setCustomAimCoef 0.65;}];