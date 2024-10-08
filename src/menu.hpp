#pragma once

#include "world_init.hpp"
#include "common.hpp"
#include "tiny_ecs_registry.hpp"
#include "world_system.hpp"

void clearMenu();
void renderPauseMenu();
void renderStartMenu();
void saveGame();
int loadLevel();
bool checkSavingValid();
bool loadGame(RenderSystem* renderer, bool& has_key, int& hp_count, int& bullet_count, int& current_level);
bool handleButtonEvents(Entity entity, RenderSystem* renderer, GLFWwindow* window, bool& has_key, int& hp_count, int& bullet_count, int& current_level);