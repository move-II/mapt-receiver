/**
 * Copyright (C) 2016  Jonas Sticha (jonas.sticha@tum.de)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 **/

#include "CommandHandler.h"

CommandHandler::CommandHandler(DataHandler& dataHandler) :
    dataHandler(dataHandler) {
}

void CommandHandler::handleCommand(Command command) {
    switch (command.getType()) {
        //TODO: Define new commands
        //case SEND_DATA_TO_GROUND_STATION_CMD : dataHandler.sendAllStoredData(); break;
        //case ACTIVATE_DATA_PASSTHROUGH_MODE_CMD : dataHandler.setPassthroughMode(true); break;
        //case DEACTIVATE_DATA_PASSTHROUGH_MODE_CMD : dataHandler.setPassthroughMode(false); break;
        default: break;//Implement unknown command routine
    }
}
