#ifndef __SETUP_H__
#define __SETUP_H__
const char setup_html[] PROGMEM = "<!doctype html><html><head><title>Setup - {DEVICE}</title><link rel=\"stylesheet\" type=\"text/css\" href=\"style.css\"/><meta name=\"viewport\" content=\"width=device-width, initial-scale=1\"></head><body><h1>Setup</h1><div id=\"setup\" class=\"content\"><div id=\"content\"><p>Enter the credentials to your prefered WiFi station. After rebooting the device tries to connect with this information.                </p><form method=\"post\" action=\"/save\"><p class=\"des\">WiFi</p><label for=\"ssid\">SSID</label><input type=\"text\" class=\"text\" name=\"ssid\" value=\"{SSID}\"/><label for=\"pwd\">Password</label><input type=\"password\" class=\"text\" name=\"pwd\" value=\"{PWD}\"/><p class=\"des\">Device Host Name</p><label for=\"device\">Device Name</label><input type=\"text\" class=\"text\" name=\"device\" value=\"{DEVICE}\"/><a class=\"erase\" href=\"/erase\">ERASE SETTINGS (not WiFi)</a><p class=\"des\">Inverter</p>{INVERTERS}<br/><p class=\"subdes\">General</p><label for=\"invInterval\">Interval (ms)</label><input type=\"text\" class=\"text\" name=\"invInterval\" value=\"{INV_INTERVAL}\"/><p class=\"des\">Pinout (Wemos)</p>{PINOUT}<p class=\"des\">Radio (NRF24L01+)</p><label for=\"rf24Power\">Amplifier Power Level</label><select name=\"rf24Power\">{RF24}</select><p class=\"des\">MQTT</p><label for=\"mqttAddr\">Broker / Server IP</label><input type=\"text\" class=\"text\" name=\"mqttAddr\" value=\"{MQTT_ADDR}\"/><label for=\"mqttPort\">Port</label><input type=\"text\" class=\"text\" name=\"mqttPort\" value=\"{MQTT_PORT}\"/><label for=\"mqttUser\">Username (optional)</label><input type=\"text\" class=\"text\" name=\"mqttUser\" value=\"{MQTT_USER}\"/><label for=\"mqttPwd\">Password (optional)</label><input type=\"text\" class=\"text\" name=\"mqttPwd\" value=\"{MQTT_PWD}\"/><label for=\"mqttTopic\">Topic</label><input type=\"text\" class=\"text\" name=\"mqttTopic\" value=\"{MQTT_TOPIC}\"/><label for=\"mqttInterval\">Interval (ms)</label><input type=\"text\" class=\"text\" name=\"mqttInterval\" value=\"{MQTT_INTERVAL}\"/><p class=\"des\">&nbsp;</p><input type=\"checkbox\" class=\"cb\" name=\"reboot\"/><label for=\"reboot\">Reboot device after successful save</label><input type=\"submit\" value=\"save\" class=\"btn\" /></form></div></div><div id=\"footer\"><p class=\"left\"><a href=\"/\">Home</a></p><p class=\"left\"><a href=\"/update\">Update Firmware</a></p><p class=\"right\">AHOY - {VERSION}</p><p class=\"right\"><a href=\"/factory\">Factory Reset</a></p><p class=\"right\"><a href=\"/reboot\">Reboot</a></p></div></body></html>";
#endif /*__SETUP_H__*/
