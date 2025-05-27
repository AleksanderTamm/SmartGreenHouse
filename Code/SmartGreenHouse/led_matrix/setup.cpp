/* setup.cpp
 * This is the configuration code for a IoTempower node.
 * Here, you define all the devices (and eventually their interactions)
 * connected to the node specified with this directory.
 * If you want to see more device configuration examples,
 * check $IOTEMPOWER_ROOT/examples/running-node-test-setup.cpp
 *
 * Or check out the command reference for potential devices you can add.
 * 
 * This whole comment block can be deleted
 * */

rgb_strip(strip1, 50, WS2811, D3, BRG);
rgb_strip(strip2, 50, WS2811, D5, BRG);
rgb_strip(strip3, 50, WS2811, D4, BRG);
rgb_strip(strip4, 50, WS2811, D1, BRG);

rgb_matrix(matrix, 25, 4)
    .with(IN(strip1), 0, 0, Right_Down, 25)
    .with(IN(strip2), 0, 1, Right_Down, 25)
    .with(IN(strip3), 0, 2, Right_Down, 25)
    .with(IN(strip4), 0, 3, Right_Down, 25);