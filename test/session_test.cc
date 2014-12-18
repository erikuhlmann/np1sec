/**
 * Multiparty Off-the-Record Messaging library
 * Copyright (C) 2014, eQualit.ie
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of version 3 of the GNU Lesser General
 * Public License as published by the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#include <gtest/gtest.h>
#include "src/session.h"

class SessionTest : public ::testing::Test{};

TEST_F(SessionTest, test_send) {

}

TEST_F(SessionTest, test_receive){

}


// TEST_F(SessionTest, test_init) {
//   std::string name = "tester";
//   std::string room_name = "room";
//   np1secSession new_session(room_name, name);
//   ASSERT_TRUE(new_session.join());
// }