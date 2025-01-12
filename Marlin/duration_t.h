/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef __DURATION_T__
#define __DURATION_T__

struct duration_t {
  /**
   * @brief Duration is stored in seconds
   */
  uint32_t value;

  /**
   * @brief Constructor
   */
  duration_t()
    : duration_t(0) {};

  /**
   * @brief Constructor
   *
   * @param seconds The number of seconds
   */
  duration_t(uint32_t const &seconds) {
    this->value = seconds;
  }

  /**
   * @brief Equality comparison
   * @details Overloads the equality comparison operator
   *
   * @param value The number of seconds to compare to
   * @return True if both durations are equal
   */
  bool operator==(const uint32_t &value) const {
    return (this->value == value);
  }

  /**
   * @brief Inequality comparison
   * @details Overloads the inequality comparison operator
   *
   * @param value The number of seconds to compare to
   * @return False if both durations are equal
   */
  bool operator!=(const uint32_t &value) const {
    return ! this->operator==(value);
  }

  /**
   * @brief Formats the duration as years
   * @return The number of years
   */
  inline uint8_t year() const {
    return this->day() / 365;
  }

  /**
   * @brief Formats the duration as days
   * @return The number of days
   */
  inline uint16_t day() const {
    return this->hour() / 24;
  }

  /**
   * @brief Formats the duration as hours
   * @return The number of hours
   */
  inline uint32_t hour() const {
    return this->minute() / 60;
  }

  /**
   * @brief Formats the duration as minutes
   * @return The number of minutes
   */
  inline uint32_t minute() const {
    return this->second() / 60;
  }

  /**
   * @brief Formats the duration as seconds
   * @return The number of seconds
   */
  inline uint32_t second() const {
    return this->value;
  }

  /**
   * @brief Formats the duration as a string
   * @details String will be formated using a "full" representation of duration
   *
   * @param buffer The array pointed to must be able to accommodate 21 bytes
   *
   * Output examples:
   *  123456789012345678901 (strlen)
   *  135y 364d 23h 59m 59s
   *  364d 23h 59m 59s
   *  23h 59m 59s
   *  59m 59s
   *  59s
   */
  void toString(char *buffer) const {
    int y = this->year(),
        d = this->day() % 365,
        h = this->hour() % 24,
        m = this->minute() % 60,
        s = this->second() % 60;

    if (y) sprintf_P(buffer, PSTR("%iy %id %ih %im %is"), y, d, h, m, s);
    else if (d) sprintf_P(buffer, PSTR("%id %ih %im %is"), d, h, m, s);
    else if (h) sprintf_P(buffer, PSTR("%ih %im %is"), h, m, s);
    else if (m) sprintf_P(buffer, PSTR("%im %is"), m, s);
    else sprintf_P(buffer, PSTR("%is"), s);
  }

  /**
   * @brief Formats the duration as a string
   * @details String will be formated using a "digital" representation of duration
   *
   * @param buffer The array pointed to must be able to accommodate 10 bytes
   *
   * Output examples:
   *  123456789 (strlen)
   *  99:59
   *  11d 12:33
   */
  uint8_t toDigital(char *buffer, bool with_days=false) const {
    uint16_t h = uint16_t(this->hour()),
             m = uint16_t(this->minute() % 60UL);
    if (with_days) {
      uint16_t d = this->day();
      sprintf_P(buffer, PSTR("%ud %02u:%02u"), d, h % 24, m);
      return d >= 10 ? 8 : 7;
    }
    else if (h < 100) {
      sprintf_P(buffer, PSTR("%02u:%02u"), h % 24, m);
      return 5;
    }
    else {
      sprintf_P(buffer, PSTR("%u:%02u"), h, m);
      return 6;
    }
  }

  /**
   * @Autor CreatBot LYN
   * @param buffer The array pointed to must be able to accommodate 13 bytes
   *
   * Output examples:
   *  123456789012 (strlen)
   *  [9999:59:59]
   *  <99:59:59>
   */
	void toTimeREG(char *buffer, char prefixChar = '\0', char suffixChar = '\0') const {
		uint16_t	h = this->hour() % 10000,
							m = this->minute() % 60,
							s = this->second() % 60;
		if((prefixChar == '\0') || (suffixChar == '\0'))
			sprintf_P(buffer, PSTR("%u:%02u:%02u"), h, m, s);
		else
			sprintf_P(buffer, PSTR("%c%u:%02u:%02u%c"), prefixChar, h, m, s, suffixChar);
  }

  /**
   * @Autor CreatBot LYN
   * @param buffer The array pointed to must be able to accommodate 9 bytes
   *        Also, 11 bytes is necessary when h_len is 3.
   *
   * Output examples:
   *  1234567890 (strlen)
   *  9990995959      ->    999:59:59
   *  8120125959      ->    812:59:59
   *  99995959        ->    9999:59:59
   *  010101          ->    01:01:01
   */
	void toTimeDWIN(char *buffer, uint8_t h_len) const {
		uint16_t	h = this->hour() % 10000,
							m = this->minute() % 60,
							s = this->second() % 60;
		if(h_len == 4)
			sprintf_P(buffer, PSTR("%04u%02u%02u"), h, m, s);
		else if(h_len == 2)
			sprintf_P(buffer, PSTR("%02u%02u%02u"), h % 100, m, s);
		else if(h_len == 3)
			sprintf_P(buffer, PSTR("%03u0%02u%02u%02u"), h % 1000, h % 100, m, s);
		else
			sprintf_P(buffer, PSTR("%u%02u%02u"), h, m, s);
	}


	/**
	 * @Autor CreatBot LYN
	 * @param buffer The array pointed to must be able to accommodate 6 bytes
	 *
	 * Output examples:
	 * 12345 (strlen)
	 * 02:59
	 */
	void toTimeShutDown(char *buffer) const {
		uint16_t	m = this->minute() % 60,
							s = this->second() % 60;
		sprintf_P(buffer, PSTR("%02u:%02u"), m, s);
	}
};

#endif // __DURATION_T__
