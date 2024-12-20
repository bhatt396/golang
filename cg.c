#include<graphics.h>
#include<conio.h>
#include<stdlib.h>

int main() {
    // Initialize the graphics mode
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw a rectangle
    rectangle(100, 100, 300, 200); // Parameters: (left, top, right, bottom)

    // Draw a circle
    circle(400, 150, 50); // Parameters: (center_x, center_y, radius)

    // Draw a line
    line(100, 250, 500, 250); // Parameters: (x1, y1, x2, y2)

    // Draw an ellipse
    ellipse(400, 300, 0, 360, 100, 50); // Parameters: (center_x, center_y, start_angle, end_angle, radius_x, radius_y)

    // Wait for a key press before closing the graphics window
    getch();

    // Close the graphics mode and return
    closegraph();
    return 0;
}
