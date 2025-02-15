// Copyright 2013-2020 Automatak, LLC
//
// Licensed to Green Energy Corp (www.greenenergycorp.com) and Automatak
// LLC (www.automatak.com) under one or more contributor license agreements. 
// See the NOTICE file distributed with this work for additional information
// regarding copyright ownership. Green Energy Corp and Automatak LLC license
// this file to you under the Apache License, Version 2.0 (the "License"); you
// may not use this file except in compliance with the License. You may obtain
// a copy of the License at:
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Automatak.DNP3.Interface
{
    /// <summary>
    /// Aggreate configuration for an outstation stack
    /// </summary>
    public class OutstationStackConfig
    {
        /// <summary>
        /// Constructor with reasonable defaults and an empty database
        /// </summary>
        public OutstationStackConfig()
        {
            this.outstation = new OutstationConfig();
            this.databaseTemplate = new DatabaseTemplate();
            this.link = new LinkConfig(false);
        }
      
        /// <summary>
        /// Outstation config
        /// </summary>
        public OutstationConfig outstation;

        /// <summary>
        /// Device template that specifies database layout, control behavior
        /// </summary>
        public DatabaseTemplate databaseTemplate;

        /// <summary>
        /// Link layer config
        /// </summary>
        public LinkConfig link;
    }

}
