#pragma once
#include "common.hpp"
#include "tiny_ecs.hpp"
#include "components.hpp"

#include <utility>
#include <unordered_map>

class DialogSystem
{
public:
    DialogSystem();
    ~DialogSystem();
    void initializeDialog(std::string dialog_file);
    void createSpeechPoint(unsigned int speech_point);
private:
    std::unordered_map<unsigned int, std::vector<std::pair<int, std::string>>> dialog_data;
    Entity speech_entity;
    void cleanDialog();
    Entity findEntityById(int id);
    std::vector<std::pair<int, std::string>> parseDialog(std::fstream& file);
    void createSpeech(Entity speaker, std::string text, float time);
};