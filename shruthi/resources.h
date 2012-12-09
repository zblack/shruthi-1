// Copyright 2009 Olivier Gillet.
//
// Author: Olivier Gillet (ol.gillet@gmail.com)
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// -----------------------------------------------------------------------------
//
// Resources definitions.
//
// Automatically generated with:
// make resources


#ifndef SHRUTHI_RESOURCES_H_
#define SHRUTHI_RESOURCES_H_


#include "avrlib/base.h"

#include <avr/pgmspace.h>


#include "avrlib/resources_manager.h"

namespace shruthi {

typedef uint16_t ResourceId;

extern const prog_char* string_table[];

extern const prog_uint16_t* lookup_table_table[];

extern const prog_uint8_t* waveform_table[];

extern const prog_uint8_t* character_table[];

extern const prog_uint16_t lut_res_lfo_increments[] PROGMEM;
extern const prog_uint16_t lut_res_env_portamento_increments[] PROGMEM;
extern const prog_uint16_t lut_res_oscillator_increments[] PROGMEM;
extern const prog_uint16_t lut_res_fm_frequency_ratios[] PROGMEM;
extern const prog_uint16_t lut_res_scale_just[] PROGMEM;
extern const prog_uint16_t lut_res_scale_pythagorean[] PROGMEM;
extern const prog_uint16_t lut_res_scale_1_4_eb[] PROGMEM;
extern const prog_uint16_t lut_res_scale_1_4_e[] PROGMEM;
extern const prog_uint16_t lut_res_scale_1_4_ea[] PROGMEM;
extern const prog_uint16_t lut_res_scale_bhairav[] PROGMEM;
extern const prog_uint16_t lut_res_scale_gunakri[] PROGMEM;
extern const prog_uint16_t lut_res_scale_marwa[] PROGMEM;
extern const prog_uint16_t lut_res_scale_shree[] PROGMEM;
extern const prog_uint16_t lut_res_scale_purvi[] PROGMEM;
extern const prog_uint16_t lut_res_scale_bilawal[] PROGMEM;
extern const prog_uint16_t lut_res_scale_yaman[] PROGMEM;
extern const prog_uint16_t lut_res_scale_kafi[] PROGMEM;
extern const prog_uint16_t lut_res_scale_bhimpalasree[] PROGMEM;
extern const prog_uint16_t lut_res_scale_darbari[] PROGMEM;
extern const prog_uint16_t lut_res_scale_rageshree[] PROGMEM;
extern const prog_uint16_t lut_res_scale_khamaj[] PROGMEM;
extern const prog_uint16_t lut_res_scale_mimal[] PROGMEM;
extern const prog_uint16_t lut_res_scale_parameshwari[] PROGMEM;
extern const prog_uint16_t lut_res_scale_rangeshwari[] PROGMEM;
extern const prog_uint16_t lut_res_scale_gangeshwari[] PROGMEM;
extern const prog_uint16_t lut_res_scale_kameshwari[] PROGMEM;
extern const prog_uint16_t lut_res_scale_palas_kafi[] PROGMEM;
extern const prog_uint16_t lut_res_scale_natbhairav[] PROGMEM;
extern const prog_uint16_t lut_res_scale_m_kauns[] PROGMEM;
extern const prog_uint16_t lut_res_scale_bairagi[] PROGMEM;
extern const prog_uint16_t lut_res_scale_b_todi[] PROGMEM;
extern const prog_uint16_t lut_res_scale_chandradeep[] PROGMEM;
extern const prog_uint16_t lut_res_scale_kaushik_todi[] PROGMEM;
extern const prog_uint16_t lut_res_scale_jogeshwari[] PROGMEM;
extern const prog_uint16_t lut_res_arpeggiator_patterns[] PROGMEM;
extern const prog_uint16_t lut_res_turbo_tempi[] PROGMEM;
extern const prog_uint16_t lut_res_groove_swing[] PROGMEM;
extern const prog_uint16_t lut_res_groove_shuffle[] PROGMEM;
extern const prog_uint16_t lut_res_groove_push[] PROGMEM;
extern const prog_uint16_t lut_res_groove_lag[] PROGMEM;
extern const prog_uint16_t lut_res_groove_human[] PROGMEM;
extern const prog_uint16_t lut_res_groove_monkey[] PROGMEM;
extern const prog_uint8_t wav_res_formant_sine[] PROGMEM;
extern const prog_uint8_t wav_res_formant_square[] PROGMEM;
extern const prog_uint8_t wav_res_sine[] PROGMEM;
extern const prog_uint8_t wav_res_bandlimited_square_0[] PROGMEM;
extern const prog_uint8_t wav_res_bandlimited_square_1[] PROGMEM;
extern const prog_uint8_t wav_res_bandlimited_square_2[] PROGMEM;
extern const prog_uint8_t wav_res_bandlimited_square_3[] PROGMEM;
extern const prog_uint8_t wav_res_bandlimited_square_4[] PROGMEM;
extern const prog_uint8_t wav_res_bandlimited_square_5[] PROGMEM;
extern const prog_uint8_t wav_res_bandlimited_saw_0[] PROGMEM;
extern const prog_uint8_t wav_res_bandlimited_saw_1[] PROGMEM;
extern const prog_uint8_t wav_res_bandlimited_saw_2[] PROGMEM;
extern const prog_uint8_t wav_res_bandlimited_saw_3[] PROGMEM;
extern const prog_uint8_t wav_res_bandlimited_saw_4[] PROGMEM;
extern const prog_uint8_t wav_res_bandlimited_saw_5[] PROGMEM;
extern const prog_uint8_t wav_res_bandlimited_triangle_0[] PROGMEM;
extern const prog_uint8_t wav_res_bandlimited_triangle_3[] PROGMEM;
extern const prog_uint8_t wav_res_bandlimited_triangle_4[] PROGMEM;
extern const prog_uint8_t wav_res_bandlimited_triangle_5[] PROGMEM;
extern const prog_uint8_t wav_res_vowel_data[] PROGMEM;
extern const prog_uint8_t wav_res_expansion_krama[] PROGMEM;
extern const prog_uint8_t wav_res_expansion_jata[] PROGMEM;
extern const prog_uint8_t wav_res_expansion_sikha[] PROGMEM;
extern const prog_uint8_t wav_res_expansion_ghana[] PROGMEM;
extern const prog_uint8_t wav_res_distortion[] PROGMEM;
extern const prog_uint8_t wav_res_env_expo[] PROGMEM;
extern const prog_uint8_t wav_res_ssm2164_linearization[] PROGMEM;
extern const prog_uint8_t wav_res_waves[] PROGMEM;
extern const prog_uint8_t wav_res_wavetables[] PROGMEM;
extern const prog_uint8_t chr_res_special_characters[] PROGMEM;
#define STR_RES_SHAPE 0  // shape
#define STR_RES_PARAMETER 1  // parameter
#define STR_RES_RESONANCE 2  // resonance
#define STR_RES_PRM 3  // prm
#define STR_RES_RANGE 4  // range
#define STR_RES_RNG 5  // rng
#define STR_RES_OP_ 6  // op.
#define STR_RES_OPERATOR 7  // operator
#define STR_RES_DETUNE 8  // detune
#define STR_RES_OSC_MIX 9  // osc mix
#define STR_RES_SUB_OSC_ 10  // sub osc.
#define STR_RES_ENV1TVCF 11  // env1~vcf
#define STR_RES_LFO2TVCF 12  // lfo2~vcf
#define STR_RES_ATTACK 13  // attack
#define STR_RES_ATK 14  // atk
#define STR_RES_DECAY 15  // decay
#define STR_RES_SUSTAIN 16  // sustain
#define STR_RES_RELEASE 17  // release
#define STR_RES_RATE 18  // rate
#define STR_RES_MODULATION 19  // modulation
#define STR_RES_OPERATORS 20  // operators
#define STR_RES_MOD_ 21  // mod.
#define STR_RES_SOURCE 22  // source
#define STR_RES_SRC 23  // src
#define STR_RES_DEST_ 24  // dest.
#define STR_RES_DST 25  // dst
#define STR_RES_AMOUNT 26  // amount
#define STR_RES_AMT 27  // amt
#define STR_RES_MODE 28  // mode
#define STR_RES_OVERDRIVE 29  // overdrive
#define STR_RES__FM 30  // fm
#define STR_RES_FLAVOUR 31  // flavour
#define STR_RES_TIME 32  // time
#define STR_RES_LEVEL 33  // level
#define STR_RES_FDB 34  // fdb
#define STR_RES_FEEDBACK 35  // feedback
#define STR_RES_EQ_ 36  // eq.
#define STR_RES_FDBCK_EQ_ 37  // fdbck eq.
#define STR_RES_TEMPO 38  // tempo
#define STR_RES_BPM 39  // bpm
#define STR_RES_GROOVE 40  // groove
#define STR_RES_DIRECTION 41  // direction
#define STR_RES_PATTERN 42  // pattern
#define STR_RES_WARP 43  // warp
#define STR_RES_WRP 44  // wrp
#define STR_RES_START 45  // start
#define STR_RES_SPLIT 46  // split
#define STR_RES_LENGTH 47  // length
#define STR_RES_OCTAVE 48  // octave
#define STR_RES_RAGA 49  // raga
#define STR_RES_PORTA 50  // porta
#define STR_RES_PRT 51  // prt
#define STR_RES_LEGATO 52  // legato
#define STR_RES_TUNING 53  // tuning
#define STR_RES_MIDI_CHAN 54  // midi chan
#define STR_RES_CHN 55  // chn
#define STR_RES_MIDI_OUT 56  // midi out
#define STR_RES_PAUSE 57  // pause
#define STR_RES_SNAP 58  // snap
#define STR_RES_CV_MODE 59  // cv.mode
#define STR_RES_OSCILLATOR_1 60  // oscillator 1
#define STR_RES_OSCILLATOR_2 61  // oscillator 2
#define STR_RES_MIXER 62  // mixer
#define STR_RES_FILTER 63  // filter
#define STR_RES_FILTERS 64  // filter+
#define STR_RES_MODE_1 65  // mode 1
#define STR_RES_MODE_2 66  // mode 2
#define STR_RES_MD1 67  // md1
#define STR_RES_MD2 68  // md2
#define STR_RES_ENVELOPE_1 69  // envelope 1
#define STR_RES_ENVELOPE_2 70  // envelope 2
#define STR_RES_SEQUENCER 71  // sequencer
#define STR_RES_ARPEGGIO 72  // arpeggio
#define STR_RES_CH1 73  // ch1
#define STR_RES_CH2 74  // ch2
#define STR_RES_11 75  // 1
#define STR_RES_12 76  // 2
#define STR_RES_STEP_SEQUENCER 77  // step sequencer
#define STR_RES_KEYBOARD 78  // keyboard
#define STR_RES_MIDI 79  // midi
#define STR_RES_SYSTEM 80  // system
#define STR_RES_TRIGGERS 81  // triggers
#define STR_RES_PERFORMANCE 82  // performance
#define STR_RES_PARAM__1 83  // param. 1
#define STR_RES_PARAM__2 84  // param. 2
#define STR_RES_PR1 85  // pr1
#define STR_RES_PR2 86  // pr2
#define STR_RES_FX_ 87  // fx.
#define STR_RES_FX_PROG_ 88  // fx prog.
#define STR_RES_LPF 89  // lpf
#define STR_RES_BPF 90  // bpf
#define STR_RES_HPF 91  // hpf
#define STR_RES_LPL 92  // lp<
#define STR_RES_BPL 93  // bp<
#define STR_RES_HPL 94  // hp<
#define STR_RES_SLP 95  // +lp
#define STR_RES_SBP 96  // +bp
#define STR_RES_SHP 97  // +hp
#define STR_RES_GLP 98  // >lp
#define STR_RES_GBP 99  // >bp
#define STR_RES_GHP 100  // >hp
#define STR_RES_LP4 101  // lp4
#define STR_RES_LP3 102  // lp3
#define STR_RES_LP2 103  // lp2
#define STR_RES_LP1 104  // lp1
#define STR_RES_HP1 105  // hp1
#define STR_RES_HP2 106  // hp2
#define STR_RES_HP3 107  // hp3
#define STR_RES_BP2 108  // bp2
#define STR_RES_BP4 109  // bp4
#define STR_RES_NOTCH 110  // notch
#define STR_RES_PHASER 111  // phaser
#define STR_RES_H2LP 112  // h2lp
#define STR_RES_H3LP 113  // h3lp
#define STR_RES_NSLP 114  // n+lp
#define STR_RES_PSLP 115  // p+lp
#define STR_RES_LIQUID 116  // liquid
#define STR_RES_MS 117  // ms
#define STR_RES_WOBBLY 118  // wobbly
#define STR_RES_WHACKY 119  // whacky
#define STR_RES_CUT 120  // cut
#define STR_RES_VCA 121  // vca
#define STR_RES_PW1 122  // pw1
#define STR_RES_PW2 123  // pw2
#define STR_RES_51 124  // 1
#define STR_RES_52 125  // 2
#define STR_RES_5 126  // 
#define STR_RES_5F 127  // f
#define STR_RES_MIX 128  // mix
#define STR_RES_NOI 129  // noi
#define STR_RES_SUB 130  // sub
#define STR_RES_RES 131  // res
#define STR_RES_CV1 132  // cv1
#define STR_RES_CV2 133  // cv2
#define STR_RES__ATK 134  // atk
#define STR_RES__LF1 135  // lf1
#define STR_RES__LF2 136  // lf2
#define STR_RES_EN1 137  // en1
#define STR_RES_EN2 138  // en2
#define STR_RES_IN1 139  // in1
#define STR_RES_IN2 140  // in2
#define STR_RES_OUT 141  // out
#define STR_RES___OFF 142  // off
#define STR_RES_ADD 143  // add
#define STR_RES_PRD 144  // prd
#define STR_RES_MAX 145  // max
#define STR_RES_MIN 146  // min
#define STR_RES__XOR 147  // xor
#define STR_RES_GE 148  // >=
#define STR_RES_LE 149  // <=
#define STR_RES_QTZ 150  // qtz
#define STR_RES_LAG 151  // lag
#define STR_RES_CUTOFF 152  // cutoff
#define STR_RES__VCA 153  // vca
#define STR_RES_PWM1 154  // pwm1
#define STR_RES_PWM2 155  // pwm2
#define STR_RES_OSC1 156  // osc1
#define STR_RES_OSC2 157  // osc2
#define STR_RES_OSC1S2 158  // osc1+2
#define STR_RES_FINE 159  // fine
#define STR_RES__MIX 160  // mix
#define STR_RES_NOISE 161  // noise
#define STR_RES_SUBOSC 162  // subosc
#define STR_RES_RESO 163  // reso
#define STR_RES_CV_1 164  // cv 1
#define STR_RES_CV_2 165  // cv 2
#define STR_RES__ATTACK 166  // attack
#define STR_RES__LFO_1 167  // lfo 1
#define STR_RES__LFO_2 168  // lfo 2
#define STR_RES_ENV_1 169  // env 1
#define STR_RES_ENV_2 170  // env 2
#define STR_RES_DISTRT 171  // distrt
#define STR_RES_CRUSHR 172  // crushr
#define STR_RES_SCMBFL 173  // +cmbfl
#define STR_RES_CMBFL 174  // -cmbfl
#define STR_RES_RINGMD 175  // ringmd
#define STR_RES_DELAY 176  // delay
#define STR_RES_FB_DLY 177  // fb dly
#define STR_RES_DUBDLY 178  // dubdly
#define STR_RES__FBDLY 179  // !fbdly
#define STR_RES__DBDLY 180  // !dbdly
#define STR_RES__16_DL 181  // /16 dl
#define STR_RES__12_DL 182  // /12 dl
#define STR_RES__8_DLY 183  // /8 dly
#define STR_RES_3_16DL 184  // 3/16dl
#define STR_RES_LOOPER 185  // looper
#define STR_RES_PITCH 186  // pitch
#define STR_RES_LGF 187  // l>f
#define STR_RES_HGF 188  // h>f
#define STR_RES_FGL 189  // f>l
#define STR_RES_FGH 190  // f>h
#define STR_RES_GFX 191  // >fx
#define STR_RES_LF1 192  // lf1
#define STR_RES_LF2 193  // lf2
#define STR_RES_SEQ 194  // seq
#define STR_RES__SQ1 195  // sq1
#define STR_RES__SQ2 196  // sq2
#define STR_RES_ARP 197  // arp
#define STR_RES_WHL 198  // whl
#define STR_RES_AFT 199  // aft
#define STR_RES_BND 200  // bnd
#define STR_RES_OFS 201  // ofs
#define STR_RES__CV1 202  // cv1
#define STR_RES__CV2 203  // cv2
#define STR_RES_CV3 204  // cv3
#define STR_RES_CV4 205  // cv4
#define STR_RES_CCA 206  // ccA
#define STR_RES_CCB 207  // ccB
#define STR_RES_CCC 208  // ccC
#define STR_RES_CCD 209  // ccD
#define STR_RES__NOI 210  // noi
#define STR_RES__EN1 211  // en1
#define STR_RES__EN2 212  // en2
#define STR_RES_VEL 213  // vel
#define STR_RES_RND 214  // rnd
#define STR_RES_NOT 215  // not
#define STR_RES_GAT 216  // gat
#define STR_RES_AUD 217  // aud
#define STR_RES_OP1 218  // op1
#define STR_RES_OP2 219  // op2
#define STR_RES_TR1 220  // tr1
#define STR_RES_TR2 221  // tr2
#define STR_RES_E4 222  // =4
#define STR_RES_E8 223  // =8
#define STR_RES_E16 224  // =16
#define STR_RES_E32 225  // =32
#define STR_RES_LFO_1 226  // lfo 1
#define STR_RES_LFO_2 227  // lfo 2
#define STR_RES_STPSEQ 228  // stpseq
#define STR_RES_STPSQ1 229  // stpsq1
#define STR_RES_STPSQ2 230  // stpsq2
#define STR_RES__ARP 231  // arp
#define STR_RES_MWHEEL 232  // mwheel
#define STR_RES_AFTTCH 233  // afttch
#define STR_RES_BENDER 234  // bender
#define STR_RES_OFFSET 235  // offset
#define STR_RES__CV_1 236  // cv 1
#define STR_RES__CV_2 237  // cv 2
#define STR_RES_CV_3 238  // cv 3
#define STR_RES_CV_4 239  // cv 4
#define STR_RES_CC_A 240  // cc A
#define STR_RES_CC_B 241  // cc B
#define STR_RES_CC_C 242  // cc C
#define STR_RES_CC_D 243  // cc D
#define STR_RES__NOISE 244  // noise
#define STR_RES__ENV_1 245  // env 1
#define STR_RES__ENV_2 246  // env 2
#define STR_RES_VELO 247  // velo
#define STR_RES_RANDOM 248  // random
#define STR_RES_NOTE 249  // note
#define STR_RES_GATE 250  // gate
#define STR_RES_AUDIO 251  // audio
#define STR_RES_OP__1 252  // op. 1
#define STR_RES_OP__2 253  // op. 2
#define STR_RES_TRG_1 254  // trg 1
#define STR_RES_TRG_2 255  // trg 2
#define STR_RES_E_4 256  // = 4
#define STR_RES_E_8 257  // = 8
#define STR_RES_E_16 258  // = 16
#define STR_RES_E_32 259  // = 32
#define STR_RES_TOUCH_A_KNOB_TO 260  // touch a knob to
#define STR_RES_ASSIGN_PARAMETER 261  // assign parameter
#define STR_RES_PATCH 262  // patch
#define STR_RES_SEQUENCE 263  // sequence
#define STR_RES_COMBO 264  // combo
#define STR_RES_SAVE_MIDI_KBD 265  // save midi/kbd
#define STR_RES_SETTINGS_ 266  // settings?
#define STR_RES_START_FULL_MIDI 267  // start full midi
#define STR_RES_BACKUP_ 268  // backup?
#define STR_RES_BROWSE 269  // browse
#define STR_RES_SAVE 270  // save
#define STR_RES_COMPARE 271  // compare
#define STR_RES_ 272  // ----
#define STR_RES_V 273  // v
#define STR_RES_MUTABLE____V0_97 274  // mutable    v0.97
#define STR_RES_INSTRUMENTS_671 275  // instruments -1
#define STR_RES_EXTERN 276  // extern
#define STR_RES_X2_EXT 277  // x2 ext
#define STR_RES__2_EXT 278  // /2 ext
#define STR_RES__4_EXT 279  // /4 ext
#define STR_RES__8_EXT 280  // /8 ext
#define STR_RES_SUM 281  // sum
#define STR_RES_SYNC 282  // sync
#define STR_RES_RING 283  // ring
#define STR_RES_XOR 284  // xor
#define STR_RES_FUZZ 285  // fuzz
#define STR_RES_GG4 286  // >>4
#define STR_RES_GG8 287  // >>8
#define STR_RES_FOLD 288  // fold
#define STR_RES_BITS 289  // bits
#define STR_RES_DUO 290  // duo
#define STR_RES_2STEPS 291  // 2steps
#define STR_RES_4STEPS 292  // 4steps
#define STR_RES_8STEPS 293  // 8steps
#define STR_RES_SEQMIX 294  // seqmix
#define STR_RES_FLA 295  // fla
#define STR_RES_FLR 296  // flr
#define STR_RES_REV 297  // rev
#define STR_RES_DWN 298  // dwn
#define STR_RES_STP 299  // stp
#define STR_RES___ARP 300  // arp
#define STR_RES_ARPSLT 301  // arp+lt
#define STR_RES__SEQ 302  // seq
#define STR_RES_SEQSLT 303  // seq+lt
#define STR_RES_REC 304  // rec
#define STR_RES_IMPRO 305  // impro
#define STR_RES_FREE 306  // free
#define STR_RES_SLAVE 307  // slave
#define STR_RES_MASTER 308  // master
#define STR_RES_T 309  // ~
#define STR_RES__ 310  // 
#define STR_RES_T_ 311  // ~-
#define STR_RES__T_ 312  // ~
#define STR_RES_GLASS 313  // glass
#define STR_RES_KRAMA 314  // krama
#define STR_RES_JATA 315  // jata
#define STR_RES_SIKHA 316  // sikha
#define STR_RES_GHANA 317  // ghana
#define STR_RES_2GLASS 318  // 2glass
#define STR_RES_2KRAMA 319  // 2krama
#define STR_RES_2JATA 320  // 2jata
#define STR_RES_2SIKHA 321  // 2sikha
#define STR_RES_2GHANA 322  // 2ghana
#define STR_RES_4GLASS 323  // 4glass
#define STR_RES_4KRAMA 324  // 4krama
#define STR_RES_4JATA 325  // 4jata
#define STR_RES_4SIKHA 326  // 4sikha
#define STR_RES_4GHANA 327  // 4ghana
#define STR_RES_SWING 328  // swing
#define STR_RES_SHUFFLE 329  // shuffle
#define STR_RES_PUSH 330  // push
#define STR_RES__LAG 331  // lag
#define STR_RES_HUMAN 332  // human
#define STR_RES_MONKEY 333  // monkey
#define STR_RES__OFF 334  // off
#define STR_RES_THRU 335  // thru
#define STR_RES___SEQ 336  // seq
#define STR_RES_CTRL 337  // ctrl
#define STR_RES__SPLIT 338  // split
#define STR_RES_FULL 339  // full
#define STR_RES_1TV 340  // 1~|
#define STR_RES_2T1 341  // 2~1
#define STR_RES_3T2 342  // 3~2
#define STR_RES_4T3 343  // 4~3
#define STR_RES_5T4 344  // 5~4
#define STR_RES_6T5 345  // 6~5
#define STR_RES_7T6 346  // 7~6
#define STR_RES_8T7 347  // 8~7
#define STR_RES_TRI 348  // tri
#define STR_RES_SQR 349  // sqr
#define STR_RES_S_H 350  // s&h
#define STR_RES_RAMP 351  // ramp
#define STR_RES_STEP 352  // step
#define STR_RES_3 353  // 
#define STR_RES_4 354  // 
#define STR_RES_34 355  // 
#define STR_RES___ 356  // ?
#define STR_RES_OFF 357  // off
#define STR_RES_ON 358  // on
#define STR_RES_SQ1 359  // sq1
#define STR_RES__TR1 360  // tr1
#define STR_RES_PL1 361  // pl1
#define STR_RES_SQ2 362  // sq2
#define STR_RES__TR2 363  // tr2
#define STR_RES_PL2 364  // pl2
#define STR_RES_CLICK 365  // click
#define STR_RES_GLITCH 366  // glitch
#define STR_RES_BLOW 367  // blow
#define STR_RES_METAL 368  // metal
#define STR_RES_POP 369  // pop
#define STR_RES_NONE 370  // none
#define STR_RES_SAW 371  // saw
#define STR_RES_SQUARE 372  // square
#define STR_RES_TRIANG 373  // triang
#define STR_RES_ZSAW 374  // zsaw
#define STR_RES_ZRESO 375  // zreso
#define STR_RES_ZTRI 376  // ztri
#define STR_RES_ZPULSE 377  // zpulse
#define STR_RES_ZSYNC 378  // zsync
#define STR_RES_PAD 379  // pad
#define STR_RES_FM 380  // fm
#define STR_RES_WAVES 381  // waves
#define STR_RES_TAMPUR 382  // tampur
#define STR_RES_DIGITL 383  // digitl
#define STR_RES_METALL 384  // metall
#define STR_RES_BOWED 385  // bowed
#define STR_RES_SLAP 386  // slap
#define STR_RES_ORGAN 387  // organ
#define STR_RES_MALE 388  // male
#define STR_RES_USER 389  // user
#define STR_RES_8BITS 390  // 8bits
#define STR_RES_CRUSH 391  // crush
#define STR_RES_PWM 392  // pwm
#define STR_RES___NOISE 393  // noise
#define STR_RES_VOWEL 394  // vowel
#define STR_RES_BELISH 395  // belish
#define STR_RES_POLATD 396  // polatd
#define STR_RES_CELLO 397  // cello
#define STR_RES_CLPSWP 398  // clpswp
#define STR_RES_FEMALE 399  // female
#define STR_RES_FMTVOC 400  // fmtvoc
#define STR_RES_FRMNT2 401  // frmnt2
#define STR_RES_RES3HP 402  // res3hp
#define STR_RES_ELECTP 403  // electp
#define STR_RES_VIBES 404  // vibes
#define STR_RES__LPF 405  // lpf
#define STR_RES_SSM 406  // ssm
#define STR_RES_SVF 407  // svf
#define STR_RES_DSP 408  // dsp
#define STR_RES_PVK 409  // pvk
#define STR_RES_4PM 410  // 4pm
#define STR_RES_DLY 411  // dly
#define STR_RES_4CV_IN 412  // 4cv in
#define STR_RES_PRGM 413  // prgm
#define STR_RES_PEDALS 414  // pedals
#define STR_RES_EQUAL 415  // equal
#define STR_RES_JUST 416  // just
#define STR_RES_PYTHAG 417  // pythag
#define STR_RES_1_4_EB 418  // 1/4 eb
#define STR_RES_1_4_E 419  // 1/4 e
#define STR_RES_1_4_EA 420  // 1/4 ea
#define STR_RES_BHAIRA 421  // bhaira
#define STR_RES_GUNAKR 422  // gunakr
#define STR_RES_MARWA 423  // marwa
#define STR_RES_SHREE 424  // shree
#define STR_RES_PURVI 425  // purvi
#define STR_RES_BILAWA 426  // bilawa
#define STR_RES_YAMAN 427  // yaman
#define STR_RES_KAFI 428  // kafi
#define STR_RES_BHIMPA 429  // bhimpa
#define STR_RES_DARBAR 430  // darbar
#define STR_RES_BAGESH 431  // bagesh
#define STR_RES_RAGESH 432  // ragesh
#define STR_RES_KHAMAJ 433  // khamaj
#define STR_RES_MIMAL 434  // mi'mal
#define STR_RES_PARAME 435  // parame
#define STR_RES_RANGES 436  // ranges
#define STR_RES_GANGES 437  // ganges
#define STR_RES_KAMESH 438  // kamesh
#define STR_RES_PALAS_ 439  // palas
#define STR_RES_NATBHA 440  // natbha
#define STR_RES_M_KAUN 441  // m.kaun
#define STR_RES_BAIRAG 442  // bairag
#define STR_RES_B_TODI 443  // b.todi
#define STR_RES_CHANDR 444  // chandr
#define STR_RES_KAUSHI 445  // kaushi
#define STR_RES_JOGESH 446  // jogesh
#define STR_RES_RASIA 447  // rasia
#define LUT_RES_LFO_INCREMENTS 0
#define LUT_RES_LFO_INCREMENTS_SIZE 128
#define LUT_RES_ENV_PORTAMENTO_INCREMENTS 1
#define LUT_RES_ENV_PORTAMENTO_INCREMENTS_SIZE 128
#define LUT_RES_OSCILLATOR_INCREMENTS 2
#define LUT_RES_OSCILLATOR_INCREMENTS_SIZE 97
#define LUT_RES_FM_FREQUENCY_RATIOS 3
#define LUT_RES_FM_FREQUENCY_RATIOS_SIZE 25
#define LUT_RES_SCALE_JUST 4
#define LUT_RES_SCALE_JUST_SIZE 12
#define LUT_RES_SCALE_PYTHAGOREAN 5
#define LUT_RES_SCALE_PYTHAGOREAN_SIZE 12
#define LUT_RES_SCALE_1_4_EB 6
#define LUT_RES_SCALE_1_4_EB_SIZE 12
#define LUT_RES_SCALE_1_4_E 7
#define LUT_RES_SCALE_1_4_E_SIZE 12
#define LUT_RES_SCALE_1_4_EA 8
#define LUT_RES_SCALE_1_4_EA_SIZE 12
#define LUT_RES_SCALE_BHAIRAV 9
#define LUT_RES_SCALE_BHAIRAV_SIZE 12
#define LUT_RES_SCALE_GUNAKRI 10
#define LUT_RES_SCALE_GUNAKRI_SIZE 12
#define LUT_RES_SCALE_MARWA 11
#define LUT_RES_SCALE_MARWA_SIZE 12
#define LUT_RES_SCALE_SHREE 12
#define LUT_RES_SCALE_SHREE_SIZE 12
#define LUT_RES_SCALE_PURVI 13
#define LUT_RES_SCALE_PURVI_SIZE 12
#define LUT_RES_SCALE_BILAWAL 14
#define LUT_RES_SCALE_BILAWAL_SIZE 12
#define LUT_RES_SCALE_YAMAN 15
#define LUT_RES_SCALE_YAMAN_SIZE 12
#define LUT_RES_SCALE_KAFI 16
#define LUT_RES_SCALE_KAFI_SIZE 12
#define LUT_RES_SCALE_BHIMPALASREE 17
#define LUT_RES_SCALE_BHIMPALASREE_SIZE 12
#define LUT_RES_SCALE_DARBARI 18
#define LUT_RES_SCALE_DARBARI_SIZE 12
#define LUT_RES_SCALE_BAGESHREE 19
#define LUT_RES_SCALE_BAGESHREE_SIZE 12
#define LUT_RES_SCALE_RAGESHREE 20
#define LUT_RES_SCALE_RAGESHREE_SIZE 12
#define LUT_RES_SCALE_KHAMAJ 21
#define LUT_RES_SCALE_KHAMAJ_SIZE 12
#define LUT_RES_SCALE_MIMAL 22
#define LUT_RES_SCALE_MIMAL_SIZE 12
#define LUT_RES_SCALE_PARAMESHWARI 23
#define LUT_RES_SCALE_PARAMESHWARI_SIZE 12
#define LUT_RES_SCALE_RANGESHWARI 24
#define LUT_RES_SCALE_RANGESHWARI_SIZE 12
#define LUT_RES_SCALE_GANGESHWARI 25
#define LUT_RES_SCALE_GANGESHWARI_SIZE 12
#define LUT_RES_SCALE_KAMESHWARI 26
#define LUT_RES_SCALE_KAMESHWARI_SIZE 12
#define LUT_RES_SCALE_PALAS_KAFI 27
#define LUT_RES_SCALE_PALAS_KAFI_SIZE 12
#define LUT_RES_SCALE_NATBHAIRAV 28
#define LUT_RES_SCALE_NATBHAIRAV_SIZE 12
#define LUT_RES_SCALE_M_KAUNS 29
#define LUT_RES_SCALE_M_KAUNS_SIZE 12
#define LUT_RES_SCALE_BAIRAGI 30
#define LUT_RES_SCALE_BAIRAGI_SIZE 12
#define LUT_RES_SCALE_B_TODI 31
#define LUT_RES_SCALE_B_TODI_SIZE 12
#define LUT_RES_SCALE_CHANDRADEEP 32
#define LUT_RES_SCALE_CHANDRADEEP_SIZE 12
#define LUT_RES_SCALE_KAUSHIK_TODI 33
#define LUT_RES_SCALE_KAUSHIK_TODI_SIZE 12
#define LUT_RES_SCALE_JOGESHWARI 34
#define LUT_RES_SCALE_JOGESHWARI_SIZE 12
#define LUT_RES_SCALE_RASIA 35
#define LUT_RES_SCALE_RASIA_SIZE 12
#define LUT_RES_ARPEGGIATOR_PATTERNS 36
#define LUT_RES_ARPEGGIATOR_PATTERNS_SIZE 15
#define LUT_RES_TURBO_TEMPI 37
#define LUT_RES_TURBO_TEMPI_SIZE 9
#define LUT_RES_GROOVE_SWING 38
#define LUT_RES_GROOVE_SWING_SIZE 16
#define LUT_RES_GROOVE_SHUFFLE 39
#define LUT_RES_GROOVE_SHUFFLE_SIZE 16
#define LUT_RES_GROOVE_PUSH 40
#define LUT_RES_GROOVE_PUSH_SIZE 16
#define LUT_RES_GROOVE_LAG 41
#define LUT_RES_GROOVE_LAG_SIZE 16
#define LUT_RES_GROOVE_HUMAN 42
#define LUT_RES_GROOVE_HUMAN_SIZE 16
#define LUT_RES_GROOVE_MONKEY 43
#define LUT_RES_GROOVE_MONKEY_SIZE 16
#define WAV_RES_FORMANT_SINE 0
#define WAV_RES_FORMANT_SINE_SIZE 256
#define WAV_RES_FORMANT_SQUARE 1
#define WAV_RES_FORMANT_SQUARE_SIZE 256
#define WAV_RES_SINE 2
#define WAV_RES_SINE_SIZE 257
#define WAV_RES_BANDLIMITED_SQUARE_0 3
#define WAV_RES_BANDLIMITED_SQUARE_0_SIZE 257
#define WAV_RES_BANDLIMITED_SQUARE_1 4
#define WAV_RES_BANDLIMITED_SQUARE_1_SIZE 257
#define WAV_RES_BANDLIMITED_SQUARE_2 5
#define WAV_RES_BANDLIMITED_SQUARE_2_SIZE 257
#define WAV_RES_BANDLIMITED_SQUARE_3 6
#define WAV_RES_BANDLIMITED_SQUARE_3_SIZE 257
#define WAV_RES_BANDLIMITED_SQUARE_4 7
#define WAV_RES_BANDLIMITED_SQUARE_4_SIZE 257
#define WAV_RES_BANDLIMITED_SQUARE_5 8
#define WAV_RES_BANDLIMITED_SQUARE_5_SIZE 257
#define WAV_RES_BANDLIMITED_SQUARE_6 9
#define WAV_RES_BANDLIMITED_SQUARE_6_SIZE 257
#define WAV_RES_BANDLIMITED_SAW_0 10
#define WAV_RES_BANDLIMITED_SAW_0_SIZE 257
#define WAV_RES_BANDLIMITED_SAW_1 11
#define WAV_RES_BANDLIMITED_SAW_1_SIZE 257
#define WAV_RES_BANDLIMITED_SAW_2 12
#define WAV_RES_BANDLIMITED_SAW_2_SIZE 257
#define WAV_RES_BANDLIMITED_SAW_3 13
#define WAV_RES_BANDLIMITED_SAW_3_SIZE 257
#define WAV_RES_BANDLIMITED_SAW_4 14
#define WAV_RES_BANDLIMITED_SAW_4_SIZE 257
#define WAV_RES_BANDLIMITED_SAW_5 15
#define WAV_RES_BANDLIMITED_SAW_5_SIZE 257
#define WAV_RES_BANDLIMITED_SAW_6 16
#define WAV_RES_BANDLIMITED_SAW_6_SIZE 257
#define WAV_RES_BANDLIMITED_TRIANGLE_0 17
#define WAV_RES_BANDLIMITED_TRIANGLE_0_SIZE 257
#define WAV_RES__BANDLIMITED_TRIANGLE_0 18
#define WAV_RES__BANDLIMITED_TRIANGLE_0_SIZE 257
#define WAV_RES___BANDLIMITED_TRIANGLE_0 19
#define WAV_RES___BANDLIMITED_TRIANGLE_0_SIZE 257
#define WAV_RES_BANDLIMITED_TRIANGLE_3 20
#define WAV_RES_BANDLIMITED_TRIANGLE_3_SIZE 257
#define WAV_RES_BANDLIMITED_TRIANGLE_4 21
#define WAV_RES_BANDLIMITED_TRIANGLE_4_SIZE 257
#define WAV_RES_BANDLIMITED_TRIANGLE_5 22
#define WAV_RES_BANDLIMITED_TRIANGLE_5_SIZE 257
#define WAV_RES_BANDLIMITED_TRIANGLE_6 23
#define WAV_RES_BANDLIMITED_TRIANGLE_6_SIZE 257
#define WAV_RES_VOWEL_DATA 24
#define WAV_RES_VOWEL_DATA_SIZE 63
#define WAV_RES_EXPANSION_KRAMA 25
#define WAV_RES_EXPANSION_KRAMA_SIZE 30
#define WAV_RES_EXPANSION_JATA 26
#define WAV_RES_EXPANSION_JATA_SIZE 90
#define WAV_RES_EXPANSION_SIKHA 27
#define WAV_RES_EXPANSION_SIKHA_SIZE 126
#define WAV_RES_EXPANSION_GHANA 28
#define WAV_RES_EXPANSION_GHANA_SIZE 182
#define WAV_RES_DISTORTION 29
#define WAV_RES_DISTORTION_SIZE 256
#define WAV_RES_ENV_EXPO 30
#define WAV_RES_ENV_EXPO_SIZE 257
#define WAV_RES_SSM2164_LINEARIZATION 31
#define WAV_RES_SSM2164_LINEARIZATION_SIZE 64
#define WAV_RES_WAVES 32
#define WAV_RES_WAVES_SIZE 16383
#define WAV_RES_WAVETABLES 33
#define WAV_RES_WAVETABLES_SIZE 324
#define CHR_RES_SPECIAL_CHARACTERS 0
#define CHR_RES_SPECIAL_CHARACTERS_SIZE 56
typedef avrlib::ResourcesManager<
    ResourceId,
    avrlib::ResourcesTables<
        string_table,
        lookup_table_table> > ResourcesManager; 

}  // namespace shruthi

#endif  // SHRUTHI_RESOURCES_H_
