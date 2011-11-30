#!/usr/bin/python2.5
#
# Copyright 2009 Olivier Gillet.
#
# Author: Olivier Gillet (ol.gillet@gmail.com)
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
#
# -----------------------------------------------------------------------------
#
# Waveform definitions.

import numpy

"""----------------------------------------------------------------------------
Waveforms for vowel synthesis
----------------------------------------------------------------------------"""

SAMPLE_RATE = 20000000.0 / 510

waveforms = []
# Create amplitude modulated sine/square tables for formants.
sine_samples = []
square_samples = []
sine = numpy.sin(numpy.arange(16.0) / 16.0 * 2 * numpy.pi)
for i, x in enumerate(sine):
  gains = numpy.exp(0.184 * numpy.arange(16.0))
  gains[0] = 0
  values = gains * x * 4
  values = numpy.round(values).astype(int)
  amps = numpy.round(gains)
  if (i >= 8):
    amps = -amps
  square_samples.extend(amps.astype(int))
  sine_samples.extend(values)

waveforms.extend([
    ('formant_sine', sine_samples),
    ('formant_square', square_samples)
])

"""----------------------------------------------------------------------------
Band-limited waveforms
----------------------------------------------------------------------------"""

WAVETABLE_SIZE = 256
JUNINESS = 1.0

def Dither(x, order=0, type=numpy.uint8):
  for i in xrange(order):
    x = numpy.hstack((numpy.zeros(1,), numpy.cumsum(x)))
  x = numpy.round(x)
  for i in xrange(order):
    x = numpy.diff(x)
  if any(x < numpy.iinfo(type).min) or any(x > numpy.iinfo(type).max):
    print 'Clipping occurred!'
  x[x < numpy.iinfo(type).min] = numpy.iinfo(type).min
  x[x > numpy.iinfo(type).max] = numpy.iinfo(type).max
  return x.astype(type)


def Scale(array, min=1, max=254, center=True, dither=2):
  if center:
    array -= array.mean()
  mx = numpy.abs(array).max()
  array = (array + mx) / (2 * mx)
  array = array * (max - min) + min
  return Dither(array, order=dither)


# Sine wave.
numpy.random.seed(21)
sine = -numpy.sin(numpy.arange(WAVETABLE_SIZE + 1) / float(WAVETABLE_SIZE) * 2 * numpy.pi) * 127.5 + 127.5

# Triangle wave
triangle = 2.0 * numpy.arange(WAVETABLE_SIZE + 1)
triangle[triangle > 256] = 512 - triangle[triangle > 256]

# Band limited waveforms.
num_zones = (107 - 24) / 16 + 2
bl_pulse_tables = []
bl_square_tables = []
bl_saw_tables = []
bl_tri_tables = []

wrap = numpy.fmod(numpy.arange(WAVETABLE_SIZE + 1) + WAVETABLE_SIZE / 2, WAVETABLE_SIZE)
quadrature = numpy.fmod(numpy.arange(WAVETABLE_SIZE + 1) + WAVETABLE_SIZE / 4, WAVETABLE_SIZE)
fill = numpy.fmod(numpy.arange(WAVETABLE_SIZE + 1), WAVETABLE_SIZE)



waveforms.append(('sine', Scale(sine[quadrature])))
waveforms.append(('triangle', Scale(triangle)))

for zone in range(num_zones):
  f0 = 440.0 * 2.0 ** ((18 + 16 * zone - 69) / 12.0)
  period = SAMPLE_RATE / f0
  m = 2 * numpy.floor(period / 2) + 1.0
  i = numpy.arange(-WAVETABLE_SIZE / 2, WAVETABLE_SIZE / 2) / float(WAVETABLE_SIZE)
  pulse = numpy.sin(numpy.pi * i * m) / (m * numpy.sin(numpy.pi * i) + 1e-9)
  pulse[WAVETABLE_SIZE / 2] = 1.0
  pulse = pulse[fill]

  square = numpy.cumsum(pulse - pulse[wrap])
  triangle = -numpy.cumsum(square[::-1] - square.mean()) / WAVETABLE_SIZE

  square -= JUNINESS * triangle
  if zone == num_zones - 1:
    square = sine
  bl_square_tables.append(('bandlimited_square_%d' % zone,
                          Scale(square[quadrature])))

  triangle = triangle[quadrature]
  if zone == num_zones - 1:
    triangle = sine
  bl_tri_tables.append(('bandlimited_triangle_%d' % zone,
                        Scale(triangle[quadrature])))

  saw = -numpy.cumsum(pulse[wrap] - pulse.mean())
  saw -= JUNINESS * numpy.cumsum(saw - saw.mean()) / WAVETABLE_SIZE
  if zone == num_zones - 1:
    saw = sine
  bl_saw_tables.append(('bandlimited_saw_%d' % zone,
                       Scale(saw[quadrature])))


waveforms.extend(bl_pulse_tables)
waveforms.extend(bl_square_tables)
waveforms.extend(bl_saw_tables)
waveforms.extend(bl_tri_tables)


"""----------------------------------------------------------------------------
Vowel data (formant amplitudes)
-----------------------------------------------------------------------------"""

vowel_data = [
    27, 40,  89, 15, 13, 1, 0,
    18, 51,  62, 13, 12, 6, 0,
    15, 69,  93, 14, 12, 7, 0,
    10, 84, 110, 13, 10, 8, 0,
    23, 44,  87, 15, 12, 1, 0,
    13, 29,  80, 13, 8,  0, 0,
     6, 46,  81, 12, 3,  0, 0,
     9, 51,  95, 15, 3,  0,  3,
     6, 73,  99, 7,  3,  14, 9]

waveforms.append(('vowel_data', vowel_data))


"""----------------------------------------------------------------------------
Wavetables
-----------------------------------------------------------------------------"""

wavetables = [
16, 15, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 14,
16, 16, 17, 17, 17, 18, 18, 19, 20, 20, 21, 22, 22, 22, 23, 23, 24, 24,
16, 3, 47, 25, 26, 27, 27, 87, 87, 28, 28, 29, 30, 31, 32, 33, 34, 34,
16, 35, 36, 37, 38, 39, 40, 41, 41, 42, 42, 43, 44, 44, 44, 45, 46, 46,
8, 47, 48, 49, 49, 50, 51, 52, 53, 53, 0, 0, 0, 0, 0, 0, 0, 0,
8, 54, 55, 56, 56, 57, 57, 57, 57, 57, 0, 0, 0, 0, 0, 0, 0, 0,
16, 3, 58, 58, 120, 59, 59, 60, 61, 62, 63, 64, 65, 65, 66, 67, 68, 68,
16, 75, 69, 70, 71, 72, 73, 74, 75, 76, 81, 77, 78, 80, 79, 80, 81, 81,
4, 82, 82, 82, 83, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
8, 87, 84, 87, 116, 85, 86, 86, 87, 87, 0, 0, 0, 0, 0, 0, 0, 0,
4, 88, 89, 90, 91, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
4, 92, 92, 93, 94, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
16, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 110,
4, 111, 112, 113, 112, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
16, 120, 120, 114, 114, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115,
4, 93, 116, 117, 118, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
8, 120, 120, 120, 120, 120, 120, 116, 121, 121, 0, 0, 0, 0, 0, 0, 0, 0,
8, 122, 123, 124, 125, 126, 127, 127, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0,
]

waveforms.extend([
    ('waves', map(ord, file('shruthi/data/waves.bin', 'rb').read())),
    ('wavetables', wavetables)])