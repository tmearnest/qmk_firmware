/* Copyright 2017 REPLACE_WITH_YOUR_NAME
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef TME_HW_H
#define TME_HW_H

#include "quantum.h"

// This a shortcut to help you visually see your layout.
// The following is an example using the Planck MIT layout
// The first section contains all of the arguments
// The second converts the arguments into a two-dimensional array
//
// readability
#define XXX KC_NO

/*
### ### ### ### ### ### ### ### ### ### ### ### ### ########
##### ### ### ### ### ### ### ### ### ### ### ### ### ######
###### ### ### ### ### ### ### ### ### ### ### ### #########
######## ### ### ### ### ### ### ### ### ### ### ###### ####
### #### ##### ######################## ##### #### #### ####

#a# #b# #c# #d# #e# #f# #g# #h# #i# #j# #k# #l# #m# ####n###
##a## #b# #c# #d# #e# #f# #g# #h# #i# #j# #k# #l# #m# ##n###
##a### #b# #c# #d# #e# #f# #g# #h# #i# #j# #k# #l# #####n###
###a#### #c# #d# #e# #f# #g# #h# #i# #j# #k# #l# ##m### #n##
#a# #b## ##c## ###########g############ ##k## #l## ##m# #n##

k00,k01,k02,k03,k04,k05,k06,k07,k08,k09,k0a,k0b,k0c,k0d    ,\
k10  ,k11,k12,k13,k14,k15,k16,k17,k18,k19,k1a,k1b,k1c,k1d  ,\
k20   ,k21,k22,k23,k24,k25,k26,k27,k28,k29,k2a,k2b,k2c     ,\
k30     ,k32,k33,k34,k35,k36,k37,k38,k39,k3a,k3b,k3c   ,k3d,\
k40,k41 ,k42  ,k46                     ,k4a  ,k4b ,k4c ,k4d 
 
 */
// The first section contains all of the arguments
// The second converts the arguments into a two-dimensional array
#define KEYMAP( \
k00,k01,k02,k03,k04,k05,k06,k07,k08,k09,k0a,k0b,k0c,k0d    ,\
k10  ,k11,k12,k13,k14,k15,k16,k17,k18,k19,k1a,k1b,k1c,k1d  ,\
k20   ,k21,k22,k23,k24,k25,k26,k27,k28,k29,k2a,k2b,   k2d  ,\
k30     ,k32,k33,k34,k35,k36,k37,k38,k39,k3a,k3b,k3c   ,k3d,\
k40,k41 ,k42  ,k46                     ,k4a  ,k4b ,k4c ,k4d \
) \
{{k0d, k0c, k0b, k0a, k09, k08, k07, k06, k05, k04, k03, k02, k01, k00},\
 {k1d, k1c, k1b, k1a, k19, k18, k17, k16, k15, k14, k13, k12, k11, k10},\
 {k2d, XXX, k2b, k2a, k29, k28, k27, k26, k25, k24, k23, k22, k21, k20},\
 {k3d, k3c, k3b, k3a, k39, k38, k37, k36, k35, k34, k33, k32, XXX, k30},\
 {k4d, k4c, k4b, k4a, XXX, XXX, XXX, k46, XXX, XXX, XXX, k42, k41, k40}}


// {k00,k01,k02,k03,k04,k05,k06,k07,k08,k09,k0a,k0b,k0c,k0d},
// {k10,k11,k12,k13,k14,k15,k16,k17,k18,k19,k1a,k1b,k1c,k1d},
// {k20,k21,k22,k23,k24,k25,k26,k27,k28,k29,k2a,k2b,k2c,XXX},
// {k30,XXX,k32,k33,k34,k35,k36,k37,k38,k39,k3a,k3b,k3c,k3d},
// {k40,k41,k42,XXX,XXX,XXX,k46,XXX,XXX,XXX,k4a,k4b,k4c,k4d}
//}

#endif
