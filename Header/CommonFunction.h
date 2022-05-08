//
//  CommonFunction.h
//  Dino Journey
//
//  Created by Nguyễn Tiến Dũng on 4/23/22.
//  Copyright © 2022 Nguyễn Tiến Dũng. All rights reserved.
//

#ifndef CommonFunction_h
#define CommonFunction_h
#define ii pair<int, double>
#include <bits/stdc++.h>
using namespace std;
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>
#include <thread>
#include <chrono>
#include <ctime>

static SDL_Window* g_window = NULL;
static SDL_Renderer* g_renderer = NULL;
static SDL_Event g_event;

const string WINDOW_TITLE = "DINO JOURNEY";

const int FRAME_PER_SECOND = 60;
const int SCREEN_WIDTH = 928;
const int SCREEN_HEIGHT = 522;

const int COLOR_KEY_R = 167;
const int COLOR_KEY_G = 175;
const int COLOR_KEY_B = 180;

const int GROUND = 430;
const double BACK_GROUND_SPEED = 4;
const double GROUND_SPEED = 4; /*8.64*/
const double GRASS_GROUND_SPEED = 5;
const double ENEMY_SPEED = 4 ; /*8.64*/

const int MIN_HEIGHT = 360;
const int MAX_HEIGHT = 330;
const int GRASS_HEIGHT = 8; /*57*/

const int BASE_OFFSET_SPEED = 0;
//const int JUMP_POW = 18;
const int MAX_ACCELERATION = 9;

const int MIX_CHANNEL = -1;
const int REPEATIVE = -1;
const int NOT_REPEATIVE = 0;

#endif /* CommonFunction_h */
