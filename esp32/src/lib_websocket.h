#ifndef LIB_WEBSOCKET_H
#define LIB_WEBSOCKET_H

#include <ArduinoWebsockets.h>

using namespace websockets;

extern WebsocketsClient client;

void onMessageCallback(WebsocketsMessage message);
void onEventsCallback(WebsocketsEvent event, String data);
void connectToWebSocket();
void checkWebSocketConnection();
void sendBinaryData(const int16_t* buffer, size_t bytesIn);
void sendMessage(const char* message);
void loopWebsocket();
#endif
