/*
 * rescore_moses.h
 *
 *  Created on: 12 Jan 2017
 *      Author: hieu
 */
#pragma once
#include "common/scorer.h"

struct HypoInfo
{
  std::vector<size_t> words;
  States prevStates;
  States nextStates;
  float score;
};


