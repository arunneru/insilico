/*
 core/injector.hpp - insilico's external current injector header and source

 Copyright (C) 2015 Pranav Kulkarni, Collins Assisi Lab,
                    IISER, Pune <pranavcode@gmail.com>

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef INCLUDED_INSILICO_CORE_INJECTOR_HPP
#define INCLUDED_INSILICO_CORE_INJECTOR_HPP

#include "insilico/core/injector/parser.hpp"

#include <cmath>

namespace insilico { namespace injector {

auto external_current(const int _id, const double _time)
    -> std::vector<double> {
  std::vector< double > currents;
  long index = -1;
  for(unsigned time_id = 0; time_id < injector::time_seq.size(); ++time_id) {
    if(std::abs(injector::time_seq[time_id] - _time) < 0.001) {
      index = time_id;
      break;
    }
  }
  if(index >= 0) {
    for(unsigned id = 0; id < injector::neurons_seq.size(); ++id) {
      if(_id == injector::neurons_seq[id]) {
        currents.push_back(injector::external_current_seq[_id][index]);
      }
    }
  }
  return currents;
}

} } // namespace insilico::injector
  
#endif
