# Copyright (C) 2021 Open Source Robotics Foundation
#
# Licensed under the Apache License, Version 2.0 (the "License")
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#       http:#www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Modify the RUBYLIB environment variable to include the ignition math
# library install path. For example, if you install to /user:
#
# $ export RUBYLIB=/usr/lib/ruby:$RUBYLIB
#
# You can plot the data generated by this program by following these
# steps.
#
# 1. Run this program and save the output to a file:
#     ruby gauss_markov_process_example.rb > plot.data
#
# 2. Use gnuplot to create a plot:
#     gnuplot -e 'set terminal jpeg; plot "plot.data" with lines' > out.jpg
require 'ignition/math'

# Create the process with:
#   * Start value of 20.2
#   * Theta (rate at which the process should approach the mean) of 0.1
#   * Mu (mean value) 0.
#   * Sigma (volatility) of 0.5.
gmp = Ignition::Math::GaussMarkovProcess.new(20.2, 0.1, 0, 0.5);

# This process should decrease toward the mean value of 0.
# With noise of 0.5, the process will walk a bit.
for i in 0..1000 do
    value = gmp.Update(0.1);
    puts(value);
end
