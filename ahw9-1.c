#include <stdio.h>

#define NB_COLORS 5

int main() {

    char color_string[NB_COLORS][100] = {"Red", "Green", "Blue", "Black", "White"};
    
    int color_rgb[NB_COLORS][3] = {
        {255, 0, 0}, //Red
        {0, 255, 0}, //Green
        {0, 0, 255}, //Blue
        {0, 0, 0}, //Black
        {255, 255, 255} //White
    };

    int r, g, b;
    scanf("%d", &r);
    scanf("%d", &g);
    scanf("%d", &b);

    int id_nearest_color = 0;
    double smallest_distance = -1;

    for(int i = 0; i < NB_COLORS; i++) {
        double r_diff = (r - color_rgb[i][0]) * (r - color_rgb[i][0]);
        double g_diff = (g - color_rgb[i][1]) * (g - color_rgb[i][1]);
        double b_diff = (b - color_rgb[i][2]) * (b - color_rgb[i][2]);

        double distance = r_diff + g_diff + b_diff;

        if(distance < smallest_distance || smallest_distance == -1) {
            id_nearest_color = i;
            smallest_distance = distance;
        }
    }

    printf("The nearest color is %s", color_string[id_nearest_color]);
}
