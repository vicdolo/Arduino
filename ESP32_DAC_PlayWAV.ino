/*
Game_Audio圖書館
  
該庫主要基於XT_DAC_Audio庫
http://www.xtronical.com/basics/audio/digitised-speech-sound-esp32-playing-wavs/
  
此庫專為舊學校視頻的8位品質音訊而設計
遊戲可能會使用。這為視頻遊戲邏輯留下了大量的CPU資源。
中斷與採樣率同步。這消除了執行任何操作的需要
中斷中的複雜數學。在中斷中使用 FPU 似乎是
導致一些不穩定和崩潰，當我用遊戲邏輯載入CPU。
  
（c） B. Dring 2018，根據 GNU GPL 3.0 及更高版本許可，根據本許可證絕對不提供任何保證
  
*/

#包括"Fuck.h"
#包括"Game_Audio.h"

Game_Audio_Class遊戲音訊（25，0); 

Game_Audio_Wav_Class pmWav（SoundData）;
                                      

無效設置() {
串行。開始（115200); 
串行。println（"Begin...");
}

空隙迴圈() {   
串行。列印（"採樣率（赫茲）：");
串行。println（pmWav.獲取樣本率());
串行。列印（"持續時間（秒）：");
串行。println（pmWav.getDuration());
  
遊戲音訊。PlayWav（&pmWav， false， 1.0);
  
  等待完成
  而（遊戲音訊。正在播放()){   
  }
  
}
