/*
 core/configuration/error.hpp - special error exit point

 Copyright (C) 2015 Pranav Kulkarni, Collins Assisi Lab, IISER, Pune <pranavcode@gmail.com>

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
/**
 * @file core/configuration/error.hpp
 *
 * Common error message for severe error during simulation,
 * does an abrupt and immediate simulation shutdown.
 */

#pragma once

#include <iostream>
#include <cstdlib>

namespace insilico {
namespace configuration {

/**
 * Shuts down the simulation abruptly.
 */
void severe_error() {
  std::cerr << "***...SIMULATION FAILED...***" << std::endl;
  exit( EXIT_FAILURE );
}

} // namespace configuration
} // namespace insilico
