/*
 * Copyright (c) 2013-Forward, Andrew "Art" Clarke
 *
 * This file is part of Humble Video.
 * 
 * Humble Video is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * Humble Video is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 * 
 * You should have received a copy of the GNU Affero General Public License
 * along with Humble Video.  If not, see <http://www.gnu.org/licenses/>.
 *
 * SinkFormatTest.h
 *
 *  Created on: Jun 28, 2013
 *      Author: aclarke
 */

#ifndef SINKFORMATTEST_H_
#define SINKFORMATTEST_H_

#include <io/humble/testutils/TestUtils.h>

class SinkFormatTest : public CxxTest::TestSuite
{
public:
  SinkFormatTest();
  virtual ~SinkFormatTest();
  void setUp();
  void tearDown();
  void testCreateSinkFormat();
  void testInstallation();
};

#endif /* SINKFORMATTEST_H_ */
