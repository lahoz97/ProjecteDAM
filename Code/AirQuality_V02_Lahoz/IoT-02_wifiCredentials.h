#ifndef IOT_02_WIFI_CREDENTIALS_H
#define IOT_02_WIFI_CREDENTIALS_H

#define N_WIFIS 13
#define MAX_STRING_SIZE 15

struct stWifiList {
  const char* szSSID;
  const char* szPWD;
};

/*struct*/ stWifiList stWiFi[N_WIFIS] = {
  {"SSID1" , "pwd"},
  {"SSID2" , "pwd"}
};

#endif // IOT_02_WIFI_CREDENTIALS_H
