#ifndef RENDER_H
#define RENDER_H

#include "game.h"

void render_setup(void);
void render_teardown(void);
void render(const Stage *stage, const Player *player, double elapsed_time, int current_stage, int total_stages);

#endif
