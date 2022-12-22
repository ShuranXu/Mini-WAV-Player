/*
 * wav_player.h
 *
 * @description: The wav player implementation file. The wav player
 * is responsible for playing songs as well as controlling playing sequences.
 *
 * @reference:
 *  1.ST open-source HAL I2S drivers
 *  2. https://github.com/MYaqoobEmbedded/STM32-Tutorials/tree/master/Tutorial%2043%20-%20WAV%20Player
 *
 * @Code Leverage: The design of the wav player is studied in detail from the referenced
 * tutorial code and the project's wav player module is implemented based on the example wav
 * player design. In addition, the Audio PPL clock configuration is implemented by taking the
 * tutorial as the reference.
 *
 * @Author: Shuran Xu & Ritika Ramchandani
 *
 * @Revision: 2.0
 *
 * @Date 2022-12-12
 *
 */

#ifndef _WAV_PLAYER_H_
#define _WAV_PLAYER_H_

#include <stdbool.h>
#include <stdint.h>


/**
 * @brief Open the WAV file to play
 * @retval returns true when file is found in USB Drive
 */
bool wavPlayer_openFile(const char* filePath);

/**
 * @brief WAV Player Reset
 */
void wavPlayer_reset(void);

/**
 * @brief WAV File Play
 */
void wavPlayer_play(void);

/**
 * @brief WAV stop
 */
void wavPlayer_stop(void);

/**
 * @brief Proceed the WAV play
 */
void wavPlayer_proceed(void);

/**
 * @brief isEndofFile reached
 */
bool is_wavPlayer_finished_Playing(void);

/**
 * @brief Set WAV player volume
 */
void wavPlayer_setVolume(uint8_t volume);

/**
 * @brief WAV pause
 */
void wavPlayer_pause(void);

/**
 * @brief WAV resume
 */
void wavPlayer_resume(void);


#endif /* _WAV_PLAYER_H_ */
