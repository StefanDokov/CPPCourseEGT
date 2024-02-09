#include "SoundManager.h"
#include <iostream>
using namespace std;
int volume = MIX_MAX_VOLUME / 2;
bool SoundManager::load(const char* fileName, string id, int type)
{
    if (type == 1) {
        Mix_Music* music = Mix_LoadMUS(fileName);
        if (music == 0) {
            cout << "Could not load music" << Mix_GetError() << endl;
            return false;
        }
        s_mMusic[id] = music;
        return true;
    }
    if (type == 0) {
        Mix_Chunk* chunk = Mix_LoadWAV(fileName);
        if (chunk == 0) {
            cout << "Could not load sfx" << Mix_GetError() << endl;
            return false;
        }
        s_mSfxs[id] = chunk;
        return true;
    }
    return false;
}

void SoundManager::playSound(string id, int loop, int ms)
{
    Mix_FadeInChannel(-1, s_mSfxs[id], loop, ms);
}

void SoundManager::playMusic(string id, int loop, int ms)
{
    Mix_FadeInMusic(s_mMusic[id], loop, ms);

}

void SoundManager::changeVolume(int c)
{
    if (c == 1) {
        if (volume < MIX_MAX_VOLUME) {
            if (volume + MIX_MAX_VOLUME / 10 >= MIX_MAX_VOLUME) {
                volume = MIX_MAX_VOLUME;
            }
            else {

            volume += MIX_MAX_VOLUME / 10;
            }
        }
        
    }
    if (c == -1) {
        if (volume - MIX_MAX_VOLUME / 10 <= 0) {
            volume = 0;
        }
        else {

            volume -= MIX_MAX_VOLUME / 10;
        }
    }
    /*int currentVolume = Mix_VolumeMusic(-1);
    currentVolume += c;
    Mix_VolumeMusic(currentVolume);*/
    Mix_VolumeMusic(volume);
    Mix_Volume(-1, volume);
   
}

void SoundManager::pauseOrPlay()
{
    if (Mix_PausedMusic() == 0) {
        Mix_PauseMusic();
    }
    else {
        Mix_ResumeMusic();
    }
    
}

SoundManager::SoundManager()
{
    if (Mix_OpenAudio(48000, AUDIO_S16SYS, 2, 4096) == -1){
        cout << Mix_GetError() << endl;
    };

}

SoundManager* SoundManager::s_mInstance = 0;
