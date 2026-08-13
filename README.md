# Marlin 2.1.2.2 – Ender-3 BigTreeTech SKR V1.3 Board

Custom Firmware für den **Creality Ender-3** mit Mainboard **BigTreeTech SKR V1.3 Board**.

> **Wichtig:** Dieser Branch ist für einen Drucker **ohne BLTouch** vorgesehen. Es wird ein mechanischer Z-Endschalter verwendet. Funktionen wie BLTouch, automatische Bettvermessung und BLTouch-Offsets dürfen mit dieser Version nicht verwendet werden.

## Unterstützte Hardware

- Creality Ender-3
- Mainboard 4.2.2
- GD32F303 RET6
- Standard-Display des Ender-3
- Mechanische Endschalter für X, Y und Z
- Kein BLTouch und kein anderer automatischer Z-Probe

## Installation

1. Die Firmware-Datei aus dem [Release-Bereich](https://github.com/DarkNinja-Lab/Ender-3-4.2.2-Firmware/releases) herunterladen.
2. Die Datei in `firmware.bin` umbenennen.
3. Eine möglichst kleine, mit **FAT32** formatierte Micro-SD-Karte verwenden.
4. Die Datei `firmware.bin` in das Hauptverzeichnis der SD-Karte kopieren.
5. Den Drucker ausschalten und die SD-Karte einlegen.
6. Den Drucker einschalten und warten, bis die Firmware installiert wurde.
7. Nach erfolgreicher Installation die SD-Karte entfernen und die Firmware-Datei umbenennen oder löschen.

> **Achtung:** Diese Firmware darf nur mit der passenden Mainboard-Version und der passenden Hardware verwendet werden. Eine falsche Firmware kann den Drucker beschädigen.

## Funktionen

- Manuelles Bed-Leveling ohne BLTouch
- Mechanischer Z-Endschalter
- Manuelle Mesh-Bed-Leveling-Funktion, sofern in der Konfiguration aktiviert
- LED-Steuerung über Relais beziehungsweise den konfigurierten Ausgang
- Z-Offset-Einstellung über das LCD-Menü
- Angepasste PID-Werte für den Ender-3
- Deutsche LCD-Menüs
- Advanced Pause / Filamentwechsel
- Maximale Düsentemperatur: 275 °C
- S-Curve Acceleration

## Bett ausrichten ohne BLTouch

Da kein BLTouch vorhanden ist, muss das Druckbett manuell ausgerichtet werden:

1. Drucker einschalten.
2. X-, Y- und Z-Achse homen.
3. Das Druckbett auf die gewünschte Drucktemperatur aufheizen.
4. Die Düse auf die vier Ecken und anschließend auf die Bettmitte bewegen.
5. Mit einem Blatt Papier den Abstand zwischen Düse und Druckbett prüfen.
6. Die Bettstellschrauben einstellen, bis der Abstand an allen Positionen gleich ist.
7. Vor jedem Druck die erste Schicht kontrollieren.

> Bei einem Drucker ohne BLTouch darf kein BLTouch-Mesh geladen oder automatisch mit `G29` vermessen werden.

## PID-Werte

Konfiguration: `Marlin/Configuration.h`

```text
#define DEFAULT_Kp  22.84
#define DEFAULT_Ki   2.04
#define DEFAULT_Kd  63.9
```

Die PID-Werte können je nach Heizblock, Heizpatrone, Lüfter und Netzteil abweichen. Bei Änderungen an der Heiz-Hardware sollte ein neues PID-Tuning durchgeführt werden.

## Z-Offset ohne BLTouch

Bei einem mechanischen Z-Endschalter wird der Z-Offset über die Position des Endschalters und die mechanische Einstellung des Druckbetts bestimmt.

Der in früheren Versionen verwendete BLTouch-Offset ist für diesen Branch nicht gültig:

```text
NOZZLE_TO_PROBE_OFFSET
```

Ein BLTouch-Offset darf nicht übernommen werden, wenn kein BLTouch installiert ist.

## Firmware selbst kompilieren

Für eigene Änderungen werden benötigt:

- Visual Studio Code
- PlatformIO als Visual-Studio-Code-Erweiterung
- Auto Build Marlin als Visual-Studio-Code-Erweiterung

Anschließend kann die Firmware über **Auto Build Marlin** kompiliert werden.

## Marlin-Version

Diese Firmware basiert auf Marlin **2.1.2.2**.

### Originale Marlin-Konfigurationen

- [Marlin Configurations 2.1.2.2](https://github.com/MarlinFirmware/Configurations/archive/release-2.1.2.2.zip)
- [Marlin 2.1.2.2](https://github.com/MarlinFirmware/Marlin/archive/2.1.2.2.zip)

## Bekannte Einschränkung

Die README beschreibt diesen Branch als Version **ohne BLTouch**. Vor dem Flashen muss zusätzlich geprüft werden, dass die Konfiguration in `Marlin/Configuration.h` tatsächlich keinen BLTouch und keine automatische Bettvermessung aktiviert.

Wenn ein BLTouch verwendet werden soll, muss stattdessen eine dafür konfigurierte Firmware-Version genutzt werden.

## Haftungsausschluss

Die Verwendung erfolgt auf eigene Gefahr. Vor dem Flashen sollten die aktuelle Firmware und die EEPROM-Einstellungen gesichert werden. Nach dem Flashen müssen insbesondere Drehrichtung, Endschalter, Temperaturmessung, Heizungen und Z-Homing sorgfältig geprüft werden.

---

[![Contributors](https://img.shields.io/github/contributors/DarkNinja-Lab/Ender-3-4.2.2-Firmware.svg?style=for-the-badge)](https://github.com/DarkNinja-Lab/Ender-3-4.2.2-Firmware/graphs/contributors)
[![Forks](https://img.shields.io/github/forks/DarkNinja-Lab/Ender-3-4.2.2-Firmware.svg?style=for-the-badge)](https://github.com/DarkNinja-Lab/Ender-3-4.2.2-Firmware/network/members)
[![Stargazers](https://img.shields.io/github/stars/DarkNinja-Lab/Ender-3-4.2.2-Firmware.svg?style=for-the-badge)](https://github.com/DarkNinja-Lab/Ender-3-4.2.2-Firmware/stargazers)
[![Issues](https://img.shields.io/github/issues/DarkNinja-Lab/Ender-3-4.2.2-Firmware.svg?style=for-the-badge)](https://github.com/DarkNinja-Lab/Ender-3-4.2.2-Firmware/issues)
