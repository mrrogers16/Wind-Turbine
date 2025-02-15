/*
 * Copyright 2013-2020 Automatak, LLC
 *
 * Licensed to Green Energy Corp (www.greenenergycorp.com) and Automatak
 * LLC (www.automatak.com) under one or more contributor license agreements.
 * See the NOTICE file distributed with this work for additional information
 * regarding copyright ownership. Green Energy Corp and Automatak LLC license
 * this file to you under the Apache License, Version 2.0 (the "License"); you
 * may not use this file except in compliance with the License. You may obtain
 * a copy of the License at:
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef OPENDNP3_OUTSTATIONSTACKCONFIG_H
#define OPENDNP3_OUTSTATIONSTACKCONFIG_H

#include "opendnp3/link/LinkConfig.h"
#include "opendnp3/outstation/DatabaseConfig.h"
#include "opendnp3/outstation/EventBufferConfig.h"
#include "opendnp3/outstation/OutstationConfig.h"

namespace opendnp3
{

/**
    A composite configuration struct that contains all the config
    information for a dnp3 outstation stack
*/
struct OutstationStackConfig
{
    OutstationStackConfig() : link(false) {}

    OutstationStackConfig(const DatabaseConfig& database) : database(database), link(false) {}

    // Configuration of the database
    DatabaseConfig database;

    /// Outstation config
    OutstationConfig outstation;

    /// Link layer config
    LinkConfig link;
};

} // namespace opendnp3

#endif
