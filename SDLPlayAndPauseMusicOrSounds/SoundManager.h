#pragma once
#include "Game.h"
#include <string>
#include <map>
using namespace std;

class SoundManager {
public:
	static SoundManager* Instance() {
		if (s_mInstance == 0) {
			s_mInstance = new SoundManager();
			return s_mInstance;

		}
		return s_mInstance;
	}
	bool load(const char* fileName, string id, int type);
	void playSound(string id, int loop, int ms = 0);
	void playMusic(string id, int loop, int ms = 0);
	void changeVolume(int change);
	void pauseOrPlay();
private:
	static SoundManager* s_mInstance;
	map<string, Mix_Chunk*> s_mSfxs;
	map<string, Mix_Music*> s_mMusic;
	SoundManager();
	~SoundManager();
};