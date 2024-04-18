
  "author": "Anonymous maker",
  "editor": "wokwi",
  "parts": [
    { "type": "wokwi-arduino-uno", "id": "uno", "top": 29.4, "left": -0.6, "attrs": {} },
    { "type": "wokwi-7segment", "id": "sevseg1", "top": -129.42, "left": -71.72, "attrs": {} },
    {
      "type": "wokwi-resistor",
      "id": "r1",
      "top": -92.05,
      "left": 134.4,
      "attrs": { "value": "1000" }
    },
    {
      "type": "wokwi-resistor",
      "id": "r2",
      "top": -149.65,
      "left": 163.2,
      "attrs": { "value": "1000" }
    },
    {
      "type": "wokwi-resistor",
      "id": "r3",
      "top": -207.25,
      "left": 297.6,
      "attrs": { "value": "1000" }
    },
    {
      "type": "wokwi-resistor",
      "id": "r4",
      "top": -178.45,
      "left": 230.4,
      "attrs": { "value": "1000" }
    },
    {
      "type": "wokwi-resistor",
      "id": "r5",
      "top": -111.25,
      "left": 316.8,
      "attrs": { "value": "1000" }
    },
    {
      "type": "wokwi-resistor",
      "id": "r6",
      "top": -5.65,
      "left": 326.4,
      "attrs": { "value": "1000" }
    },
    {
      "type": "wokwi-resistor",
      "id": "r7",
      "top": -72.85,
      "left": 134.4,
      "attrs": { "value": "1000" }
    }
  ],
  "connections": [
    [ "sevseg1:A", "r2:1", "#8f4814", [ "v-27.96", "h172.8", "v38.4" ] ],
    [ "r2:2", "uno:12", "#8f4814", [ "v9.6", "h-78", "v86.4", "h19.2" ] ],
    [ "r1:1", "sevseg1:B", "green", [ "v0" ] ],
    [ "r1:2", "uno:11", "green", [ "v0", "h66", "v57.6", "h-96" ] ],
    [ "sevseg1:C", "r7:1", "orange", [ "v0" ] ],
    [ "r7:2", "uno:10", "orange", [ "v48", "h-39.6", "v9.6" ] ],
    [ "sevseg1:E", "r6:1", "cyan", [ "v28.8", "h-28.8" ] ],
    [ "r3:2", "uno:9", "magenta", [ "v76.8", "h-164.4" ] ],
    [ "sevseg1:F", "r4:1", "green", [ "v0" ] ],
    [ "r4:2", "uno:7", "green", [ "v153.6", "h-78" ] ],
    [ "sevseg1:G", "r5:1", "green", [ "v0" ] ],
    [ "r5:2", "uno:6", "green", [ "v86.4", "h-116.4" ] ],
    [ "uno:5V", "sevseg1:COM.1", "red", [ "v38.9", "h-217.6" ] ],
    [ "sevseg1:COM.2", "uno:GND.1", "purple", [ "h38.4", "v116.04", "h115.2" ] ],
    [ "sevseg1:D", "r3:1", "magenta", [ "v57.6", "h-57.6", "v-211.2" ] ],
    [ "uno:8", "r6:2", "cyan", [ "v-28.8", "h240.4", "v-9.6" ] ]
  ],
  "dependencies": {}
}
