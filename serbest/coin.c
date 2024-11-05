//wsl üzerinde nasıl çalıştığını bilseydiniz ya direkt linux kurardınız ya da full native windows devam ederdiniz

#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <stdio.h>

int main(int argc, char **argv) {
    if (!al_init()) {
        fprintf(stderr, "Allegro başlatılamadı!\n");
        return -1;
    }

    if (!al_init_primitives_addon()) {
        fprintf(stderr, "Allegro primitives eklentisi başlatılamadı!\n");
        return -1;
    }

    ALLEGRO_DISPLAY *display = al_create_display(800, 600);
    if (!display) {
        fprintf(stderr, "Pencere oluşturulamadı!\n");
        return -1;
    }

    // Kare koordinatları ve hız
    float x = 50;
    float y = 50;
    float dx = 2;
    float dy = 2;

    // Oyun döngüsü
    bool running = true;
    while (running) {
        // Olayları kontrol et
        ALLEGRO_EVENT_QUEUE *event_queue = al_create_event_queue();
        ALLEGRO_EVENT event;
        al_register_event_source(event_queue, al_get_display_event_source(display));
        al_wait_for_event(event_queue, &event);

        if (event.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
            running = false;
        }

        // Kareyi hareket ettir
        x += dx;
        y += dy;

        // Kenarlara çarpınca yön değiştir
        if (x < 0 || x > 800 - 50) dx = -dx;
        if (y < 0 || y > 600 - 50) dy = -dy;

        // Ekranı temizle ve kareyi çiz
        al_clear_to_color(al_map_rgb(122, 122, 120));
        al_draw_filled_rectangle(x, y, x + 50, y + 50, al_map_rgb(255, 0, 0));
        al_flip_display();

        // Olay kuyruğunu temizle
        al_destroy_event_queue(event_queue);

        // Biraz bekle
        al_rest(0.01);
    }

    al_destroy_display(display);
    return 0;
}