typedef struct {
    float sx;
    float sy;
    float heading;
    float speed;
    int gone;
    ALLEGRO_COLOR color;
} Spaceship;

al_draw_line(-8, 9, 0, -11, s->color, 3.0f);
al_draw_line(0, -11, 8, 9, s->color, 3.0f);
al_draw_line(-6, 4, -1, 4, s->color, 3.0f);
al_draw_line(6, 4, 1, 4, s->color, 3.0f);

int main() {
    if (collide with rock) {
        /* code */
    }
    return 0;
}
