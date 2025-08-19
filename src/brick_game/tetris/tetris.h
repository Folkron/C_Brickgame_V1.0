#ifndef TETRIS_H_
#define TETRIS_H_

#include "tetris_backend.h"
#include "tetris_fsm.h"

tetris_state game_loop(GameInfo_t *gameInfo, UserAction_t sig);

#endif  // TETRIS_H_